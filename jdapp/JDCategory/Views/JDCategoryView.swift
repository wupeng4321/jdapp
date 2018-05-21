//
//  JDCategoryView.swift
//  jdapp
//
//  Created by wupeng on 2018/5/20.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import SwiftyJSON
import Kingfisher
import SDWebImage

class JDCategoryView: UIView {
    
    var _source: JSON?

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.createUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    /*
     ************
     *          *
     *  image   *
     *          *
     ************
     
     ************
     * label    *
     ************
     */
    
    func createUI() {
        self.addSubview(imageView, label)
        weak var weakSelf = self
        self.imageView.snp.makeConstraints { (make) in
            make.left.right.equalTo(weakSelf!)
            make.top.equalTo(weakSelf!.snp.top)
            make.bottom.equalTo((weakSelf?.snp.bottom)!).offset(-padding(100))
        }
        self.label.snp.makeConstraints { (make) in
            make.bottom.left.right.equalTo(weakSelf!)
            make.top.equalTo((weakSelf?.imageView.snp.bottom)!)
        }
    }
    
    lazy var imageView: UIImageView = {
        let imageView = UIImageView()
        return imageView
    }()
    
    lazy var label: UILabel = {
        let label = UILabel()
        return label
    }()
    
    
    //MARK: - setter & getter
    var source: JSON?{
        set(source){
            guard source != nil else {
                return
            }
            _source = source
            self.updateUIWith(source: _source!)
        }
        get {
            return _source!
        }
    }

    func updateUIWith(source: JSON) {
        let urlStr = source["icon"].string!
        var str : NSString = NSString()
        if urlStr.contains(".webp") {
            str = NSString(string: urlStr)
            str = str.substring(to: str.length - 5) as NSString
        }
        let url = URL(string: str as String)!
        
        self.imageView.kf.setImage(with: url)
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

}
