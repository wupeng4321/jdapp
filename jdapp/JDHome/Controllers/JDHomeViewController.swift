//
//  JDHomeViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDHomeViewController: BaseViewController  {
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        self.navigationController?.setNavigationBarHidden(true, animated: true)
    }

    func setupUI() {
        self.view.addSubview(collectionView)
    }
    
    // MARK: - lazy loading
    lazy var collectionView: UICollectionView = {
        var col = UICollectionView.init(frame: self.view.bounds, collectionViewLayout: UICollectionViewLayout.init())
        return col
    }()
}
