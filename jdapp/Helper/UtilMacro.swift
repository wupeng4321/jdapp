//
//  UtilMacro.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import Foundation

func JDLog<T>(_ message:T, file:String = #file, lineNumber:Int = #line) {
    #if DEBUG
        let fileName = (file as NSString).lastPathComponent
        print("[\(fileName):line:\(lineNumber)]- \(message)")
    #endif
}

func JDString(_ str:String) -> String {
    return NSLocalizedString(str, comment: "default")
}
