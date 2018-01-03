//
//  GoodsView.swift
//  jdapp
//
//  Created by wupeng on 2018/1/3.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class GoodsView: UIView {
    /*
     default
     *********************      ******************************************
     *                   *      *               * goods detail           *
     *                   *      *               *                        *
     *     image         *      *    image      * price info             *
     *                   *      *               *                        *
     *                   *      *               * 自营 本地仓 评价          *
     *                   *      *               *                        *
     *********************      ******************************************
     *  goods detail     *
     *  price info       *
     *  自营 本地仓 评价    *
     *                   *
     *********************
     */
    
    var _model: GoodsViewModel?
    // default 模式下image距离self底部的高度
    let defaultHeight = Theme.paddingWithSize(160)
    
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
    }
    
    //MARK: - setup UI
    func setupUI() {
        self.addSubview(imageView)
        self.addSubview(goodsDetailLabel)
        self.addSubview(priceInfoView)
        self.addSubview(estimateView)
    }
    
    //MARK: - layout
    func defaultLayout() {
        imageView.snp.remakeConstraints { (make) -> Void in
            make.top.left.right.equalTo(self)
            make.bottom.equalTo(self.snp.bottom).offset(defaultHeight)
        }
        goodsDetailLabel.snp.remakeConstraints { (make) -> Void in
            make.top.left.right.equalTo(imageView)
            make.height.equalTo(goodsDetailLabel.font.lineHeight)
        }
        priceInfoView.snp.remakeConstraints { (make) -> Void in
            make.top.left.right.equalTo(goodsDetailLabel)
            make.height.equalTo(Theme.paddingWithSize(40))
        }
        estimateView.snp.remakeConstraints { (make) -> Void in
            make.top.left.right.equalTo(priceInfoView)
            make.bottom.equalTo(self)
        }
        super.updateConstraints()
    }
    
    func normalLayout() {
        imageView.snp.remakeConstraints { (make) -> Void in
            
        }
        goodsDetailLabel.snp.remakeConstraints { (make) -> Void in
            
        }
        goodsDetailLabel.snp.remakeConstraints { (make) -> Void in
            
        }
        goodsDetailLabel.snp.remakeConstraints { (make) -> Void in
            
        }
        super.updateConstraints()
    }
    
    //MARK: - lazy loading
    var imageView: UIImageView = {
        let imageView = UIImageView()
        imageView.backgroundColor = ArcRandomColor()
        return imageView
    }()
    var goodsDetailLabel: UILabel = {
        let goodsDetailLabel = UILabel()
        goodsDetailLabel.numberOfLines = 2
        return goodsDetailLabel
    }()
    var priceInfoView: UIView = {
        let priceInfoView = UIView()
        priceInfoView.backgroundColor = ArcRandomColor()
        let label = UILabel()
        label.backgroundColor = ArcRandomColor()
        priceInfoView.addSubview(label)
        return priceInfoView
    }()
    var estimateView: UIView = {
        let estimateView = UIView()
        estimateView.backgroundColor = ArcRandomColor()
        return estimateView
    }()
    
    //MARK: - setter and getter
    var model:GoodsViewModel? {
        get {
            return _model
        }
        set(model) {
            _model = model
        }
    }
}
