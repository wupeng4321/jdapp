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

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.createUI()
    }

    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func createUI() {
        self.contentView.addSubview(view1, view2)
        self.contentView.addSubview(iconImageView, deleteImageView, titlesLable, subtitleLable)
        self.contentView.addSubview(priceLable, countLable, realPriceLable, plusImageView)
        self.setupView()
    }
    func setupView() {
        weak var weakSelf = self
        self.iconImageView.snp.makeConstraints { (make) in
            make.top.left.right.equalTo((weakSelf?.contentView)!)
            make.bottom.equalTo((weakSelf?.contentView.snp.bottom)!).offset(-Theme.paddingWithSize(160))
        }
        self.view1.snp.makeConstraints { (make) in
            make.left.right.equalTo((weakSelf?.contentView)!)
            make.top.equalTo((weakSelf?.iconImageView.snp.bottom)!)
            make.bottom.equalTo((weakSelf?.contentView)!).offset(-Theme.paddingWithSize(70))
        }
        self.deleteImageView.snp.makeConstraints { (make) in
            make.right.top.equalTo((weakSelf?.iconImageView)!)
            make.width.height.equalTo(Theme.paddingWithSize(20))
        }
//        self.priceLable.snp.makeConstraints { (make) in
//            make.left.equalTo((weakSelf?.iconImageView)!);
//            make.top.equalTo((weakSelf?.view1.snp.bottom)!)
//            make.bottom.equalTo((weakSelf?.contentView)!)
//        }
        self.view2.snp.makeConstraints { (make) in
            make.left.right.equalTo((weakSelf?.view1)!)
            make.top.equalTo((weakSelf?.view1.snp.bottom)!)
            make.bottom.equalTo((weakSelf?.contentView)!)
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
        deleteImageView.backgroundColor = ArcRandomColor()
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
    
    lazy var view1: UITextView = {
        let view1 = UITextView()
        view1.indicatorStyle = .default
//        view1.textContainer.maximumNumberOfLines = 3
        view1.textContainer.lineBreakMode = .byTruncatingTail
        view1.isEditable = false
        view1.isSelectable = false
        view1.isScrollEnabled = false
        view1.contentInset = UIEdgeInsetsMake(Theme.paddingWithSize(-8), 0, 0, 0)
        let attributes = [NSAttributedStringKey.paragraphStyle : self.textViewStyle()];
        view1.attributedText = NSAttributedString(string: view1.text, attributes: attributes)
        view1.backgroundColor = ArcRandomColor()
        return view1
    }()
    
    lazy var view2: UITextView = {
        let view2 = UITextView()
        view2.indicatorStyle = .default
        view2.textContainer.maximumNumberOfLines = 2
        view2.textContainer.lineBreakMode = .byTruncatingTail
        view2.isEditable = false
        view2.isSelectable = false
        view2.isScrollEnabled = false
        view2.backgroundColor = ArcRandomColor()
        return view2
    }()
    
    func textViewStyle() -> NSMutableParagraphStyle {
        let style = NSMutableParagraphStyle()
        style.lineSpacing = Theme.paddingWithSize(2)
        return style
    }
    
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
        //清空某些数据
        self.reset()
        JDLog((indexPath?.row)! - 1)
        var source = dic["wareInfoList"][((indexPath?.row)! - 1)]
        let urlStr = source["imageurl"].string!
        let url = URL(string: urlStr)
        self.iconImageView.kf.setImage(with: url)
        
        let title = source["wname"].string!
        let markUrl:URL?
        self.view1.text = nil;
        if source["markImageUrl"].string != nil {
            markUrl = URL(string: source["markImageUrl"].string!)
            let downLoader = ImageDownloader.default
            weak var weakSelf = self
            downLoader.downloadImage(with: markUrl!, retrieveImageTask: nil, options: nil, progressBlock: nil) { (image, error, imageUrl, data) in
                weakSelf?.view1.insertPicture(image!, mode: .fitTextLine)
                weakSelf?.view1.insertText(title)
            }
        }
        
        self.view1.insertText(title)
        var price = source["jdPrice"].string!
        let attributePrice = price.toPriceString()
        self.view2.insertAttributedString(attributePrice)
    }
    
    func reset() {
        self.view1.attributedText = nil
        self.view2.attributedText = nil
    }

}
