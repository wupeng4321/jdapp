//
//  TransparentNavigationBar.swift
//  jdapp
//
//  Created by wupeng on 2017/12/28.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit


class TransparentNavigationBar: UIView {
    
    let kButtonSize = Theme.paddingWithSize(45)
    let padding = Theme.paddingWithSize(28)
    let searchTextFieldHeight = CGFloat(kNavigationBarHeight) * 0.7
    var _scrollView: UIScrollView?

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    func setupUI() {
        self.addSubview(self.defaultLeftBtn)
        self.addSubview(self.searchTextField)
        self.addSubview(self.defaultRightBtn)
        self.setNeedsUpdateConstraints()
    }
    
    override func updateConstraints() {
        super.updateConstraints()
        self.defaultLeftBtn.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(self).offset(padding)
            make.top.equalTo(self.snp.top).offset(kStatusBarHeight)
            make.bottom.equalTo(self.snp.bottom)
            make.width.equalTo(kButtonSize)
        }
        self.defaultRightBtn.snp.makeConstraints { (make) -> Void in
            make.centerY.width.height.equalTo(self.defaultLeftBtn)
            make.right.equalTo(self.snp.right).offset(-padding)
        }
        self.searchTextField.snp.makeConstraints { (make) -> Void in
            make.centerY.equalTo(self.defaultLeftBtn)
            make.height.equalTo(CGFloat(searchTextFieldHeight))
            make.left.equalTo(self.defaultLeftBtn.snp.right).offset(20)
            make.right.equalTo(self.defaultRightBtn.snp.left).offset(-20)
        }
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    //MARK: - handle scroll
    override func observeValue(forKeyPath keyPath: String?, of object: Any?, change: [NSKeyValueChangeKey : Any]?, context: UnsafeMutableRawPointer?) {
        if self.window != nil {
            self.scrollViewDidScrolled()
        }
    }
    
    func scrollViewDidScrolled() {
        guard _scrollView != nil else {
            return
        }
        let scrollOffset = _scrollView!.contentOffset.y + _scrollView!.contentInset.top
        let height = kStatusBarAndNavHeight
        var alpha = fmin(CGFloat(1), scrollOffset/CGFloat((kBannerHeight - height)))
        JDLog(alpha)
        alpha = alpha < 0 ? 0 : alpha
        defaultLeftBtn.alpha = alpha
        defaultRightBtn.alpha = alpha
        self.backgroundColor = UIColor(white: CGFloat(1), alpha: alpha)
        if alpha < 0.8 {
            searchTextField.backgroundColor = kColorWhite
        } else {
            searchTextField.backgroundColor = UIColor.lightGray.withAlphaComponent(0.5)
        }
    }
    
    func attach() {
        guard _scrollView != nil else{
            return
        }
//        self.detatch()
        _scrollView?.addObserver(self, forKeyPath: "contentOffset", options: .new, context: nil)
    }
    
    func detatch() {
        guard _scrollView != nil else{
            return
        }
        _scrollView?.removeObserver(self, forKeyPath: "contentOffset")
    }
    
    //MARK: - lazy loading
    lazy var defaultLeftBtn = { () -> UIButton in
        let defaultLeftBtn = UIButton()
        defaultLeftBtn.backgroundColor = UIColor.red
        return defaultLeftBtn
    }()
    
    lazy var defaultRightBtn = { () -> UIButton in
        let defaultRightBtn = UIButton()
        defaultRightBtn.backgroundColor = UIColor.gray
        return defaultRightBtn
    }()
    
    lazy var searchTextField = { () -> UITextField in
        let searchTextField = UITextField()
        searchTextField.clipsToBounds = true
        searchTextField.layer.cornerRadius = CGFloat(searchTextFieldHeight / 2)
        searchTextField.backgroundColor = kColorWhite
        return searchTextField
    }()
    
    var scrollView: UIScrollView {
        set(new) {
            _scrollView = new
            self.attach()
        }
        get {
            return _scrollView!
        }
    }
    
    deinit {
        self.detatch()
        _scrollView = nil
    }
}
