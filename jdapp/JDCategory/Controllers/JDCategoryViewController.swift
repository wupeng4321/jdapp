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
        btn.tag = 100
        self.view.addSubview(btn)
        btn.snp.makeConstraints { (make) -> Void in
            make.left.top.equalTo(self.view).offset(100)
            make.width.height.equalTo(100)
        }
        btn.backgroundColor = UIColor.red
        btn.addTarget(self, action: #selector(btnClick(sender:)), for: .touchUpInside)
    }
    
    @objc func btnClick(sender:UIButton) {
        print(sender.tag)
        UIView.animate(withDuration: 10) {
            
            sender.snp.makeConstraints { (make) -> Void in
                make.left.equalTo(self.view)
                make.top.equalTo(self.view)
                make.height.equalTo(200)
                make.width.equalTo(100)
            }
        }
    }

}
