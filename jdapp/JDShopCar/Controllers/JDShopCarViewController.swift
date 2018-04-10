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
    let jdShopCarGoodsCardCell = "jsShopCarGoodsCardCell"
    let jdRecommendCell = "jdRecommendCell"
    let headerId = "headerId"
    let footerId = "footerId"
    var json: JSON?
    var recommendJson: JSON?


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
        
        let shopCarPara = ["body": "{\"specialId\":\"1\",\"noResponse\":false,\"cartuuid\":\"coW0lj7vbXVin6h7ON+tMNFQqYBqMahr\",\"carttype\":\"1\",\"syntype\":\"1\",\"adid\":\"87BCDF77-D843-46E9-B7E5-83F18FA67806\",\"openudid\":\"c3cd74aebcea78dd6c069efe59f2500f99223e90\"}", "sv":"102","sign":"ede350ec4bd7ff7969fdbfe74055b76a", "st":"1523198986952"]
        let shopCarBodyPara = getBody(body:shopCarPara as AnyObject)
        
        Alamofire.request(url, method: .post, parameters: shopCarBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.json = JSON(value)
                self.collectionView.reloadData()
            case .failure(let error):
                print(error)
            }
        }
        
        //为你推荐        
        let recommendPara = ["body":"{\"filteredPages\":\"0\",\"skus\":[\"1484557353\",\"1484557355\",\"5140143\",\"3491609\",\"5415001\",\"526144\",\"24861455807\",\"13196472078\",\"18963654321\",\"11102581523\",\"12987411424\",\"10236121296\",\"1235355770\",\"17980959752\",\"18727331198\",\"17020961280\",\"19030688803\",\"10555123104\",\"12222359397\",\"1981297429\",\"12858430734\",\"1988770736\"],\"source\":6,\"pageSize\":10,\"eventId\":\"Shopcart_UnEmpty_auto\",\"page\":1}"
, "sv":"121", "sign":"3a24b917217890120451dd90ce1a3438","st":"1523203458310"]
        
        var recommendBodyPara = getBody(body: recommendPara as AnyObject)
        for (key, value) in recommendBodyPara {
            recommendBodyPara[key] = (value as AnyObject).removingPercentEncoding ?? ""
        }

        let recommendUrl = "http://api.m.jd.com/client.action?functionId=uniformRecommend"
        Alamofire.request(recommendUrl, method: .post, parameters: recommendBodyPara, encoding: URLEncoding.httpBody, headers: header).responseJSON { response in
            switch response.result {
            case .success(let value):
                self.recommendJson = JSON(value)
                self.collectionView.reloadData()
            case .failure(let error):
                print(error)
            }
        }
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
        collectionView.register(JDShopCarGoodsCardCell.classForCoder(), forCellWithReuseIdentifier: jdShopCarGoodsCardCell)
        collectionView.register(JDRecommendHeaderCell.classForCoder(), forCellWithReuseIdentifier: jdRecommendCell)
        
        collectionView.register(JDShopCarGoodsStoreView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: headerId)
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionFooter, withReuseIdentifier: footerId)
        
        return collectionView
    }()
    
    //MARK: - UICollectionViewDelegate & UICollectionViewDataSource
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        if indexPath.section < json!["cartInfo"]["vendors"].count {
            let cell: JDShopCarGoodsCell = collectionView.dequeueReusableCell(withReuseIdentifier: jdShopCarGoodsCell, for: indexPath) as! JDShopCarGoodsCell
            cell.backgroundColor = UIColor.white
            if self.json != JSON.null {
                cell.indexPath = indexPath
                cell.dic = self.json
            }
            return cell
        } else {
            if indexPath.row == 0 {
                let cell = collectionView.dequeueReusableCell(withReuseIdentifier: jdRecommendCell, for: indexPath)
                return cell
            } else {
                let cell: JDShopCarGoodsCardCell  = collectionView.dequeueReusableCell(withReuseIdentifier: jdShopCarGoodsCardCell, for: indexPath) as! JDShopCarGoodsCardCell
                cell.backgroundColor = ArcRandomColor()
                if self.recommendJson != JSON.null {
                    cell.indexPath = indexPath
                    cell.dic = self.recommendJson
                }
                return cell
            }
        }
        return UICollectionViewCell()
    }

    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        if section < json!["cartInfo"]["vendors"].count {
            let array = json!["cartInfo"]["vendors"][section]["sorted"]
            if array.count != 0 {
                return array.count
            }
        } else {
            let recommendCounts = recommendJson!["wareInfoList"].count
            //添加的有一个item为,为你推荐,推荐测评部分,避免放到header部分有悬停效果
            return recommendCounts > 0 ? recommendCounts + 1 : 0
        }
        return 1
    }
    
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        guard json != nil else {
            return 0
        }
        if json!["cartInfo"].count != 0 {
            let array = json!["cartInfo"]["vendors"]
            guard recommendJson != nil else {
                return array.count
            }
            let recommendArray = recommendJson!["wareInfoList"].array
            let count = (recommendArray!.count) > 0 ? 1 : 0
            return array.count + count
   
        } else {
            return 10
        }
    }
    
    //MARK: - UICollectionViewDelegateFlowLayout
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        if indexPath.section < json!["cartInfo"]["vendors"].count {
            if (self.json!["cartInfo"]["vendors"][indexPath.section]["sorted"][indexPath.row]["item"]["items"].array == nil) {
                return CGSize(width: kScreenWidth, height: Theme.paddingWithSize(250 - 70))
            }
        } else {
            if indexPath.row == 0 {
                return CGSize(width: kScreenWidth, height: Theme.paddingWithSize(100))
            }
            return CGSize(width: (kScreenWidth - Theme.paddingWithSize(10)) / 2, height: Theme.paddingWithSize(500))
        }
        return CGSize(width: kScreenWidth, height: Theme.paddingWithSize(250))
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return CGFloat(10)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        if section == json!["cartInfo"]["vendors"].count {
            return CGFloat(Theme.paddingWithSize(8))
        }
        return CGFloat(0)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForHeaderInSection section: Int) -> CGSize {
        if section == self.json!["cartInfo"]["vendors"].count {
            return CGSize(width: 0, height: 0)
        }
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
