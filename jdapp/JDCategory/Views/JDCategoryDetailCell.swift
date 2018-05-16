//
//  JDCategoryDetailCell.swift
//  jdapp
//
//  Created by wupeng on 2018/5/16.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON
import Kingfisher


class JDCategoryDetailCell: UICollectionViewCell {
    
    var _dic: JSON?
    var indexPath: IndexPath?

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        weak var weakSelf = self
        self.contentView .addSubview(self.goodImageView)
        self.goodImageView.snp.makeConstraints { (make) in
            make.top.left.right.equalTo((weakSelf?.contentView)!)
            make.height.equalTo(padding(180))
        }
    }
    
    lazy var goodImageView: UIImageView = {
        let imageView: UIImageView = UIImageView()
    
        return imageView
    }()
    
    //MARK: - setter & getter
    var dic: JSON?{
        set(dic){
            guard dic != nil else {
                return
            }
            _dic = dic
            self.updateUIWith(dic: _dic!)
        }
        get {
            return _dic!
        }
    }

    func updateUIWith(dic: JSON) {
        let catelogyLsit = dic["data"][1]["catelogyList"]
        let catelogy = catelogyLsit[(indexPath?.row)!]
        if catelogy["icon"].string != nil {
            let url = URL(string: catelogy["icon"].string!)
            self.goodImageView.kf.setImage(with: url)
        }
    }

}
