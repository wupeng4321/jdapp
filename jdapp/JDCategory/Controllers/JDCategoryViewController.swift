//
//  JDCategoryViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//
import UIKit
import SwiftyJSON
import Alamofire

class JDCategoryViewController: BaseViewController, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {
    let tableViewWidth = CGFloat(180)
    let middleWidth = CGFloat(20)
    var headerJson: JSON?
    var detailJson: JSON?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = ColorFromRGB(0xf3f5f7)
        self.setupUI()
        self.loadHeader()
        self.loadDetail()
    }
    
    func setupUI() {
        self.view.addSubview(headerView)
        self.view.addSubview(tableView)
        self.view.addSubview(collectionView)
        tableView.snp.makeConstraints { (make) -> Void in
            make.top.equalTo(headerView.snp.bottom)
            make.bottom.equalTo(self.view.snp.bottom).offset(-kTabBarHeight)
            make.left.equalTo(self.view)
            make.width.equalTo(Theme.paddingWithSize(tableViewWidth))
        }
        collectionView.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(tableView.snp.right)
            make.top.bottom.equalTo(tableView)
            make.right.equalTo(self.view)
        }
    }
    
    func loadHeader() {
        let goodsPara = ["body" : "{\"level\":\"1\",\"catelogyID\":\"-1\"}", "st" : "1525624668734", "sv" : "100", "sign" : "2675d5083794ecd4988bd56444f2a3b0", "build":"164665", "clientVersion":"6.6.9", "openudid":"aa1a67822b9ad4bc538aee736673baba2198ecf3"]
        let url = "http://api.m.jd.com/client.action?functionId=getCmsPromotionsListByCatelogyID"
        
        let goodsBodyPara = getBody(body:goodsPara as AnyObject)
        
        Alamofire.request(url, method: .post, parameters: goodsBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.headerJson = JSON(value)
                
            case .failure(let error):
                print(error)
            }
        }
    }
    
    func loadDetail() {
        let goodsPara = ["body" : "{\"clear\":0,\"method\":\"bp.category\",\"uid\":\"v\\/+ZmXYnNWArQiwAjC8arw==\",\"token\":\"d9702ba2e4526b667c0f403974cf3ed2\",\"guid\":\"aa1a67822b9ad4bc538aee736673baba2198ecf3\"}", "st" : "1526481733027", "sv" : "120", "sign" : "d448da1c11065a6c370af8b789ed7537", "build":"164665", "clientVersion":"6.6.9", "openudid":"aa1a67822b9ad4bc538aee736673baba2198ecf3"]
        let url = "http://api.m.jd.com/client.action?functionId=commonCatalogs"
        
        let goodsBodyPara = getBody(body:goodsPara as AnyObject)
        
        Alamofire.request(url, method: .post, parameters: goodsBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.detailJson = JSON(value)
                self.collectionView.reloadData()
            case .failure(let error):
                print(error)
            }
        }
    }
    
    
    //MARK: - lazy loading
    lazy var headerView: TransparentNavigationBar = {
        let headerView = TransparentNavigationBar.init(frame: CGRect(x: CGFloat(0), y: CGFloat(0), width: kScreenWidth, height: CGFloat(kStatusBarAndNavHeight)))
        //        headerView.scrollView = self.collectionView
        headerView.textFieldBackgroundColor = kColorTextField
        headerView.style = .normalStyle
        headerView.searchTextField.placeholder = "荣耀京东超级品牌日,全场最高优惠500元"
        headerView.searchTextField.font = Theme.fontWithSize(24)
        headerView.searchTextField.leftViewMode = .always
        return headerView
    }()
    
    lazy var tableView: JDCategoryTableView = {
        let tableView: JDCategoryTableView = JDCategoryTableView()
//        tableView.delegate = self
//        tableView.dataSource = self
        tableView.backgroundColor = kColorBackground
        tableView.register(UITableViewCell.classForCoder(), forCellReuseIdentifier: "cellId")
        return tableView
    }()
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewFlowLayout()
        let collectionView: UICollectionView = UICollectionView(frame: CGRect(), collectionViewLayout: layout)
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.backgroundColor = kColorBackground
        collectionView.contentInset = UIEdgeInsetsMake(0, Theme.paddingWithSize(middleWidth), 0, Theme.paddingWithSize(middleWidth))
        if ios11 {
            collectionView.contentInsetAdjustmentBehavior = .never
        }
        collectionView.register(JDCategoryDetailCell.classForCoder(), forCellWithReuseIdentifier: "cellId")
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: "headerId")
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionFooter, withReuseIdentifier: "footerId")
        return collectionView
    }()
    
    
    
    //MARK: - collectionView delegate & datasource
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        if self.detailJson != nil {
            return self.detailJson!["data"].array!.count + 1
        }
        return 1
    }
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        if section == 0 {
            return 1
        }
        let a = self.detailJson!["data"]
        if a != JSON.null {
            return (a[section - 1]["catelogyList"].array?.count)!
        }
        return 0
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell:JDCategoryDetailCell = collectionView.dequeueReusableCell(withReuseIdentifier: "cellId", for: indexPath) as! JDCategoryDetailCell
        cell.backgroundColor = ArcRandomColor()
        if self.detailJson != nil && indexPath.section > 0 {
//            cell.indexPath = indexPath
            cell.dic = self.detailJson!["data"][indexPath.section - 1]["catelogyList"][indexPath.row]
        }
        return cell
    }
    //line space
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
    //interitem space
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return 0
    }
    //header size
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForHeaderInSection section: Int) -> CGSize {
        if section == 0 {
            return CGSize(width: 0, height: 0)
        }
        return CGSize(width: kScreenWidth - Theme.paddingWithSize(tableViewWidth + middleWidth * 2), height: 44)
    }
    //footer size
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForFooterInSection section: Int) -> CGSize {
        if section == 0 {
            return CGSize(width: 0, height: 0)
        }
        return CGSize(width: kScreenWidth - Theme.paddingWithSize(tableViewWidth + middleWidth * 2), height: 0)
    }
    //item size
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        let totalWidth = kScreenWidth - Theme.paddingWithSize(tableViewWidth + middleWidth * 2)
        let width = totalWidth / 3
        if indexPath.section == 0 {
            return CGSize(width: totalWidth, height: 100)
        }
        return CGSize(width: width, height: padding(280))
    }
    //header view & footer view
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if kind == UICollectionElementKindSectionHeader {
            let headerView: UICollectionReusableView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: "headerId", for: indexPath)
            
            return headerView
        }
        if kind == UICollectionElementKindSectionFooter {
            let headerView: UICollectionReusableView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: "footerId", for: indexPath)
            
            return headerView
        }
        return UICollectionReusableView()
    }
}
