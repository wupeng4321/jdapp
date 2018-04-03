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

class JDShopCarViewController: AllocDellocViewController, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {
    let url = "http://api.m.jd.com/client.action?functionId=cart"
    let jdShopCarGoodsCell = "JDShopCarGoodsCell"
    let headerId = "headerId"
    let footerId = "footerId"
    var json: JSON?


    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupUI()
        self.navigationItem.title = "购物车"
        self.loadData()
    }
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        self.collectionView.verticalIndicatorToFront()
    }
    
    func setupUI() {
        self.view.addSubview(self.collectionView)
        self.collectionView.snp.makeConstraints { (make) -> Void in
            make.top.equalTo(self.view).offset(kStatusBarAndNavHeight)
            make.bottom.equalTo(self.view).offset(-kTabBarHeight)
            make.left.right.equalTo(self.view)
        }
    }
    
    func loadData() {
        //购物车
        let bodyPara = getBody(body:"%7B%22specialId%22%3A%221%22%2C%22noResponse%22%3Afalse%2C%22cartuuid%22%3A%22coW0lj7vbXVin6h7ON%2BtMNFQqYBqMahr%22%2C%22carttype%22%3A%221%22%2C%22syntype%22%3A%221%22%2C%22adid%22%3A%2287BCDF77-D843-46E9-B7E5-83F18FA67806%22%2C%22openudid%22%3A%2274d33ae25b8353446044bf7100a174275196c178%22%7D" as AnyObject)

        Alamofire.request(url, method: .post, parameters: bodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.json = JSON(value)
                self.collectionView.reloadData()
            case .failure(let error):
                print(error)
            }
        }
        
        //为你推荐
        
        let a = ["filteredPages":"0","skus":["5140143","3491609","5415001","526144","24861455807","1484557355","13196472078","18963654321","11102581523","12987411424","10236121296","1235355770","17980959752","18727331198","17020961280","19030688803","10555123104","12222359397","1981297429","12858430734","1988770736"],"source":6,"pageSize":10,"eventId":"Shopcart_Promotion_Auto","page":1] as [String : Any]
        let recommendBodyPara = getBody(body: a as AnyObject)
        
        let recommendUrl = "http://api.m.jd.com/client.action?functionId=uniformRecommend"
        Alamofire.request(recommendUrl, method: .post, parameters: recommendBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
//            switch response.result {
//            case .success(let value):
//                self.json = JSON(value)
//                self.collectionView.reloadData()
//            case .failure(let error):
//                print(error)
//            }
        }

        
//        let bodyRecommend = getBody(body: {"filteredPages":"0","skus":["5140143","3491609","5415001","526144","24861455807","1484557355","13196472078","18963654321","11102581523","12987411424","10236121296","1235355770","17980959752","18727331198","17020961280","19030688803","10555123104","12222359397","1981297429","12858430734","1988770736"],"source":6,"pageSize":10,"eventId":"Shopcart_Promotion_Auto","page":1})
        
    }
    
    //MARK: - lazy loading
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewPlainFlowLayout()

        let collectionView: UICollectionView = UICollectionView(frame: CGRect(x:0, y:0, width:kScreenWidth, height: kScreenHeight), collectionViewLayout: layout)
        collectionView.showsVerticalScrollIndicator = true
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.backgroundColor = kColorBackground
        collectionView.register(JDShopCarGoodsCell.classForCoder(), forCellWithReuseIdentifier: jdShopCarGoodsCell)
        
        collectionView.register(JDShopCarGoodsStoreView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: headerId)
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionFooter, withReuseIdentifier: footerId)
        
        return collectionView
    }()
    
    //MARK: - UICollectionViewDelegate & UICollectionViewDataSource
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell: JDShopCarGoodsCell = collectionView.dequeueReusableCell(withReuseIdentifier: jdShopCarGoodsCell, for: indexPath) as! JDShopCarGoodsCell
        cell.backgroundColor = UIColor.white
        if self.json != JSON.null {
            cell.indexPath = indexPath
            cell.dic = self.json
        }
        print("***********\(indexPath.section)")
        return cell
    }

    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        let array = json!["cartInfo"]["vendors"][section]["sorted"]
        print(array.count)
        if array.count != 0 {
            return array.count
            
        }
        return 1
    }
    
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        guard json != nil else {
            return 0
        }
        if json!["cartInfo"].count != 0 {
            let array = json!["cartInfo"]["vendors"]
            return array.count
        } else {
            return 10
        }
    
        
    }
    

    
    //MARK: - UICollectionViewDelegateFlowLayout
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        
        if (self.json!["cartInfo"]["vendors"][indexPath.section]["sorted"][indexPath.row]["item"]["items"].array == nil) {
            return CGSize(width: kScreenWidth, height: Theme.paddingWithSize(250 - 70))
        }
        return CGSize(width: kScreenWidth, height: Theme.paddingWithSize(250))
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return CGFloat(10)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return CGFloat(0)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForHeaderInSection section: Int) -> CGSize {

        return CGSize(width: kScreenWidth, height: 44)
    }
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForFooterInSection section: Int) -> CGSize {
        return CGSize(width: kScreenWidth, height: 10)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, insetForSectionAt section: Int) -> UIEdgeInsets {
        
        return UIEdgeInsetsMake(0, 0, 0, 0)
    }
    
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if kind == UICollectionElementKindSectionHeader {
            let headerView:JDShopCarGoodsStoreView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: headerId, for: indexPath) as! JDShopCarGoodsStoreView
            let data = self.json!["cartInfo"]["vendors"][indexPath.section]
            headerView.dic = data
            headerView.backgroundColor = UIColor.red
            headerView.layer.zPosition = 0
            return headerView
            
        }
        if kind == UICollectionElementKindSectionFooter {
            let footerView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: footerId, for: indexPath)
            footerView.backgroundColor = ArcRandomColor()
            return footerView
        }
        return UICollectionReusableView()
    }
}
