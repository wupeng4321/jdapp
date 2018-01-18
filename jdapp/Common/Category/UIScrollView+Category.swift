//
//  UIScrollView+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/1/18.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit

extension UIScrollView {
    func verticalIndicatorToFront() {
        let arr = self.subviews
        for view in arr {
            if type(of: view) == UIImageView.classForCoder() {
                view.layer.zPosition = view.frame.size.width < 10 ? 1 : 0
            }
        }
    }
}
