//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommentServiceVenderShopModel : JDModel
{
    _Bool _canGoToShop;
    NSString *_venderId;
    NSString *_shopId;
    NSString *_venderName;
    NSString *_appName;
}

@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *venderName; // @synthesize venderName=_venderName;
@property(nonatomic) _Bool canGoToShop; // @synthesize canGoToShop=_canGoToShop;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

