//
//  JDRecommendHeaderCell.swift
//  jdapp
//
//  Created by wupeng on 2018/4/10.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class JDRecommendHeaderCell: UICollectionViewCell {
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.createUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func createUI() {
        weak var weakSelf = self
        let recommendLabel = UILabel()
        recommendLabel.text = "为你推荐"
        recommendLabel.textAlignment = .center
        recommendLabel.font = Theme.fontWithSize(40)
        self.contentView.addSubview(recommendLabel)
        recommendLabel.snp.makeConstraints({ (make) in
            make.center.height.equalTo((weakSelf?.contentView)!)
            make.width.equalTo(Theme.paddingWithSize(200))
        })
        self.backgroundColor = ArcRandomColor()
    }
}
