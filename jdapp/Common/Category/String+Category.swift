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
        let moneyRange = self.range(of: "￥")
        let range = self.range(of: ".")
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSRangeFromRange(moneyRange!))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(30)], range: NSMakeRange(1, NSRangeFromRange(range!).location - 1))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSRangeFromRange(range!))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSMakeRange(NSRangeFromRange(range!).location + 1, 2))
        return showPriceStr
    }
    
    func NSRangeFromRange(_ range:Range<String.Index>) -> NSRange {
        return NSRange(range, in:self)
    }
    
    func NSRangesFromRange(of string: String) -> [NSRange] {
        return self.range(of: string).map { (range) -> [NSRange] in
            [self.NSRangeFromRange(range)]
            }!
    }
}
