//
//  UtilMacro.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import Foundation
import UIKit
import AdSupport

//==========================================================================
//MARK - debug tools
//==========================================================================
func JDLog<T>(_ message:T, file:String = #file, lineNumber:Int = #line) {
    #if DEBUG
        let fileName = (file as NSString).lastPathComponent
        print("[\(fileName):line:\(lineNumber)]- \(message)")
    #endif
}

func JDString(_ str:String) -> String {
    return NSLocalizedString(str, comment: "default")
}

func kReplaceWithEmptySpaceIfNull(_ str:String?) ->String {
    return str ?? ""
}

func KStrHasValue(_ str:String?) -> Bool {
    guard let str = str else {
        return false
    }
    return str.count > 0
}

//==========================================================================
//MARK - color tools
//==========================================================================
func ArcRandomColor() -> UIColor {
    let red:CGFloat   = CGFloat(arc4random() % 255) / 255.0
    let green:CGFloat = CGFloat(arc4random() % 255) / 255.0
    let blue:CGFloat  = CGFloat(arc4random() % 255) / 255.0
    return UIColor.init(red: red, green: green, blue: blue, alpha: 1.0)
}

func Color(_ red:CGFloat, _ green:CGFloat, _ blue:CGFloat) -> UIColor {
    return ColorA(red, green, blue, 1.0)
}

func ColorA(_ red:CGFloat, _ green:CGFloat, _ blue:CGFloat, _ alpha:CGFloat) -> UIColor {
    return UIColor.init(red: red, green: green, blue: blue, alpha: alpha)
}

func ColorFromRGB(_ hexColor:Int) -> UIColor {
    return ColorFromRGBA(hexColor, 1.0)
}

func ColorFromRGBA(_ hexColor:Int, _ alpha:CGFloat) -> UIColor {
    let red   = CGFloat((hexColor & 0xff0000) >> 16)
    let green = CGFloat((hexColor & 0xff00) >> 8)
    let blue  = CGFloat(hexColor & 0xff)
    return ColorA(red, green, blue, alpha)
}

//==========================================================================
//MARK - screen size tools
//==========================================================================
let kScreenHeight = UIScreen.main.bounds.height
let kScreenWidth  = UIScreen.main.bounds.width
let kKeyWindow    = UIApplication.shared.keyWindow
let kAppVersion   = Bundle.main.infoDictionary!["CFBundleShortVersionString"]
let kAppAdIdentifier = ASIdentifierManager.shared().advertisingIdentifier.uuidString

let ios9  = NLSystemVersionGreaterOrEqualThan(version: 9.0)
let ios10 = NLSystemVersionGreaterOrEqualThan(version: 10.0)
let ios11 = NLSystemVersionGreaterOrEqualThan(version: 11.0)


func NLSystemVersionGreaterOrEqualThan(version:CGFloat) -> Bool {
    let versionStr = UIDevice.current.systemVersion
    return Float(versionStr)! > Float(version)
}


















