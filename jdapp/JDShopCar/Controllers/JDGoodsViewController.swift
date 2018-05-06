//
//  JDGoodsViewController.swift
//  jdapp
//
//  Created by wupeng on 2018/4/30.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON

class JDGoodsViewController: BaseViewController {
    let url = "http://api.m.jd.com/client.action?functionId=skuDyInfo"
    var json : JSON?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.loadData()
    }
    
    func loadData() {
//        let shopCarPara = ["body": "{\"specialId\":\"1\",\"noResponse\":false,\"cartuuid\":\"coW0lj7vbXVin6h7ON+tMNFQqYBqMahr\",\"carttype\":\"1\",\"syntype\":\"1\",\"adid\":\"87BCDF77-D843-46E9-B7E5-83F18FA67806\",\"openudid\":\"c3cd74aebcea78dd6c069efe59f2500f99223e90\"}", "sv":"102","sign":"ede350ec4bd7ff7969fdbfe74055b76a", "st":"1523198986952"]
        
        
        let goodsPara = ["body":"{\"personas\":\"personas\",\"uAddrId\":\"0\",\"skuId\":\"1235355770\",\"eventId\":\"Shopcart_Productid\",\"fromType\":0}", "st":"1525064390019", "sv":"112", "sign":"2e4ba36ad945222cfe2d7ded21987f0a", "build":"164665", "clientVersion":"6.6.9", "openudid":"aa1a67822b9ad4bc538aee736673baba2198ecf3"]
        let goodsBodyPara = getBody(body:goodsPara as AnyObject)
        
        Alamofire.request(url, method: .post, parameters: goodsBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.json = JSON(value)
//                self.collectionView.reloadData()
            case .failure(let error):
                print(error)
            }
        }

    }
}
