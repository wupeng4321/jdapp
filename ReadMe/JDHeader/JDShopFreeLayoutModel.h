//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDShopActionConfigModel, NSMutableDictionary, NSString;

@interface JDShopFreeLayoutModel : JDModel
{
    float width;
    float height;
    float x;
    float y;
    NSMutableDictionary *configs;
    NSString *imageUrl;
    JDShopActionConfigModel *actionModel;
}

@property(retain, nonatomic) JDShopActionConfigModel *actionModel; // @synthesize actionModel;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(retain, nonatomic) NSMutableDictionary *configs; // @synthesize configs;
@property(nonatomic) float y; // @synthesize y;
@property(nonatomic) float x; // @synthesize x;
@property(nonatomic) float height; // @synthesize height;
@property(nonatomic) float width; // @synthesize width;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

