//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDCutDownModel;

@interface PDSkuSkinModel : NSObject
{
    NSString *_mainImage;
    NSString *_priceBackColor;
    NSString *_addCartNormal;
    NSString *_addCartPressed;
    NSString *_immedBuy;
    NSString *_immedBuyPressed;
    NSString *_tabColor;
    PDCutDownModel *_cutDown;
}

@property(retain, nonatomic) PDCutDownModel *cutDown; // @synthesize cutDown=_cutDown;
@property(copy, nonatomic) NSString *tabColor; // @synthesize tabColor=_tabColor;
@property(copy, nonatomic) NSString *immedBuyPressed; // @synthesize immedBuyPressed=_immedBuyPressed;
@property(copy, nonatomic) NSString *immedBuy; // @synthesize immedBuy=_immedBuy;
@property(copy, nonatomic) NSString *addCartPressed; // @synthesize addCartPressed=_addCartPressed;
@property(copy, nonatomic) NSString *addCartNormal; // @synthesize addCartNormal=_addCartNormal;
@property(copy, nonatomic) NSString *priceBackColor; // @synthesize priceBackColor=_priceBackColor;
@property(copy, nonatomic) NSString *mainImage; // @synthesize mainImage=_mainImage;
- (void).cxx_destruct;

@end

