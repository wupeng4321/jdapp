//
//  AllocDellocViewController.swift
//  jdapp
//
//  Created by wupeng on 2017/12/19.
//  Copyright © 2017年 wupeng. All rights reserved.
//

import UIKit

class AllocDellocViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
    }
    #if DEBUG
        var s_allocInfo = Dictionary<String, Int>()
    #endif
    


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
            let controller:AllocDellocViewController.Type = type(of: self)
            let str:String = NSStringFromClass(controller)
            self.s_allocInfo[str] = self.s_allocInfo[str] ?? 0 + 1
            JDLog(self.s_allocInfo)
        #endif
    }

    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
