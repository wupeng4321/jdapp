//
//  UIView+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/1/11.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit
let toleft = -100
let toright =  100

extension UIView {
    // 查找UIView及其子类的根父视图控制器
    func inViewController() -> UIViewController {
        var next = self.next
        while next != nil {
            if next is UIViewController {
                return (next as? UIViewController)!
            }
            next = next?.next
        }
        return next as! UIViewController
    }
    // 一次性添加subview
    func addSubview(_ views: UIView ...) {
        for view in views {
            self.addSubview(view)
        }
    }
    // 直接传入radius,and make view clipToBounds
    func boundsToCorderRadius(_ radius: CGFloat) {
        self.clipsToBounds = true
        self.layer.cornerRadius = radius
    }
    
    func toBounds() {
        let maskPath = UIBezierPath(roundedRect: self.bounds, byRoundingCorners: .allCorners, cornerRadii: self.bounds.size)
        let maskLayer = CAShapeLayer()
        maskLayer.frame = self.frame
        maskLayer.path = maskPath.cgPath
        self.layer.mask = maskLayer
    }
    
    
    ///////////////////////////////////////////////////////
    func left() {
        self.frame.origin.x -= Theme.paddingWithSize(80)
    }
    func right() {
        self.frame.origin.x += Theme.paddingWithSize(80)
    }
    
    func top() {
        self.frame.origin.y -= Theme.paddingWithSize(80)
    }
    
    func bottom() {
        self.frame.origin.y += Theme.paddingWithSize(80)
    }
    
    func bottomRight2() {
        self.bottom()
        self.right()
        self.right()
    }
    
    func bottomLeft2() {
        self.bottom()
        self.left()
        self.left()
    }
    
    func topLeft2() {
        self.top()
        self.left()
        self.left()
    }
    
    func topRight2() {
        self.top()
        self.right()
        self.right()
    }
}
