//
//  JDHomeViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class JDHomeViewController: BaseViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        JDLog("s")
        let a = JDString("s_homepage")
        JDLog(a)
        let s = type(of: self)
        
        print(type(of: self))
    }
}
