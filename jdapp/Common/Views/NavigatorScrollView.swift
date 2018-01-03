//
//  NavigatorScrollView.swift
//  jdapp
//
//  Created by wupeng on 2017/12/29.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class NavigatorScrollView: UIScrollView {
    
    let kNumOfLines   = 5
    let kLeftMargin   = CGFloat(25 * kScale)
    let kButtonWidth  = CGFloat(45 * kScale)
    let kButtonHeight = CGFloat(45 * kScale)
    let kTopMargin    = CGFloat(20 * kScale)
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.contentSize = CGSize(width: kScreenWidth * 2, height: frame.size.height)
        self.isPagingEnabled = true
        self.showsHorizontalScrollIndicator = false
        self.setupUI()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setupUI() {
        let middleMargin = (kScreenWidth - kLeftMargin * 2 - kButtonWidth * CGFloat(kNumOfLines)) / CGFloat((kNumOfLines - 1))
        let wraper: UIView = UIView(frame: self.bounds)
        self.addSubview(wraper)
        let total = 20
        for i in 0 ..< total {
            //first page
            var x,y: CGFloat
            let totalInline = kNumOfLines * 2
            y = (kTopMargin + kButtonHeight) * CGFloat(i / totalInline) + kTopMargin
            if i % totalInline < 5 {
                x = kLeftMargin + CGFloat(i % totalInline) * (middleMargin + kButtonWidth)
            } else {
                x = kScreenWidth + kLeftMargin + CGFloat(i % totalInline - 5) * (middleMargin + kButtonWidth)
            }
            let btn = UIButton(frame: CGRect(x: x, y: y, width: kButtonWidth, height: kButtonHeight))
            btn.backgroundColor = ArcRandomColor()
            wraper.addSubview(btn)
        }
    }
}
