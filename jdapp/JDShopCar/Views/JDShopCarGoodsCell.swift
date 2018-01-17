//
//  ShopCarGoodsCell.swift
//  jdapp
//
//  Created by wupeng on 2018/1/8.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import SwiftyJSON
import Kingfisher

/*
 1-2-3为optional,为满减等等商家优惠信息
 1.满减label
 2.相应的info
 3.去凑单
 4.selected image view
 5.goods image view
 6.goods decision info
 7.color
 8.optional 选服务
 9.optional 白条免息
 10.价格
 11.count button
 12.商家赠品信息
 ****1  *******2                     ******3
 
 ****4  ********   *************6
 ****   *  5   *   *******7          ******8
        *      *   *******9
        ********   *******10        ******11
 *****************************************12
 *******************************************
 */

class JDShopCarGoodsCell: UICollectionViewCell {
    
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
        self.contentView.addSubview(view1, view2, view3)
        self.setupView1()
        self.setupView2()
    }
    
    let normalFont = Theme.fontWithSize(20)
    
    func setupView1() {
        self.view1.snp.makeConstraints { (make) in
            make.top.left.right.equalTo(self.contentView)
            make.height.equalTo(Theme.paddingWithSize(80))
        }
        self.view1.addSubview(boundLabel, infoLabel, addGoodsBtn)
        let a = calculateWidth(str: String(describing: self.boundLabel.text), font: self.boundLabel.font)
        let boundLabelWidth = Theme.paddingWithSize(a + 4) / 2
        self.boundLabel.snp.makeConstraints { (make) in
            make.left.equalTo(self.view1).offset(Theme.paddingWithSize(20))
            make.top.equalTo(self.view1).offset(Theme.paddingWithSize(30))
            make.width.equalTo(boundLabelWidth)
            make.height.equalTo(self.boundLabel.font.lineHeight)
        }
        self.infoLabel.snp.makeConstraints { (make) in
            make.left.equalTo(self.boundLabel.snp.right).offset(Theme.paddingWithSize(20))
            make.top.bottom.equalTo(self.boundLabel)
        }
        self.addGoodsBtn.snp.makeConstraints { (make) in
            make.right.equalTo(self.view1.snp.right).offset(-kPadding)
            make.top.bottom.equalTo(self.boundLabel)
        }
    }
    
    func setupView2() {
        self.view2.snp.makeConstraints { (make) in
            make.top.equalTo(self.view1.snp.bottom)
            make.left.right.equalTo(self.contentView)
            make.bottom.equalTo(self.contentView)
        }
        self.view2.addSubview(selectedBtn, imageView)
        self.selectedBtn.snp.makeConstraints { (make) in
            make.left.equalTo(self.view2).offset(Theme.paddingWithSize(20))
            make.centerY.equalTo(self.view2)
            make.width.height.equalTo(Theme.paddingWithSize(40))
        }
        self.imageView.snp.makeConstraints({ (make) in
            make.top.bottom.equalTo(self.view2)
            make.left.equalTo(self.view2).offset(Theme.paddingWithSize(82))
            make.width.equalTo(Theme.paddingWithSize(220))
        })
    }
    
    //MARK: - lazy loading
    //满减优惠信息:view1 contains 1-3
    lazy var view1: UIView = {
        let view: UIView = UIView()
        return view
    }()
    
    lazy var boundLabel: UILabel = {
        let label: UILabel = UILabel()
        label.boundLabel(0.5, 0.5, UIColor.red)
        label.font = normalFont
        label.textAlignment = .center
        label.text = "满减"
        return label
    }()
    
    lazy var infoLabel: UILabel = {
        let infoLabel: UILabel = UILabel()
        infoLabel.text = "购物满30元, 可减10元"
        infoLabel.font = normalFont
        return infoLabel
    }()
    
    lazy var addGoodsBtn: UIButton = {
        let addGoodsBtn: UIButton = UIButton()
        addGoodsBtn.titleLabel?.font = normalFont
        addGoodsBtn.setTitleColor(UIColor.red, for: .normal)
        addGoodsBtn.setTitle("去凑单", for: .normal)
        return addGoodsBtn
    }()
    
    //goods info:view1 contains 4-11
    lazy var view2: UIView = {
        let view: UIView = UIView()
        return view
    }()

    lazy var selectedBtn: UIButton = {
        let selectedBtn: UIButton = UIButton()
        selectedBtn.backgroundColor = ArcRandomColor()
        return selectedBtn
    }()
    
    lazy var imageView: UIImageView = {
        let imageView: UIImageView = UIImageView()
        imageView.boundsToCorderRadius(5.0)
        imageView.layer.borderWidth = 0.5
        imageView.layer.borderColor = kColorDimGray.cgColor
        imageView.backgroundColor = ArcRandomColor()
        return imageView
    }()
    
    lazy var goodsInfoLabel: UILabel = {
        let goodsInfoLabel: UILabel = UILabel()
        goodsInfoLabel.textColor = UIColor.black
        goodsInfoLabel.numberOfLines = 2
        goodsInfoLabel.font = normalFont
        return goodsInfoLabel
    }()
    
    lazy var goodsColorLabel: UILabel = {
        let goodsColorLabel: UILabel = UILabel()
        return goodsColorLabel
    }()
    
    lazy var goodsServicesLabel: UILabel = {
        let goodsServicesLabel: UILabel = UILabel()
        return goodsServicesLabel
    }()
    
    lazy var paymentLabel: UILabel = {
        let paymentLabel: UILabel = UILabel()
        return paymentLabel
    }()
    
    lazy var priceLabel:UILabel = {
        let priceLabel: UILabel = UILabel()
        return priceLabel
    }()
    
    lazy var minBtn: UIButton = {
        let minBtn: UIButton = UIButton()
        return minBtn
    }()
    
    lazy var countLabel: UILabel = {
        let countLabel: UILabel = UILabel()
        return countLabel
    }()
    
    lazy var plusBtn: UIButton = {
        let plusBtn: UIButton = UIButton()
        return plusBtn
    }()
    
    //赠品info:view3 contains 12
    lazy var view3: UIView = {
        let view3: UIView = UIView()
        return view3
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
        guard dic != JSON.null else {
            return
        }
        let section: Int = (indexPath?.section)!
        let row: Int = (indexPath?.row)!
        let str1 = dic["imageDomain"].string!
        var str2:String?
        
        // 判断有没有items
        // 有items,goods的具体数据在sorted->[下标]->item->items里面
        // 没有items,goods的数据在sorted->[下标]->item
        let items = dic["cartInfo"]["vendors"][section]["sorted"][row]["item"]["items"].array
        if items != nil {
            str2 = dic["cartInfo"]["vendors"][section]["sorted"][row]["item"]["items"][0]["item"]["ImgUrl"].string!
        } else {
            str2 = dic["cartInfo"]["vendors"][section]["sorted"][row]["item"]["ImgUrl"].string!
        }
        let str: String? = str1 + str2!
        guard str != nil else {
            return
        }
        let url = URL(string: str!)
        self.imageView.kf.setImage(with: url)
    }
    
    
    
    
    
    
    
    
    
    
    
    
}
