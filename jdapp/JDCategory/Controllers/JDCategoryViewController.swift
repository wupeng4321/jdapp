//
//  JDCategoryViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//
import UIKit

class JDCategoryViewController: BaseViewController, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {
    
    let category = ["推荐分类", "京东超市", "国际名牌", "奢侈品", "全球购", "男装", "女装", "男鞋", "女鞋", "内衣配饰", "箱包手袋", "美妆个护", "钟表珠宝", "手机数码", "电脑办公", "家用电器", "食品生鲜", "酒水饮料", "母婴童装", "玩具乐器", "医药保健", "计生情趣", "运动户外", "汽车用品", "家居厨具", "家具家装", "礼品鲜花", "宠物生活", "生活旅行", "图书音像", "邮币", "农资绿植", "特产馆", "京东金融", "拍卖", "房产", "二手商品"]
    
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
            make.width.equalTo(Theme.paddingWithSize(180))
        }
        collectionView.snp.makeConstraints { (make) -> Void in
            make.left.equalTo(tableView.snp.right).offset(Theme.paddingWithSize(20))
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
        cell?.textLabel?.font = Theme.fontWithSize(30)
        cell?.textLabel?.textAlignment = .center
        cell?.textLabel?.text = category[indexPath.row]
        cell?.textLabel?.textColor = UIColor.black
        return cell!
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return category.count
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
