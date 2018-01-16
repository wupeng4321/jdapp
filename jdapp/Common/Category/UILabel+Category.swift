//
//  UILabel+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/1/11.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit

extension UILabel {
    func boundLabel(_ radius:CGFloat, _ borderWidth: CGFloat, _ borderColor: UIColor?) {
        self.clipsToBounds = true
        self.layer.cornerRadius = radius
        self.layer.borderWidth = borderWidth
        self.layer.borderColor = borderColor?.cgColor
        self.textColor = borderColor
    }
}
