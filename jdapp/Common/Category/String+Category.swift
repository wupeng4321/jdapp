//
//  String+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/1/18.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit

extension String {
    
    func toPriceString() -> NSMutableAttributedString {
        let showPriceStr = NSMutableAttributedString(string: self)
        let moneyRange = self.range(of: "¥")
//        let range1 = NSRange(moneyRange)
        let range = self.range(of: ".")
//        showPriceStr.setAttributes([NSForegroundColorAttributeName: ArcRandomColor(), NSFontAttributeName: Theme.fontWithSize(24)], range: moneyRange)
//        showPriceStr.setAttributes([NSForegroundColorAttributeName: ArcRandomColor(), NSFontAttributeName: Theme.fontWithSize(24)], range: range)
        
        
        return showPriceStr
    }
}
