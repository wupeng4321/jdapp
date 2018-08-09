//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumber, UIImageView, UILabel;

@interface FinderAttentionView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_attentionImageView;
    _Bool _tapEnable;
    long long _attStyle;
    NSNumber *_actionType;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) NSNumber *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool tapEnable; // @synthesize tapEnable=_tapEnable;
@property(nonatomic) long long attStyle; // @synthesize attStyle=_attStyle;
- (void).cxx_destruct;
- (void)attentionTapAction:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initAttentionViewWithStyle:(long long)arg1;

@end

