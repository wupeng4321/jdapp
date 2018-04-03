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


func getBody(body: AnyObject) -> [String: Any] {
    var bodyPara = ["adid":"87BCDF77-D843-46E9-B7E5-83F18FA67806",
                    "area":"12_904_905_50599",
                    "build":"163840",
                    "client":"apple",
                    "clientVersion":"6.6.0",
                    "d_brand":"apple",
                    "d_model":"iPhone9%2C2",
                    "isBackground":"N",
                    "lang":"zh_CN",
                    "networkType":"wifi",
                    "networklibtype":"JDNetworkBaseAF",
                    "openudid":"74d33ae25b8353446044bf7100a174275196c178",
                    "osVersion":"11.1.2",
                    "partner":"apple",
                    "screen":"1242%2A2208",
                    "sign":"d85b372bc921176a35d211ba954f1eaa",
                    "st":"1515253206705",
                    "sv":"112",
                    "uuid":"coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr",
                    ] as [String : Any]
    
    
    for (key, value) in bodyPara {

        bodyPara[key] = (value as AnyObject).removingPercentEncoding ?? ""
    }
    
    if (body is String) {
        bodyPara["body"] = body.removingPercentEncoding ?? ""
    } else if (body is NSDictionary) {
        bodyPara["body"] = body
    }

    return bodyPara 
}

//将字典转化为字符串















