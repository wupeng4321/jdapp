//
//  File.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import Foundation
import UIKit

class Theme: NSObject {
    class func paddingWithSize(_ size:CGFloat) -> CGFloat {
        return size / 2 * kScale
    }
    
    class func fontWithSize(_ size:CGFloat) -> UIFont {
        return UIFont.systemFont(ofSize: size / 2)
    }
}

//==========================================================================
//MARK - color
//==========================================================================
let kColorWhite             = ColorFromRGB(0xffffff)
let kColorBlack             = ColorFromRGB(0x000000)
let kColorDarkGray          = ColorFromRGB(0x333333) // text title
let kColorGray              = ColorFromRGB(0x666666) // text body
let kColorDimGray           = ColorFromRGB(0x999999) // text notes
let kColorLightGray         = ColorFromRGB(0xd1d1d1) // text place holder
let kColorForSeparatorLine  = ColorFromRGB(0xeaeaea)
let themeColor              = kColorWhite
let kColorBackground        = ColorFromRGB(0xf3f5f7) // text background color
let kColorTextField         = ColorFromRGB(0xf0f2f5) // textfield background color

//==========================================================================
//MARK - size
//==========================================================================
let iphoneX                 = kScreenWidth == 375 && kScreenHeight == 812
let kNavigationBarHeight    = 44
let kStatusBarHeight        = iphoneX ? 44 : 20
let kTabBarHeight           = iphoneX ? 49 + 32 : 49
let kStatusBarAndNavHeight  = iphoneX ? 88 : 64
let kScale                  = kScreenWidth / 375
let kBannerHeight           = 180
let kPadding                = Theme.paddingWithSize(28) //left padding and right padding
func padding(_ size: CGFloat) -> CGFloat {
    return Theme.paddingWithSize(size)
}


//==========================================================================
//MARK - font
//==========================================================================
let fontWithSize18:UIFont   = Theme.fontWithSize(18)
let fontWithSize20:UIFont   = Theme.fontWithSize(20)
let fontWithSize22:UIFont   = Theme.fontWithSize(22)
let fontWithSize24:UIFont   = Theme.fontWithSize(24)
let fontWithSize26:UIFont   = Theme.fontWithSize(26)
let fontWithSize28:UIFont   = Theme.fontWithSize(28)
let fontWithSize30:UIFont   = Theme.fontWithSize(30)
let fontWithSize32:UIFont   = Theme.fontWithSize(32)
let fontWithSize34:UIFont   = Theme.fontWithSize(34)
let fontWithSize36:UIFont   = Theme.fontWithSize(36)
let fontWithSize38:UIFont   = Theme.fontWithSize(38)
let fontWithSize40:UIFont   = Theme.fontWithSize(40)
let fontWithSize42:UIFont   = Theme.fontWithSize(42)
let fontWithSize44:UIFont   = Theme.fontWithSize(44)
let fontWithSize46:UIFont   = Theme.fontWithSize(46)
let fontWithSize48:UIFont   = Theme.fontWithSize(48)
let fontWithSize50:UIFont   = Theme.fontWithSize(50)



