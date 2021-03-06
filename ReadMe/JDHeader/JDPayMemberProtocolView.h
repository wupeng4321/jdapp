//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UITextView;
@protocol JDPayMemberProtocolViewDelegate;

@interface JDPayMemberProtocolView : UIView <UITextViewDelegate>
{
    UIButton *_checkBtn;
    UIButton *_largeBtn;
    UITextView *_protocolTextView;
    id <JDPayMemberProtocolViewDelegate> _paymentProtocolViewDelegate;
    NSString *_codeProtocol;
    NSString *_jdPayProtocol;
    UIButton *_protocolBtn;
}

@property(retain, nonatomic) UIButton *protocolBtn; // @synthesize protocolBtn=_protocolBtn;
@property(copy, nonatomic) NSString *jdPayProtocol; // @synthesize jdPayProtocol=_jdPayProtocol;
@property(copy, nonatomic) NSString *codeProtocol; // @synthesize codeProtocol=_codeProtocol;
@property(nonatomic) __weak id <JDPayMemberProtocolViewDelegate> paymentProtocolViewDelegate; // @synthesize paymentProtocolViewDelegate=_paymentProtocolViewDelegate;
@property(retain, nonatomic) UITextView *protocolTextView; // @synthesize protocolTextView=_protocolTextView;
@property(retain, nonatomic) UIButton *largeBtn; // @synthesize largeBtn=_largeBtn;
@property(retain, nonatomic) UIButton *checkBtn; // @synthesize checkBtn=_checkBtn;
- (void).cxx_destruct;
- (void)private_setupData;
- (void)private_protocolButtonAction:(id)arg1;
- (void)private_selectButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

