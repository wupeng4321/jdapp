//
//  UIView+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/1/11.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit

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
    
    func addSubview(_ views: UIView ...) {
        for view in views {
            self.addSubview(view)
        }
    }
    func boundsToCorderRadius(_ radius: CGFloat) {
        self.clipsToBounds = true
        self.layer.cornerRadius = radius
    }
}
