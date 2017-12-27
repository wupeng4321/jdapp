//
//  JDHomeViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit
import ReactiveCocoa

class JDHomeViewController: BaseViewController, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource {
    
    let cellId = "cellId"
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupUI()
    }

    func setupUI() {
        self.view.addSubview(collectionView)
    }
    
    
    // MARK: - lazy loading
    lazy var collectionView: UICollectionView = {
        var col = UICollectionView.init(frame: self.view.bounds, collectionViewLayout: UICollectionViewLayout.init())
        col.delegate = self
        col.dataSource = self
        col.backgroundColor = UIColor.white
        col.register(type(of: UICollectionViewCell), forCellWithReuseIdentifier: cellId)
        
        col.register(<#T##cellClass: AnyClass?##AnyClass?#>, forCellWithReuseIdentifier: <#T##String#>)
        return col
    }()
    
    lazy var tableView:UITableView = {
        var tableView = UITableView.init(frame: self.view.bounds, style: .plain)
        tableView.delegate = self
        tableView.dataSource = self
        return tableView
    }()
    
    //MARK: - collectionView delegate & dataSource
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 4
    }
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return 23
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        var cell:UICollectionViewCell? = collectionView.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath)
        if cell == nil {
            cell = UICollectionViewCell.init()
            cell?.backgroundColor = UIColor.red
        }
        return cell!
    }
    
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
        if kind == UICollectionElementKindSectionHeader {
            
        }
    }
    
    
    // MARK: - tableView delegate & dataSource
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 2
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var cell = tableView.dequeueReusableCell(withIdentifier: "cellId")
        if cell == nil {
            cell = UITableViewCell.init()
        }
        cell?.textLabel?.text = "derqw"
        return cell!
    }
}
