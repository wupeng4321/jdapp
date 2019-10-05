//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SSSRemindHelper, SSSpikeGoodsInfoModel, SecKillRequestManager, UIControl, UIImageView, UILabel;

@interface SSSpikeGoodsRemindButton : UIView
{
    SSSpikeGoodsInfoModel *_infoModel;
    UIControl *_button;
    UILabel *_lblText;
    UILabel *_lblRemind;
    SecKillRequestManager *_commitPinData;
    SSSRemindHelper *_remindHelper;
    UIView *_separator;
    UIImageView *_ivShadow;
}

@property(retain, nonatomic) UIImageView *ivShadow; // @synthesize ivShadow=_ivShadow;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) SSSRemindHelper *remindHelper; // @synthesize remindHelper=_remindHelper;
@property(retain, nonatomic) SecKillRequestManager *commitPinData; // @synthesize commitPinData=_commitPinData;
@property(retain, nonatomic) UILabel *lblRemind; // @synthesize lblRemind=_lblRemind;
@property(retain, nonatomic) UILabel *lblText; // @synthesize lblText=_lblText;
@property(retain, nonatomic) UIControl *button; // @synthesize button=_button;
@property(retain, nonatomic) SSSpikeGoodsInfoModel *infoModel; // @synthesize infoModel=_infoModel;
- (void).cxx_destruct;
- (void)didClickBtn:(id)arg1;
- (void)checkRemindStatus:(id)arg1;
- (void)toWareDeatail;
- (void)cancelRemind;
- (void)doRemind;
- (id)imageStrechName:(id)arg1;
- (id)gradientFromColor:(id)arg1 toColor:(id)arg2;
- (void)changeButtonState;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end
