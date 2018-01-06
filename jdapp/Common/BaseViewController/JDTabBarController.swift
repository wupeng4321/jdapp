//
//  JDTabBarViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDTabBarController: UITabBarController {
    init() {
        super.init(nibName: nil, bundle: nil)
        self.setUpAllChildViewControllers()
    }
    
    required init?(coder aDecoder: NSCoder) {
        super.init(coder: aDecoder)
    }
    
    func setUpAllChildViewControllers() {
        let titles = ["首页", "分类", "发现", "购物车", "我的"]
        let normalImages = ["tabBar_home_normal", "tabBar_category_normal", "tabBar_me_normal", "tabBar_cart_normal", "tabBar_myJD_normal"]
        let selectedImages = ["tabBar_home_press", "tabBar_category_press", "tabBar_me_press", "tabBar_cart_press", "tabBar_myJD_press"]
        
        let home = JDHomeViewController()
        let category = JDCategoryViewController()
        let finder = JDFinderViewController()
        let shopCar = JDShopCarViewController()
        let user = JDUserViewController()
        let childs = [home, category, finder, shopCar, user]
        
        for i in 0 ..< titles.count {
            self.setUpChildViewController(childVc: childs[i], title: titles[i], normalImage: normalImages[i], selectedImage: selectedImages[i])
        }
    }
    
    func setUpChildViewController(childVc:UIViewController, title:String, normalImage:String, selectedImage:String) {
//        childVc.title = title;
        childVc.tabBarItem.image = UIImage(named: normalImage)
        childVc.tabBarItem.selectedImage = UIImage(named: selectedImage)
        tabBar.tintColor = UIColor.red
        let nav = UINavigationController.init(rootViewController: childVc)
        self.addChildViewController(nav)
//        childVc.tabBarItem.setTitleTextAttributes(<#T##attributes: [NSAttributedStringKey : Any]?##[NSAttributedStringKey : Any]?#>, for: <#T##UIControlState#>)
//        childVc.tabBarItem.setTitleTextAttributes(NSDictionary.init(object: "123", forKey: "1234"), for: UIControlStateNormal)
    }
}
