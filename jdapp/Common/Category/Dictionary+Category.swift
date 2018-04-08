//
//  Dictionary+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/4/8.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation

extension Dictionary {
    //将字典转化为字符串
    func toJson() -> String {
        //系统自带的方法转的字符串有空格
//        let data = try? JSONSerialization.data(withJSONObject: self, options: JSONSerialization.WritingOptions.prettyPrinted)
//        var strJson = NSString(data: data!, encoding: String.Encoding.utf8.rawValue)
//        strJson = strJson?.replacingOccurrences(of: " ", with: "") as? NSString
//        strJson = strJson?.replacingOccurrences(of: "\n", with: "") as? NSString
        var strJson = "{"
        for (key, value) in self {
            if (value is String) {
                strJson += "\"\(key)\":\"\(value)\","
            } else if(value is Bool) {
                strJson += "\"\(key)\":\(value),"
            }
        }
        strJson.removeLast()
        strJson += "}"
        return strJson.addingPercentEncoding(withAllowedCharacters: CharacterSet.urlQueryAllowed)!
    }
    
    //合并字典
    mutating func addDic(dic: Dictionary) {
        for (key, value) in dic {
            self[key] = value;
        }
    }
}
