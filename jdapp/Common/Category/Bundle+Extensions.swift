//
//  Bundle+Extensions.swift
//  jdapp
//
//  Created by wupeng on 2018/5/3.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation

extension Bundle {
    var nameSpace: String {
        return infoDictionary!["CFBundleName"] as? String ?? ""
    }
}
