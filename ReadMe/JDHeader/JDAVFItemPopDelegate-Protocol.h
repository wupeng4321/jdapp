//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDAVFMiniSkuModel, NSString, PDColorSizeButtonModel, UIButton;

@protocol JDAVFItemPopDelegate <NSObject>

@optional
- (void)textFieldChanged;
- (void)onClickPlusButton;
- (void)onClickMinusButton;
- (void)confirmButtonTapped:(UIButton *)arg1 productModel:(JDAVFMiniSkuModel *)arg2 buyCount:(NSString *)arg3;
- (void)colorSizeButtonTappedWithButtonModel:(PDColorSizeButtonModel *)arg1;
- (void)changeSku:(NSString *)arg1;
@end

