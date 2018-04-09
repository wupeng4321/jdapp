//
//  JDShopCarGoodsCardCell.swift
//  jdapp
//
//  Created by wupeng on 2018/4/9.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import SwiftyJSON
import Kingfisher

class JDShopCarGoodsCardCell: UICollectionViewCell {
    
//    let padding = Theme.paddingWithSize(16)
//    let width = (kScreenWidth - kPadding) / 2.0
    
    var _dic: JSON?
    var indexPath: IndexPath?

//    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
//        super.init(style: style, reuseIdentifier: reuseIdentifier)
//        self.createUI()
//    }
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.createUI()
    }

    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func createUI() {
        self.contentView.addSubview(iconImageView, deleteImageView, titlesLable, subtitleLable)
        self.contentView.addSubview(priceLable, countLable, realPriceLable, plusImageView)
        self.setupView()
    }
    func setupView() {
        weak var weakSelf = self
        self.iconImageView.snp.makeConstraints { (make) in
            make.top.left.right.equalTo((weakSelf?.contentView)!)
            make.bottom.equalTo((weakSelf?.contentView.snp.bottom)!).offset(-Theme.paddingWithSize(100))
        }
    }
    
    //MARK: lazy loading
    lazy var iconImageView: UIImageView = {
        let iconImageView = UIImageView()
        return iconImageView
    }()
    
    lazy var deleteImageView: UIImageView = {
        let deleteImageView = UIImageView()
        deleteImageView.isUserInteractionEnabled = true
        return deleteImageView
    }()
    
    lazy var titlesLable: UILabel = {
        let titleLabel = UILabel()
        return titleLabel
    }()
    lazy var subtitleLable: UILabel = {
        let subtitleLabel = UILabel()
        return subtitleLabel
    }()
    lazy var priceLable: UILabel = {
        let priceLable = UILabel()
        return priceLable
    }()
    lazy var countLable: UILabel = {
        let countLable = UILabel()
        return countLable
    }()
    lazy var realPriceLable: UILabel = {
        let realPriceLable = UILabel()
        return realPriceLable
    }()
    lazy var plusImageView: UIImageView = {
        let plusImageView = UIImageView()
        plusImageView.isUserInteractionEnabled = true
        return plusImageView
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
        let urlStr = dic["wareInfoList"][(indexPath?.row)!]["imageurl"].string!
        let url = URL(string: urlStr)
        self.iconImageView.kf.setImage(with: url)
    }
}
