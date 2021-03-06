//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDShopModuleModel, NSMutableArray, NSString;

@interface JDNativeShopFreeLayoutView : UIView
{
    NSMutableArray *dataArray;
    CDUnknownBlockType freeLayoutBlock;
    JDShopModuleModel *moduleModel;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) JDShopModuleModel *moduleModel; // @synthesize moduleModel;
@property(copy, nonatomic) CDUnknownBlockType freeLayoutBlock; // @synthesize freeLayoutBlock;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray;
- (void)tapClick:(id)arg1;
- (void)setProductInfos:(id)arg1 uid:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

