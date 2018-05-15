//
//  JDCategoryTableView.swift
//  jdapp
//
//  Created by wupeng on 2018/5/7.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit
import Alamofire
import SwiftyJSON

class JDCategoryTableView: UITableView, UITableViewDelegate, UITableViewDataSource {
//    let url = "http://api.m.jd.com/client.action?functionId=getCmsPromotionsListByCatelogyID"
    let url = "http://api.m.jd.com/client.action?functionId=entranceCatalog"
    var json : JSON?
    var indexPath : IndexPath?
    override init(frame: CGRect, style: UITableViewStyle) {
        super.init(frame: frame, style: style)
        self.delegate = self
        self.dataSource = self
        self.indexPath = IndexPath(row: 0, section: 0)
        self.separatorInset = UIEdgeInsets(top: frame.size.height - 1, left: 0, bottom: 0, right: 0)
        self.loadData()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func loadData() {
        //header
//        let goodsPara = ["body" : "{\"level\":\"1\",\"catelogyID\":\"-1\"}", "st" : "1525624668734", "sv" : "100", "sign" : "2675d5083794ecd4988bd56444f2a3b0", "build":"164665", "clientVersion":"6.6.9", "openudid":"aa1a67822b9ad4bc538aee736673baba2198ecf3"]
        
        let goodsPara = ["body" : "{\"isDescription\":true,\"isIcon\":true,\"level\":\"0\",\"catelogyId\":\"0\"}", "st" : "1525624669089", "sv" : "110", "sign" : "45791f9048f255ad80e350b36cbfe61b", "build":"164665", "clientVersion":"6.6.9", "openudid":"aa1a67822b9ad4bc538aee736673baba2198ecf3"]
        
        let goodsBodyPara = getBody(body:goodsPara as AnyObject)
        
        Alamofire.request(url, method: .post, parameters: goodsBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.json = JSON(value)
                self.reloadData()
            case .failure(let error):
                print(error)
            }
        }
    }
    
    //MARK: - tableview delegate & datasource
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cellId")
        cell?.backgroundColor = kColorWhite
        cell?.textLabel?.font = Theme.fontWithSize(28)
        cell?.textLabel?.textAlignment = .center
        cell?.textLabel?.textColor = UIColor.black
        cell?.backgroundColor = kColorWhite
        cell?.selectedBackgroundView = UIView(frame: (cell?.bounds)!)
        cell?.selectedBackgroundView?.backgroundColor = ColorFromRGB(0xf3f5f7)
        if self.json != JSON.null {
            cell?.textLabel?.text = self.json!["catelogyList"][indexPath.row]["name"].string!
        }
        if self.indexPath == indexPath {
            cell?.backgroundColor = ColorFromRGB(0xf3f5f7)
            cell?.textLabel?.textColor = ColorFromRGBA(0xf01119, 1)
        }
        return cell!
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        guard self.json != nil else {
            return 0
        }
        return self.json!["catelogyList"].count
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        self.indexPath = indexPath
        self.reloadData()
    }
}
