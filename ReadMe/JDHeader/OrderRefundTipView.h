//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTTAttributedLabel, UIImageView;

@interface OrderRefundTipView : UIView
{
    TTTAttributedLabel *_contentLabel;
    TTTAttributedLabel *_subLabel;
    UIView *_backGroundView;
    UIImageView *_warningView;
}

@property(retain, nonatomic) UIImageView *warningView; // @synthesize warningView=_warningView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) TTTAttributedLabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) TTTAttributedLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (long long)heightForContentLabel;
- (double)setContentLabelText:(id)arg1 subLabelText:(id)arg2;
- (id)init;
- (void)dealloc;

@end

