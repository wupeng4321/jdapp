//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface ShareOrderMoreReportView : UIView
{
    CDUnknownBlockType _closdeBlock;
    CDUnknownBlockType _finishBlock;
    UIImageView *_backView;
    UIView *_coverView;
    UIView *_contentView;
    UILabel *_titleLable;
    UIImageView *_reportImageView;
}

+ (id)showMoreReportPopView;
+ (id)showMoreReportPopViewWithOrigin:(struct CGPoint)arg1;
@property(retain, nonatomic) UIImageView *reportImageView; // @synthesize reportImageView=_reportImageView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType closdeBlock; // @synthesize closdeBlock=_closdeBlock;
- (void).cxx_destruct;
- (void)clickCover;
- (void)clickFinish;
- (void)setBackImageWithDirection:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

