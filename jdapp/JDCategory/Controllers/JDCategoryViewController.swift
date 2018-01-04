//
//  JDCategoryViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDCategoryViewController: BaseViewController, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {

    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = ColorFromRGB(0xf3f5f7)
        self.setupUI()
    }
    
    func setupUI() {
        self.view.addSubview(headerView)
        self.view.addSubview(tableView)
        self.view.addSubview(collectionView)
        tableView.snp.makeConstraints { (make) -> Void in
            make.top.equalTo(headerView.snp.bottom)
            make.bottom.equalTo(self.view.snp.bottom).offset(-kTabBarHeight)
            make.left.equalTo(self.view)
            make.width.equalTo(Theme.paddingWithSize(160))
        }
        collectionView.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(tableView.snp.right)
            make.top.bottom.equalTo(tableView)
            make.right.equalTo(self.view)
        }
        
    }
    
    

    //MARK: - lazy loading
    lazy var headerView: TransparentNavigationBar = {
        let headerView = TransparentNavigationBar.init(frame: CGRect(x: CGFloat(0), y: CGFloat(0), width: kScreenWidth, height: CGFloat(kStatusBarAndNavHeight)))
//        headerView.scrollView = self.collectionView
        headerView.textFieldBackgroundColor = kColorBlack
        headerView.style = .normalStyle
        return headerView
    }()
    
    lazy var tableView: UITableView = {
        let tableView: UITableView = UITableView()
        tableView.delegate = self
        tableView.dataSource = self
        tableView.showsVerticalScrollIndicator = false
        tableView.register(UITableViewCell.classForCoder(), forCellReuseIdentifier: "cellId")
        return tableView
    }()
    lazy var collectionView: UICollectionView = {
        let layout = UICollectionViewFlowLayout()
        let collectionView: UICollectionView = UICollectionView(frame: CGRect(), collectionViewLayout: layout)
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.backgroundColor = ColorFromRGB(0xf3f5f7)
        if ios11 {
            collectionView.contentInsetAdjustmentBehavior = .never
        }
        collectionView.register(UICollectionViewCell.classForCoder(), forCellWithReuseIdentifier: "cellId")
        return collectionView
    }()
    
    //MARK: - tableview delegate & datasource
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "cellId")
        cell?.textLabel?.text = "\(indexPath.row)"
        return cell!
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 20
    }
    
    //MARK: - collectionView delegate & datasource
    func numberOfSections(in collectionView: UICollectionView) -> Int {
        return 4
    }
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return 9
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "cellId", for: indexPath)
        cell.backgroundColor = ArcRandomColor()
        return cell
    }
//    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind: String, at indexPath: IndexPath) -> UICollectionReusableView {
//
//    }
    //MARK: - UICollectionViewFlowLayout
 func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return CGSize(width: kScreenWidth / 4, height: 100)
    }
}
