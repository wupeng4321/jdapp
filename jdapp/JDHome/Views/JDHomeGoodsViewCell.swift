//
//  JDHomeGoodsViewCell.swift
//  jdapp
//
//  Created by wupeng on 2018/1/3.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class JDHomeGoodsViewCell: UICollectionViewCell {
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.contentView.addSubview(GoodsView(frame: frame))
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
