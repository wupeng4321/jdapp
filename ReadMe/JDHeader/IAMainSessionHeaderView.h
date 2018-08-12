//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface IAMainSessionHeaderView : UIView
{
    UILabel *_titleLabel;
    CDUnknownBlockType _clickBlock;
    UIImageView *_icon;
}

@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)clickTitleLabel;
- (void)callBackWhenClick:(CDUnknownBlockType)arg1;
- (void)configName:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
