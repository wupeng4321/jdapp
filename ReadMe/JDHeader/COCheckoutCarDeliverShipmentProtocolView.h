//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class COCheckoutCarDeliverShipmentProtocolInfoVM, COCheckoutNoticeMessageLabel, JDButton, NSString, TTTAttributedLabel;

@interface COCheckoutCarDeliverShipmentProtocolView : UIView <TTTAttributedLabelDelegate>
{
    NSString *_identifier;
    COCheckoutCarDeliverShipmentProtocolInfoVM *_protocolInfoVM;
    COCheckoutNoticeMessageLabel *_protocolMessageLabel;
    JDButton *_chooseButton;
    UIView *_backgroudView;
    TTTAttributedLabel *_clickStrLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *clickStrLabel; // @synthesize clickStrLabel=_clickStrLabel;
@property(retain, nonatomic) UIView *backgroudView; // @synthesize backgroudView=_backgroudView;
@property(retain, nonatomic) JDButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) COCheckoutNoticeMessageLabel *protocolMessageLabel; // @synthesize protocolMessageLabel=_protocolMessageLabel;
@property(retain, nonatomic) COCheckoutCarDeliverShipmentProtocolInfoVM *protocolInfoVM; // @synthesize protocolInfoVM=_protocolInfoVM;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)layoutSubviews;
- (void)clickChooseButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
