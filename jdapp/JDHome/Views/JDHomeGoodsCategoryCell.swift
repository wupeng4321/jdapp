//
//  JDHomeGoodsCategoryCell.swift
//  jdapp
//
//  Created by wupeng on 2018/1/2.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class JDHomeGoodsCategoryCell: UICollectionViewCell {
    
    var _model: JDHomeGoodCategoryViewModel?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.layer.borderWidth = 0.3
        self.layer.borderColor = ArcRandomColor().cgColor
        self.setupUI()
    }
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        self.contentView.addSubview(label)
        self.contentView.addSubview(subLabel)
        self.contentView.addSubview(imageView)
        self.contentView.addSubview(subImageView)
        self.contentView.addSubview(subLittleImageView)
        label.snp.makeConstraints { (make) -> Void in
            make.top.equalTo(self.contentView).offset(5)
            make.left.equalTo(self.contentView).offset(kPadding)
            make.right.equalTo(self.contentView).offset(-kPadding)
            make.height.equalTo(label.font.lineHeight)
        }
        subLabel.snp.makeConstraints { (make) -> Void in
            make.left.right.equalTo(label)
            make.top.equalTo(label.snp.bottom)
            make.height.equalTo(subLabel.font.lineHeight)
        }
        imageView.snp.makeConstraints { (make) -> Void in
            make.left.right.bottom.equalTo(self.contentView)
            make.top.equalTo(subLabel.snp.bottom)
        }
        subImageView.snp.makeConstraints { (make) -> Void in
            make.bottom.right.equalTo(self.contentView)
            make.width.height.equalTo(0)
        }
        subLittleImageView.snp.makeConstraints { (make) -> Void in
            make.bottom.right.equalTo(self.contentView)
            make.width.height.equalTo(0)
        }
    }
    
    
    
    
    //MARK: - lazy loading
    var label: UILabel = {
        let label: UILabel = UILabel()
        label.backgroundColor = ArcRandomColor()
        label.font = Theme.fontWithSize(32.0)
        return label
    }()
    
    var subLabel: UILabel = {
        let label: UILabel = UILabel()
        label.font = Theme.fontWithSize(20.0)
        label.backgroundColor = ArcRandomColor()
        return label
    }()
    
    var imageView: UIImageView = {
        let image: UIImageView = UIImageView()
        image.backgroundColor = ArcRandomColor()
        return image
    }()
    
    var subImageView: UIImageView = {
        let subImage: UIImageView = UIImageView()
        subImage.isHidden = true
        subImage.backgroundColor = ArcRandomColor()
        return subImage
    }()
    
    var subLittleImageView: UIImageView = {
        let subImage: UIImageView = UIImageView()
        subImage.isHidden = true
        subImage.backgroundColor = ArcRandomColor()
        return subImage
    }()
    
    
    
    
    
}
