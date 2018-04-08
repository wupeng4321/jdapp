//
//  JDShopCarGoodsCardCell.swift
//  jdapp
//
//  Created by wupeng on 2018/4/9.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class JDShopCarGoodsCardCell: UITableViewCell {
    
//    let padding = Theme.paddingWithSize(16)
//    let width = (kScreenWidth - kPadding) / 2.0
    
    override init(style: UITableViewCellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        self.createUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }
    
    func createUI() {
        self.contentView.addSubview(self.iconImageView)
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
    
    lazy var titleLable: UILabel = {
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

    

    

    

    

    
    
    

}
