//
//  UITextView+Category.swift
//  jdapp
//
//  Created by wupeng on 2018/4/10.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import Foundation
import UIKit

//插入的图片附件的尺寸样式
enum ImageAttachmentMode {
    case `default`  //默认（不改变大小）
    case fitTextLine  //使尺寸适应行高
    case fitTextView  //使尺寸适应textView
}

extension UITextView {
    //插入文字
    func insertString(_ text:String) {
        //获取textView的所有文本，转成可变的文本
        let mutableStr = NSMutableAttributedString(attributedString: self.attributedText)
        //获得目前光标的位置
        let selectedRange = self.selectedRange
        //插入文字
        let attStr = NSAttributedString(string: text)
        mutableStr.insert(attStr, at: selectedRange.location)
        
        //设置可变文本的字体属性
        mutableStr.addAttribute(NSAttributedStringKey.font, value: Theme.fontWithSize(20),
                                range: NSMakeRange(0,mutableStr.length))
        //再次记住新的光标的位置
        let newSelectedRange = NSMakeRange(selectedRange.location + attStr.length, 0)
        
        //重新给文本赋值
        self.attributedText = mutableStr
        //恢复光标的位置（上面一句代码执行之后，光标会移到最后面）
        self.selectedRange = newSelectedRange
    }
    
    //插入图片
    func insertPicture(_ image:UIImage, mode:ImageAttachmentMode = .default){
        //获取textView的所有文本，转成可变的文本
        let mutableStr = NSMutableAttributedString(attributedString: self.attributedText)
        
        //创建图片附件
        let imgAttachment = NSTextAttachment(data: nil, ofType: nil)
        var imgAttachmentString: NSAttributedString
        imgAttachment.image = image
        
        //设置图片显示方式
        if mode == .fitTextLine {
            //与文字一样大小
            let scale = image.size.width / image.size.height
            imgAttachment.bounds = CGRect(x: 0, y: -2, width: Theme.fontWithSize(20).lineHeight * scale,
                                          height: Theme.fontWithSize(20).lineHeight)
        } else if mode == .fitTextView {
            //撑满一行
            let imageWidth = self.frame.width - 10
            let imageHeight = image.size.height/image.size.width*imageWidth
            imgAttachment.bounds = CGRect(x: 0, y: -4, width: imageWidth, height: imageHeight)
        }
        
        imgAttachmentString = NSAttributedString(attachment: imgAttachment)
        
        //获得目前光标的位置
        let selectedRange = self.selectedRange
        //插入文字
        mutableStr.insert(imgAttachmentString, at: selectedRange.location)
        //设置可变文本的字体属性
        mutableStr.addAttribute(NSAttributedStringKey.font, value: Theme.fontWithSize(20),
                                range: NSMakeRange(0,mutableStr.length))
        //再次记住新的光标的位置
        let newSelectedRange = NSMakeRange(selectedRange.location+1, 0)
        
        //重新给文本赋值
        self.attributedText = mutableStr
        //恢复光标的位置（上面一句代码执行之后，光标会移到最后面）
        self.selectedRange = newSelectedRange
        //移动滚动条（确保光标在可视区域内）
        self.scrollRangeToVisible(newSelectedRange)
    }
    
//    func numberOfLines(_ lines:NSInteger) {
//        if self.text.
//    }
}
