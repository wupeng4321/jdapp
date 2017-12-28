//
//  TransparentNavigationBar.swift
//  jdapp
//
//  Created by wupeng on 2017/12/28.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class TransparentNavigationBar: UIView {
//    let defaultLeftBtn: UIButton = UIButton()
//    let defaultRightBtn: UIButton
//    let middleView: UIView
    let kButtonSize = Theme.paddingWithSize(35)
    let padding = Theme.paddingWithSize(28)
//    let scrollView:UIScrollView?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    func setupUI() {
        self.addSubview(self.defaultLeftBtn)
        self.addSubview(self.searchTextField)
        self.addSubview(self.defaultRightBtn)
        self.defaultLeftBtn.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(self).offset(padding)
            make.top.equalTo(self.snp.top).offset(kStatusBarHeight)
            make.bottom.equalTo(self.snp.bottom)
            make.width.equalTo(kButtonSize)
        }
        self.defaultRightBtn.snp.makeConstraints { (make) -> Void in
            make.centerY.width.height.equalTo(self.defaultRightBtn)
            make.right.equalTo(self.snp.right).offset(-kButtonSize)
        }
        self.searchTextField.snp.makeConstraints { (make) -> Void in
            make.centerY.height.equalTo(self.defaultLeftBtn)
            make.left.equalTo(self.defaultLeftBtn.snp.right)
            make.right.equalTo(self.defaultRightBtn.snp.left)
        }
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    //MARK: -lazy loading
    func attach() {
        
    }
    
    func detatch() {
        
    }
    
    //MARK: - lazy loading
    lazy var defaultLeftBtn = { () -> UIButton in
        let defaultLeftBtn = UIButton()
        defaultLeftBtn.backgroundColor = ArcRandomColor()
        return defaultLeftBtn
    }()
    
    lazy var defaultRightBtn = { () -> UIButton in
        let defaultRightBtn = UIButton()
        defaultRightBtn.backgroundColor = ArcRandomColor()
        return defaultRightBtn
    }()
    
    lazy var searchTextField = { () -> UITextField in
        let searchTextField = UITextField()
        searchTextField.backgroundColor = ArcRandomColor()
        return searchTextField
    }()
    
    lazy var scrollView: UIScrollView = {
        let scrollView = UIScrollView()
        print("gdfhuipghqeohrguiohdasoihgoi")
        return scrollView
    }()
    
}
