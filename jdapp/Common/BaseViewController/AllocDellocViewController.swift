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
    
    #endif

    init() {
        super.init(nibName: nil, bundle: nil)
        print("alloc")
    }
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    deinit {
        print("delloc")
    }
    
    func allocInit() {
        
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
