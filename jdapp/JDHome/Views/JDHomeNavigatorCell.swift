//
//  JDHomeNavigatorCell.swift
//  jdapp
//
//  Created by wupeng on 2017/12/29.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDHomeNavigatorCell: UICollectionViewCell {

    override func awakeFromNib() {
        super.awakeFromNib()
       
    }
    
//    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
//        super.init(style: style, reuseIdentifier: reuseIdentifier)
//        self.setupUI()
//    }
    override init(frame: CGRect) {
        super.init(frame: frame)
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        let navigatior = NavigatorScrollView()
        let jdFastViews = UIView()
        self.contentView.addSubview(navigatior)
        self.contentView.addSubview(jdFastViews)
        navigatior.snp.makeConstraints { (make) -> Void in
            make.centerX.width.top.equalTo(self.contentView)
            make.bottom.equalTo(self.contentView).offset(Theme.paddingWithSize(50))
        }
        jdFastViews.snp.makeConstraints { (make) -> Void in
            make.bottom.equalTo(self.contentView)
            make.left.equalTo(self.contentView).offset(kPadding)
            make.right.equalTo(self.contentView).offset(-kPadding)
            make.top.equalTo(navigatior.snp.bottom)
        }
        

    }
    

}
