//
//  JDShopCarGoodsStoreView.swift
//  jdapp
//
//  Created by wupeng on 2018/1/8.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import SwiftyJSON

class JDShopCarGoodsStoreView: UICollectionReusableView {
    var _dic: JSON?
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    /*
     1.可以点击的view,用来是否全选该商家的所有商品
     2.一个图标
     3.商家名称
     4.一个箭头
     5.optional,优惠信息
     ****   ****   ***********  ****       *******
     * 1*   * 2*   *    3    *  * 4*       *  5  *
     ****   ****   ***********  ****       *******
     注:测试的时候发现点击箭头不会跳转,应该只是一个view,没有添加点击事件
     结构为:1:UIButton 2+3:UIButton 4:UIImageView 5:UIbutton
     */
    func setupUI() {
        self.addSubview(self.selectedBtn)
        self.addSubview(self.storeBtn)
        self.addSubview(self.goView)
        self.addSubview(self.info)
        self.selectedBtn.snp.makeConstraints { (make) -> Void in
            make.left.top.bottom.equalTo(self)
            make.width.equalTo(Theme.paddingWithSize(88))
        }
        self.storeBtn.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(self.selectedBtn.snp.right)
            make.top.bottom.equalTo(self)
            make.width.equalTo(Theme.paddingWithSize(200))
        }
        self.goView.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(self.storeBtn.snp.right)
            make.top.bottom.equalTo(self)
            make.width.equalTo(Theme.paddingWithSize(40))
        }
        self.info.snp.makeConstraints { (make) -> Void in
            make.right.equalTo(self.snp.right).offset(-kPadding)
            make.top.bottom.equalTo(self)
            make.width.equalTo(Theme.paddingWithSize(100))
        }
    }
    
    func updateUIWith(dic: JSON) -> Void {
        guard dic != JSON.null else {
            return
        }
        
        let str:String = dic["shopName"].string! + " >"
        self.storeBtn.setTitle(str, for: .normal)
        self.storeBtn.titleLabel?.font = Theme.fontWithSize(24)
        self.storeBtn.snp.updateConstraints { (make) -> Void in
            make.width.equalTo(calculateWidth(str: str, font: (self.storeBtn.titleLabel?.font)!) + Theme.paddingWithSize(40))
        }
    }
    
    //MARK: - lazy loading
    let selectedBtn: UIButton = {
        let selectedBtn: UIButton = UIButton()
        selectedBtn.backgroundColor = ArcRandomColor()
        return selectedBtn
    }()
    let storeBtn: UIButton = {
        let storeBtn: UIButton = UIButton()
        storeBtn.setTitle("", for: .normal)
        storeBtn.setTitleColor(UIColor.black, for: .normal)
        storeBtn.titleLabel?.textAlignment = .left
        return storeBtn
    }()
    let goView: UIView = {
        let goView: UIView = UIView()
        goView.backgroundColor = ArcRandomColor()
        return goView
    }()
    let info: UIButton = {
        let info: UIButton = UIButton()
        info.titleLabel?.textAlignment = .right
        info.backgroundColor = ArcRandomColor()
        return info
    }()
    
    // setter & getter
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
}
