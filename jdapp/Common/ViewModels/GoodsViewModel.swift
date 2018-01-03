//
//  GoodsViewModel.swift
//  jdapp
//
//  Created by wupeng on 2018/1/3.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class GoodsViewModel: BaseViewModel {
    var imageUrl: String?           //图片信息
    var goodsDetail: String?        //商品信息
    var price: String?              //正常价格
    var plusPrice: String?          //会员价格
    var activityInfo: String?       //满减活动信息
    var isByStage: Bool?            //分期免息
    var isSelf: Bool?               //自营
    var isLocal: Bool?              //本地仓
}
