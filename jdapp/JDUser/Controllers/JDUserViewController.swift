//
//  JDMyViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/20.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDUserViewController: BaseViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let btn = UIButton(frame: CGRect(x: 100, y: 100, width: 100, height: 100))
        btn.setTitle("12345132", for: .normal)
        btn.setTitleColor(UIColor.black, for: .normal)
        self.view.addSubview(btn)
        
    }



}
