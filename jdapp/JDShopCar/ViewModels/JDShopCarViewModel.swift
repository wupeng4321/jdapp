//
//  JDShopCarViewModel.swift
//  jdapp
//
//  Created by wupeng on 2018/1/7.
//  Copyright © 2018年 wupeng. All rights reserved.
//

import UIKit

class CartInfo: NSObject {
    var vendors: Array<Vender>?
}

class Vender: NSObject {
    var hasCoupon:String?
    var shopId:String?
    var shopName:String?
    var sorted: Array<Sorted>?
    var speciallId: String?
    var vendorId: String?
    var vendorPrice: String?
    var vendorType: String?
}

class Sorted: NSObject {
    var item: Item?
    var itemType: String?
}

class Item: NSObject {
//    var CanSelectGifs: Array
    var CheckType: String?
    var Discount: String?
    var entryLabel: String?
//    var Gifts:Array
    var Id: String?
    var isReachCondition: Bool?
//    var items: Array<Item>?
    var NeedMoney: String?
    var Num: Int?
    var Point: String?
    var Price: CGFloat?
    var PriceShow: String?
    var promotionId: String?
    var RePrice: String?
//    var Sku: Array?
    var speciallId: String?
    var stillNeed: String?
    var STip: String?
    var suitLabel: String?
    var suitType: String?
    
}

class item: NSObject {
    var item:itemItems?
    var itemType: String?
}

class itemItems: NSObject {
    var AwardType: String?
    var beanScore: String?
//    var canSelectPrices: Array?
//    var canSelectPromotions: Array?
    var cardSpecialId: String?
    var CheckType: String?
    var cid: String?
    var Discount: String?
//    var Gifs: Array?
    var Id: String?
    var IdForOldVersion: String?
    var ImgUrl: String?
    var isBOOK: Bool?
    var isProvideService: String?
    var isYb: String?
    var maxNum: String?
    var Name: String?
    var Num: String?
    var overseaPurchase: String?
    var Point: String?
    var Price: CGFloat?
    var PriceImg: String?
    var PriceShow: String?
    var propertyTags: String?
    var remainNum: Int?
    var remainNumInt: Int?
    var RePrice: CGFloat?
    var skuLabels: SkuLabels?
    var specialId: String?
    var stockCode: String?
    var stockState: String?
//    var Tags:Array
    var targetId: String?
}

class SkuLabels: NSObject {
    var priceTop: Array<priceInfo>?
}

class priceInfo: NSObject {
    var t: String?
    var u: String?
}

class ConfigCards: NSObject {
    var cardsNotice: Array<CardNotice>?
}

class CardNotice: NSObject {
    var cardId: String?
    var elems: Array<Elem>?
}

class Elem: NSObject {
    var elemType: String?
    var imgUrl: String?
}

class Notice: NSObject {
    var speciallId: String?
    var value: String?
}


class JDShopCarViewModel: BaseViewModel {
    var cartInfo: CartInfo?
    var code: String?
    var configCards: ConfigCards?
    var imageDomain: String?
    var notice: Notice?
    var resultCode: String?
    
}
