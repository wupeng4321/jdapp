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

        let btn1 = UIButton(frame: CGRect(x: 100, y: 50, width: 100, height: 100))
        btn1.setTitle("1->2", for: .normal)
        btn1.addTarget(self, action: #selector(btnclick1(sender:)), for: .touchUpInside)
        btn1.setTitleColor(UIColor.black, for: .normal)
        self.view.addSubview(btn1)
        
        
        let btn2 = UIButton(frame: CGRect(x: 200, y: 50, width: 100, height: 100))
        btn2.setTitle("2->3", for: .normal)
        btn2.addTarget(self, action: #selector(btnclick2(sender:)), for: .touchUpInside)
        btn2.setTitleColor(UIColor.black, for: .normal)
        self.view.addSubview(btn2)
        
        
        let btn3 = UIButton(frame: CGRect(x: 300, y: 50, width: 100, height: 100))
        btn3.setTitle("2->1", for: .normal)
        btn3.addTarget(self, action: #selector(btnclick3(sender:)), for: .touchUpInside)
        btn3.setTitleColor(UIColor.black, for: .normal)
        self.view.addSubview(btn3)
        
        self.view.addSubview(self.view1)
        let padding = Theme.paddingWithSize(80)
        for i in 0 ..< 4 {
            let subview = UILabel(frame: CGRect(x: padding * CGFloat(1 + 2 * i), y: 0, width: padding, height: padding))
            subview.text = "\(i + 1)"
            subview.tag = i + 1
            subview.textAlignment = .center
            subview.backgroundColor = ArcRandomColor()
            subview.boundsToCorderRadius(padding / 2.0)
            self.view1.addSubview(subview)
        }
        for i in 0 ..< 5 {
            let subview = UILabel(frame: CGRect(x: padding * CGFloat(2 * i), y: padding, width: padding, height: padding))
            subview.tag = i + 5
            subview.text = "\(i + 5)"
            subview.textAlignment = .center
            subview.backgroundColor = ArcRandomColor()
            subview.boundsToCorderRadius(padding / 2.0)
            self.view1.addSubview(subview)
        }
    }
    
    @objc func btnclick1(sender: UIButton) -> Void {
        UIView.animate(withDuration: 2.0) {
            self.view1.viewWithTag(1)?.bottom()
            self.view1.viewWithTag(2)?.left()
            self.view1.viewWithTag(3)?.right()
            self.view1.viewWithTag(4)?.bottom()
            self.view1.viewWithTag(5)?.bottomRight2()
            self.view1.viewWithTag(6)?.right()
            self.view1.viewWithTag(7)?.bottom()
            self.view1.viewWithTag(8)?.left()
            self.view1.viewWithTag(9)?.bottomLeft2()
        }
    }
    
    @objc func btnclick2(sender: UIButton) -> Void {
        UIView.animate(withDuration: 2.0) {
            
            self.view1.viewWithTag(1)?.bottom()
            self.view1.viewWithTag(2)?.left()
            self.view1.viewWithTag(3)?.right()
            self.view1.viewWithTag(4)?.bottom()
            self.view1.viewWithTag(5)?.bottomRight2()
            self.view1.viewWithTag(6)?.right()
            self.view1.viewWithTag(7)?.bottom()
            self.view1.viewWithTag(8)?.left()
            self.view1.viewWithTag(9)?.bottomLeft2()
            
            self.view1.viewWithTag(1)?.bottom()
            self.view1.viewWithTag(2)?.right()
            self.view1.viewWithTag(3)?.left()
            self.view1.viewWithTag(4)?.bottom()
            self.view1.viewWithTag(5)?.right()
            self.view1.viewWithTag(6)?.left()
            self.view1.viewWithTag(7)?.top()
            self.view1.viewWithTag(8)?.right()
            self.view1.viewWithTag(9)?.left()
        }
    }
    
    @objc func btnclick3(sender: UIButton) -> Void {
        UIView.animate(withDuration: 2.0) {
            self.view1.viewWithTag(1)?.top()
            self.view1.viewWithTag(2)?.right()
            self.view1.viewWithTag(3)?.left()
            self.view1.viewWithTag(4)?.top()
            self.view1.viewWithTag(5)?.topLeft2()
            self.view1.viewWithTag(6)?.left()
            self.view1.viewWithTag(7)?.top()
            self.view1.viewWithTag(8)?.right()
            self.view1.viewWithTag(9)?.topRight2()
            
        }
    }
    
    lazy var view1: UIView = {
        let view = UIView(frame: CGRect(x: 10, y: 200, width: kScreenWidth, height: 150))
        
        return view
    }()
    
    

    




}
