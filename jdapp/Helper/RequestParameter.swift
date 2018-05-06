//
//  RequestParameter.swift
//  jdapp
//
//  Created by wupeng on 2018/4/3.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
let Cookie = "pin=1066791851_m;wskey=AAFasHG2AEAbAGm4QLiuWbsjO1PSAaYIOAiFvCua_vvbDDg9qNu4A06zTwk5ChV9FAjVNLvts0WbqocIn2hLZYynrUV9sMBN;whwswswws=0a66ab2a03d0842274da404a1035e4c40b79193d85247a29f58767cedb"

let header = ["Content-Type" : "application/x-www-form-urlencoded",
                           "Accept":"application/json",
                           "Cookie":Cookie,
                           "Accept-Encoding":"gzip;deflate;utf8",
                           "Accept-Language":"zh-Hans-CN;q=1,en-CN;q=0.9"]


func getBody(body: Any) -> [String: Any] {

    var bodyPara = ["adid":"87BCDF77-D843-46E9-B7E5-83F18FA67806",
                "area":"12_904_3379_0",
//                "body":"",
//                "build":"164649",
                "client":"apple",
//                "clientVersion":"6.6.6",
                "d_brand":"apple",
                "d_model":"iPhone9%2C2",
                "isBackground":"N",
                "lang":"zh_CN",
        "networkType":"wifi",
        "networklibtype":"JDNetworkBaseAF",
//        "openudid":"c3cd74aebcea78dd6c069efe59f2500f99223e90",
        "osVersion":"11.1.2",
        "partner":"apple",
        "screen":"1242%2A2208",
        "uuid":"coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr",
        "wifiBssid":"b1a80d756ba16241ac055ed43a397abe"]
    
    for (key, value) in bodyPara {

        bodyPara[key] = (value as AnyObject).removingPercentEncoding ?? ""
    }
    
    if (body is String) {
        bodyPara["body"] = (body as AnyObject).removingPercentEncoding ?? ""
    } else if (body is [String: Any]) {
        bodyPara.addDic(dic: body as! Dictionary<String, String>)
    }
    return bodyPara
}



