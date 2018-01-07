//
//  JDShopCarViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON

class JDShopCarViewController: AllocDellocViewController {
    let url = "http://api.m.jd.com/client.action?functionId=cart"

    override func viewDidLoad() {
        super.viewDidLoad()

        self.navigationItem.title = "购物车"
        let btn = UIButton(frame: CGRect(x: 100, y: 100, width: 100, height: 100))
        btn.backgroundColor = ArcRandomColor()
        btn.addTarget(self, action: #selector(btnClick(sender:)), for: .touchUpInside)
        self.view.addSubview(btn)
    }
    @objc func btnClick(sender: UIButton) -> Void {
        self.loadData()
    }
    
    func setupUI() {
        
    }
    
    func loadData() {
        var bodyPara = ["adid":"87BCDF77-D843-46E9-B7E5-83F18FA67806",
                        "area":"12_904_905_50599",
                    "body":"%7B%22specialId%22%3A%221%22%2C%22noResponse%22%3Afalse%2C%22cartuuid%22%3A%22coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr%22%2C%22carttype%22%3A%221%22%2C%22syntype%22%3A%221%22%2C%22adid%22%3A%2287BCDF77-D843-46E9-B7E5-83F18FA67806%22%2C%22openudid%22%3A%2274d33ae25b8353446044bf7100a174275196c178%22%7D",
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
                        ]
        
        for (key, value) in bodyPara {
            bodyPara[key] = value.removingPercentEncoding
        }
        
//        Alamofire.request(url, method: .post, parameters: body, encoding: JSONEncoding.default, headers: <#T##HTTPHeaders?#>)
        let header = ["Content-Type" : "application/x-www-form-urlencoded",
                      "Accept":"application/json",
                      "Cookie":"pin=1066791851_m;wskey=AAFZ9LILAEBfpk6u68SgYyomyOBgT_CJLUrarzSNlVPtqqDtVcLp2X811GAHrNftk_CLBbQXcNnHMvVDUpaHl3-uqRsIb5kH;whwswswws=0a66ab2a03d0842274da404a1035e4c40b79193d85247a29f58767cedb;mba_muid=14992722124902061184423.328.1515138208550;__jda=168871293.14992722124902061184423.1499272212.1515038578.1515138185.97;USER_FLAG_CHECK=f4c471ccc760bdd6428034ab1dd1b965;__jdu=14992722124902061184423;_jrda=3;cartNum=0;wq_ufc=f8eee0080b44a4fd80ab6a6f95519d24;addrId_1=377253970;addrType_1=1;jdAddrId=12_904_905_50599;jdAddrName=%u6C5F%u82CF_%u5357%u4EAC%u5E02_%u6C5F%u5B81%u533A_%u6C5F%u5B81%u9547;mitemAddrId=12_904_905_50599;mitemAddrName=%u6C5F%u82CF%u5357%u4EAC%u5E02%u6C5F%u5B81%u533A%u6C5F%u5B81%u9547%u5929%u666F%u5C71%u5982%u610F%u82D1%u4E00%u680B%u4E00%u5355%u51431503;wq_addr=377253970%7C12_904_905_50599%7C%u6C5F%u82CF_%u5357%u4EAC%u5E02_%u6C5F%u5B81%u533A_%u6C5F%u5B81%u9547%7C%u6C5F%u82CF%u5357%u4EAC%u5E02%u6C5F%u5B81%u533A%u6C5F%u5B81%u9547%u5929%u666F%u5C71%u5982%u610F%u82D1%u4E00%u680B%u4E00%u5355%u51431503;commonAddress=377253970;regionAddress=12%2C904%2C905%2C50599;shshshfp=098a24067c29d02664f8bf9cd81bf14a;shshshfpa=c9695d8f-a315-a878-7bd8-da6f9be746c9-1510800819;shshshfpb=046d2c7780b044e4b002d9327010cbce49b9d64beab4288f65a0cfdb3d;__wga=1510800818848.1510800818848.1510800818848.1510800818848.1.1;webp=0;visitkey=43897681127210417;wq_logid=1510800817_1804289383;abtest=20170713173202535_21",
                      "Accept-Encoding":"gzip;deflate;utf8",
                      "Accept-Language":"zh-Hans-CN;q=1,en-CN;q=0.9"]
        Alamofire.request(url, method: .post, parameters: bodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                print("*****************")
//                print(value)
                let json = JSON(value)
                print(json["cartInfo"]["vendors"])
                print(type(of: value))
            case .failure(let error):
                print(error)
            }
        }
    }
    
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewFlowLayout()

        let collectionView: UICollectionView = UICollectionView(frame: CGRect(), collectionViewLayout: layout)
        return collectionView
    }()
    


}
