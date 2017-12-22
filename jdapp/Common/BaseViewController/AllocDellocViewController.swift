//
//  AllocDellocViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit
#if DEBUG
    var s_allocInfo : Dictionary<String, Int> = [:]
#endif

class AllocDellocViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
    }
    init() {
        super.init(nibName: nil, bundle: nil)
        self.allocInit()
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    deinit {
        #if DEBUG
            JDLog("----------------释放类----------------\(NSStringFromClass(type(of: self)))")
        #endif
    }
    
    func allocInit() {
        #if DEBUG
            JDLog("----------------创建类----------------\(NSStringFromClass(type(of: self)))")
            let str:String = NSStringFromClass(type(of: self))
            s_allocInfo[str] = s_allocInfo[str] ?? 0 + 1
            JDLog(s_allocInfo)
        #endif
    }
}
