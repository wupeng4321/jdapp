//
//  JDShopCarViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit
import Alamofire

class JDShopCarViewController: AllocDellocViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        self.navigationItem.title = "购物车"
        
        self.loadData()
    }
    
    func setupUI() {
        
    }
    
    func loadData() {
        
    }
    
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewFlowLayout()

        let collectionView: UICollectionView = UICollectionView(frame: CGRect(), collectionViewLayout: layout)
        return collectionView
    }()
    


}
