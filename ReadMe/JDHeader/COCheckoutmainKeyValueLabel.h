//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class COCheckoutKeyValueModel, JDButton, UILabel;

@interface COCheckoutmainKeyValueLabel : JDView
{
    _Bool _helpButtonHidden;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
    JDButton *_helpButton;
    UILabel *_signLabel;
    COCheckoutKeyValueModel *_keyValueModel;
}

@property(retain, nonatomic) COCheckoutKeyValueModel *keyValueModel; // @synthesize keyValueModel=_keyValueModel;
@property(nonatomic, getter=isHelpButtonHidden) _Bool helpButtonHidden; // @synthesize helpButtonHidden=_helpButtonHidden;
- (void).cxx_destruct;
- (void)udpateValueLabel;
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) JDButton *helpButton; // @synthesize helpButton=_helpButton;
@property(readonly, nonatomic) UILabel *signLabel; // @synthesize signLabel=_signLabel;
@property(readonly, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (id)initWithKeyValueModel:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

