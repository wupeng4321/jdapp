//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HomePageChannelSearchParamModel : NSObject
{
    _Bool _stock;
    _Bool _isSelf;
    _Bool _globalPurchaseFilter;
    NSString *_srv;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(nonatomic) _Bool globalPurchaseFilter; // @synthesize globalPurchaseFilter=_globalPurchaseFilter;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool stock; // @synthesize stock=_stock;
- (void).cxx_destruct;

@end

