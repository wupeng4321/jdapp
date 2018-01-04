//
//  JDHomeViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit
import ReactiveCocoa
import Alamofire
import SnapKit

class JDHomeViewController: BaseViewController, UICollectionViewDelegate, UICollectionViewDataSource,UICollectionViewDelegateFlowLayout {
    
    let cellId          = "cellId"
    let headerId        = "headerId"
    let footerId        = "footerId"
    let navigatorId     = "navigatorId"
    let goodsCategory   = "goodsCategory"
    let bannerId        = "bannerId"
    let goodsId         = "goodsId"
    
    let goodCategoryHeight = 100
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupUI()
    }

    func setupUI() {
        self.view.addSubview(self.collectionView)
        self.view.addSubview(self.headerView)
        self.collectionView.snp.updateConstraints { (make) -> Void in
            make.top.left.right.equalTo(self.view)
            make.bottom.equalTo(self.view.snp.bottom).offset(-kTabBarHeight)
        }
    }
    
    
    // MARK: - lazy loading
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewFlowLayout()
        let collectionView = UICollectionView.init(frame: self.view.bounds, collectionViewLayout: layout)
//        collectionView.contentInset = UIEdgeInsetsMake(Theme.paddingWithSize(headerViewHeight), 0, 0, 0)
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.showsVerticalScrollIndicator = false
        collectionView.backgroundColor = UIColor.white
        if ios11 {
            collectionView.contentInsetAdjustmentBehavior = .never
        }
        
        collectionView.register(UICollectionViewCell.classForCoder(), forCellWithReuseIdentifier: cellId)
        collectionView.register(JDHomeNavigatorCell.classForCoder(), forCellWithReuseIdentifier: navigatorId)
        collectionView.register(JDHomeGoodsCategoryCell.classForCoder(), forCellWithReuseIdentifier: goodsCategory)
        collectionView.register(JDHomeGoodsViewCell.classForCoder(), forCellWithReuseIdentifier: goodsId)
        
        
        
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: headerId)
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: bannerId)
//        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionFooter, withReuseIdentifier: footerId)
        return collectionView
    }()
    
    lazy var headerView: TransparentNavigationBar = {
        let headerView = TransparentNavigationBar.init(frame: CGRect(x: CGFloat(0), y: CGFloat(0), width: kScreenWidth, height: CGFloat(kStatusBarAndNavHeight)))
        headerView.scrollView = self.collectionView
        return headerView
    }()
    
    lazy var headerTitles:NSArray = {
        let headerTitles: NSArray = ["","每日逛", "东家小院", "爱生活", "购实惠", "品质时尚", "特色推荐", "逛商场", "发现好店", "京东视频","京东直播", "为你推荐"]
        return headerTitles
    }()
    
    //MARK: - collectionView delegate & dataSource
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 9
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        if section == 0 {
            return 1
        }
        if section == 1 || section == 2 || section == 5 {
            return 5
        }
        if section == 3 {
            return 6
        }
        if section == 4 {
            return 8
        }
        if section == 6 {
            return 10
        }
        if section == 7 {
            return 11
        }
        if section == 8 {
            return 12
        }
        return 23
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        var cell:UICollectionViewCell
        if indexPath.section == 0 {
            cell = collectionView.dequeueReusableCell(withReuseIdentifier: navigatorId, for: indexPath)
            let scrollView = NavigatorScrollView(frame: CGRect(x: 0, y: 0, width: kScreenWidth, height: 180))
            cell.addSubview(scrollView)
        } else if indexPath.section == 1 || indexPath.section == 2 || indexPath.section == 3 || indexPath.section == 4 || indexPath.section == 5 || indexPath.section == 6 || indexPath.section == 7 || indexPath.section == 8{
            cell = collectionView.dequeueReusableCell(withReuseIdentifier: goodsCategory, for: indexPath)
        } else {
            cell = collectionView.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath)
            
        }
        cell.backgroundColor = UIColor.gray
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if kind == UICollectionElementKindSectionHeader {
            let headerView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: indexPath.section == 0 ? bannerId : headerId, for: indexPath)
            headerView.backgroundColor = UIColor.purple
            
            var titleLabel:UILabel? = headerView.viewWithTag(10) as? UILabel
