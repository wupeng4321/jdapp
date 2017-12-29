//
//  JDCategoryViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDCategoryViewController: BaseViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let btn = UIButton(frame: CGRect(x: 100, y: 100, width: 100, height: 100))
        self.view.addSubview(btn)
        btn.backgroundColor = UIColor.red
        btn.addTarget(self, action: #selector(btnClick(sender:)), for: .touchUpInside)
    }
    
    @objc func btnClick(sender:UIButton) {
        print(sender)
    }

}
