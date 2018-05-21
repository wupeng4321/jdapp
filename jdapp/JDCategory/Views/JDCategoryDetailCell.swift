//
//  JDCategoryDetailCell.swift
//  jdapp
//
//  Created by wupeng on 2018/5/16.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import SwiftyJSON

class JDCategoryDetailCell: UICollectionViewCell {
    
    var _dic: JSON?

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        self.contentView.addSubview(self.view)
    }
    
    lazy var view: JDCategoryView = {
        let view: JDCategoryView = JDCategoryView(frame: self.bounds)

        return view
    }()
    
//    MARK: - setter & getter
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
        self.view.source = dic;
    }

}