//            if titleLabel != nil {
////                titleLabel?.removeFromSuperview()
////                titleLabel = nil
//            } else
            if titleLabel == nil{
                titleLabel = UILabel()
                titleLabel!.textAlignment = .center
                headerView.addSubview(titleLabel!)
                titleLabel!.tag = 10
                titleLabel!.snp.makeConstraints({ (make) -> Void in
                    make.edges.equalToSuperview()
                })
            }

   
            if indexPath.section > 1 {
                titleLabel!.isHidden = false
                titleLabel!.text = self.headerTitles[indexPath.section - 1] as? String
            } else {
                let label = headerView.viewWithTag(10)
                label?.isHidden = true
            }
            return headerView
        }
//        if kind == UICollectionElementKindSectionFooter {
//            let footView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: footerId, for: indexPath)
//            footView.backgroundColor = UIColor.purple
//            return footView
//        }
        return UICollectionReusableView()
    }
    
    func collectionView(_ collectionView: UICollectionView, didHighlightItemAt indexPath: IndexPath) {
        let cell = collectionView.cellForItem(at: indexPath)
        cell?.backgroundColor = UIColor.green
    }
    
    func collectionView(_ collectionView: UICollectionView, shouldHighlightItemAt indexPath: IndexPath) -> Bool {
        return true
    }
    
    func collectionView(_ collectionView: UICollectionView, canMoveItemAt indexPath: IndexPath) -> Bool {
        return true
    }
    
    //MARK: - UICollectionViewDelegateFlowLayout
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        
        if indexPath.section == 0 {
            return CGSize(width: kScreenWidth, height: 180)
        }
        
        if indexPath.section == 1 {
            if indexPath.row == 2 || indexPath.row == 3 {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
            return CGSize(width: kScreenWidth / 2, height: 100)
        }
        
        if indexPath.section == 2 || indexPath.section == 5 {
            if indexPath.row == 3 || indexPath.row == 4 {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
            return CGSize(width: kScreenWidth / 2, height: 100)
        }
        
        if indexPath.section == 3 {
            if indexPath.row > 1 {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
            return CGSize(width: kScreenWidth / 2, height: 100)
        }
        
        if indexPath.section == 4 {
            if indexPath.row < 4 {
                return CGSize(width: kScreenWidth / 2, height: 100)
            } else {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
        }
        
        if indexPath.section == 6 {
            if indexPath.row < 2 {
                return CGSize(width: kScreenWidth / 2, height: 100)
            } else {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
        }
        
        if indexPath.section == 7 {
            if indexPath.row == 0 {
                return CGSize(width: kScreenWidth / 2, height: 100)
            } else {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
        }
        
        if indexPath.section == 8 {
            if indexPath.row < 4 {
                return CGSize(width: kScreenWidth / 2, height: 100)
            } else {
                return CGSize(width: kScreenWidth / 4, height: 100)
            }
        }
        
        
        
        let a = indexPath.row
        let b = Int(arc4random() % 10)
        return CGSize(width: 34, height: 56 + a * b)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, insetForSectionAt section: Int) -> UIEdgeInsets {
        
        return UIEdgeInsetsMake(0, 0, 0, 0)
//        if section == 1 || section == 2 {
//        }
//        return UIEdgeInsetsMake(0, 5, 0, 5)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumLineSpacingForSectionAt section: Int) -> CGFloat {
        return CGFloat(0)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, minimumInteritemSpacingForSectionAt section: Int) -> CGFloat {
        return CGFloat(0)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForHeaderInSection section: Int) -> CGSize {
        if section == 0 {
            return CGSize(width: kScreenWidth, height: CGFloat(kBannerHeight))
        }
        
        if section == 1 {
            return CGSize(width: kScreenWidth, height: 0)
        }
        return CGSize(width: kScreenWidth, height: 44)
    }
    
//    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForFooterInSection section: Int) -> CGSize {
//        return CGSize(width: kScreenWidth, height: 44)
//    }
}
