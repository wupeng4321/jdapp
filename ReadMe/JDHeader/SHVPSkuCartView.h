//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SHVPSkuCartView : UIView
{
    UIButton *_cartButton;
    UILabel *_countLabel;
    long long _count;
    CDUnknownBlockType _handleBlock;
}

@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
- (void).cxx_destruct;
- (id)labelContent;
- (struct CGRect)labelFrame;
- (void)cartButtonClick;
- (void)synCartCount;
- (void)updateCountLabel;
- (void)dealloc;
- (void)addObserver;
- (id)initWithFrame:(struct CGRect)arg1 HandleBlock:(CDUnknownBlockType)arg2;

@end
