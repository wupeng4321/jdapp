//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, UIImageView, UILabel;

@interface JDShopDynamicPromotionIcon : UIView
{
    JDImageView *bgView;
    UILabel *textLabel;
    UIImageView *verticalLine;
    UILabel *hourLable;
    UILabel *miniteLable;
    UILabel *secLabel;
    UIImageView *timeBgView;
    NSString *_strActivityTypeSrc;
}

@property(retain, nonatomic) NSString *strActivityTypeSrc; // @synthesize strActivityTypeSrc=_strActivityTypeSrc;
- (id)getHourAndMinAndSec:(id)arg1;
- (id)getHourAndMin:(id)arg1;
- (void)dealloc;
- (struct CGSize)iconSize;
- (void)setViewWithType:(int)arg1 secondKill:(id)arg2 iconImgUrl:(id)arg3;
- (void)setText:(id)arg1 type:(int)arg2;
- (void)setText:(id)arg1 withImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

