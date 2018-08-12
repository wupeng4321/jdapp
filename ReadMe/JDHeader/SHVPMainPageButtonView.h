//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class UIButton, UILabel;

@interface SHVPMainPageButtonView : JDView
{
    UIButton *_button;
    UILabel *_label;
    long long _count;
    long long _buttonType;
    CDUnknownBlockType _buttonClickedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock; // @synthesize buttonClickedBlock=_buttonClickedBlock;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)cartButtonShake;
- (id)labelContent;
- (struct CGRect)labelFrame;
- (id)labelBackgroundColor;
- (void)buttonClicked;
- (void)refreshLabelCountWithNumber:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ItemCount:(long long)arg2 ButtonType:(long long)arg3 ClickedBlock:(CDUnknownBlockType)arg4;

@end

