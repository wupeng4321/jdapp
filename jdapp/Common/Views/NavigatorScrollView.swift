//
//  NavigatorScrollView.swift
//  jdapp
//
//  Created by wupeng on 2017/12/29.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class NavigatorScrollView: UIScrollView {
    
    let kNumOfLines  = 5
    let kLeftMargin  = CGFloat(25 * kScale)
    let kButtonWidth = CGFloat(45 * kScale)
    let kButtonHeight = CGFloat(45 * kScale)
    let kTopMargin   = CGFloat(20 * kScale)
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        let middleMargin = (kScreenWidth - kLeftMargin * 2 - kButtonWidth * CGFloat(kNumOfLines)) / CGFloat((kNumOfLines - 1))
        let wraper: UIView = UIView()
        self.addSubview(wraper)
        for i in 0 ..< 10 {
            let x = kLeftMargin + CGFloat(i % kNumOfLines) * (middleMargin + kButtonWidth)
            let y = (kTopMargin + kButtonHeight) * CGFloat(i/kNumOfLines) + kTopMargin
            let btn = UIButton(frame: CGRect(x: x, y: y, width: kButtonWidth, height: kButtonHeight))
            btn.backgroundColor = ArcRandomColor()
            wraper.addSubview(btn)
        }
    }
}
