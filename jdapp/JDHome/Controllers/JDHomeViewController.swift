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
    
    let cellId   = "cellId"
    let headerId = "headerId"
    let footerId = "footerId"
    let navigatorId = "navigatorId"
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupUI()
    }

    func setupUI() {
        self.view.addSubview(self.collectionView)
        self.view.addSubview(self.headerView)
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
        collectionView.register(UICollectionViewCell.classForCoder(), forCellWithReuseIdentifier: navigatorId)
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionHeader, withReuseIdentifier: headerId)
        collectionView.register(UICollectionReusableView.classForCoder(), forSupplementaryViewOfKind: UICollectionElementKindSectionFooter, withReuseIdentifier: footerId)
        return collectionView
    }()
    
    lazy var headerView: TransparentNavigationBar = {
//        var headerView = UIView(frame: CGRect(x: CGFloat(0), y: CGFloat(0), width: kScreenWidth, height: CGFloat(kStatusBarAndNavHeight)))
        let headerView = TransparentNavigationBar.init(frame: CGRect(x: CGFloat(0), y: CGFloat(0), width: kScreenWidth, height: CGFloat(kStatusBarAndNavHeight)))
        headerView.scrollView = self.collectionView
        return headerView
    }()
    
    

    
    //MARK: - collectionView delegate & dataSource
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 4
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        if section == 0 {
            return 1
        }
        return 23
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
       
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath)
        cell.backgroundColor = UIColor.gray
        if indexPath.section == 0 {
            cell.addSubview(NavigatorScrollView())
        }
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if kind == UICollectionElementKindSectionHeader {
            let headerView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: headerId, for: indexPath)
            headerView.backgroundColor = UIColor.purple
            return headerView
        }
        if kind == UICollectionElementKindSectionFooter {
            let footView = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier: footerId, for: indexPath)
            footView.backgroundColor = UIColor.purple
            return footView
        }
        return UICollectionReusableView.init()
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
        
        let a = indexPath.row
        let b = Int(arc4random() % 10)
        return CGSize(width: 34, height: 56 + a * b)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, insetForSectionAt section: Int) -> UIEdgeInsets {
        return UIEdgeInsetsMake(0, 5, 5, 5)
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
        return CGSize(width: kScreenWidth, height: 44)
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForFooterInSection section: Int) -> CGSize {
        return CGSize(width: kScreenWidth, height: 44)
    }
}
