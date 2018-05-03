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
    
    mutating func toPriceString() -> NSMutableAttributedString {
        self.checkPrice()
        let showPriceStr = NSMutableAttributedString(string: self)
        let moneyRange = self.range(of: "￥")
        let range = self.range(of: ".")
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSRangeFromRange(moneyRange!))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(30)], range: NSMakeRange(1, NSRangeFromRange(range!).location - 1))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSRangeFromRange(range!))
        showPriceStr.setAttributes([NSAttributedStringKey.foregroundColor: ArcRandomColor(), NSAttributedStringKey.font: Theme.fontWithSize(24)], range: NSMakeRange(NSRangeFromRange(range!).location + 1, 2))
        return showPriceStr
    }
    //1.如果不包含"¥",则插入"¥".如36.00会变为¥36.00
    //2.如果不包含小数点".",则补全.如¥36会变为¥36.00
    //3.如果包含小数点且小数点后只有一位,则补全,如¥36.8则变为¥36.80
    //4.考虑到健壮性,应该考虑以上几点
    mutating func checkPrice() {
        if !self.hasPrefix("￥") {
            self = "￥" + self
        }
        if !self.contains(".") {
            self = self + ".00"
        } else {
            let arr = self.components(separatedBy: ".")
            if arr.count == 2 {
                if arr.last?.count == 2 {
                    return
                } else if arr.last?.count == 1 {
                    self = self + "0"
                } else {
                    self = self + "00"
                }
            } else {
                    JDLog("price error")
            }
        }
    }
    
    func NSRangeFromRange(_ range:Range<String.Index>) -> NSRange {
        return NSRange(range, in:self)
    }
    
    func NSRangesFromRange(of string: String) -> [NSRange] {
        return self.range(of: string).map { (range) -> [NSRange] in
            [self.NSRangeFromRange(range)]
            }!
    }
    
    var viewController: UIViewController {
        let cls = NSClassFromString(Bundle.main.nameSpace + "." + self)! as! UIViewController.Type
        return cls.init()
        
    }
    
}
