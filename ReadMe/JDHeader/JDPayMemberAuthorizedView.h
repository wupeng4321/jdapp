//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDPayMemberProtocolViewDelegate-Protocol.h"

@class JDPayMemberDismountView, JDPayMemberProtocolView, NSString, UIButton, UIImageView, UILabel;
@protocol JDPayMemberAuthorizedViewDelegate;

@interface JDPayMemberAuthorizedView : UIView <JDPayMemberProtocolViewDelegate>
{
    _Bool _isSelect;
    id <JDPayMemberAuthorizedViewDelegate> _memberAuthorizedViewDelegate;
    UILabel *_jdmVIPTitle;
    UILabel *_jdmTitle;
    JDPayMemberDismountView *_jdmDiscountTitle;
    JDPayMemberDismountView *_jdmPayTitle;
    UIImageView *_jdmImagView;
    JDPayMemberProtocolView *_jdmProtocolView;
    UIButton *_jdmAuthorizedBtn;
    UIButton *_largeBtn;
    double _acceptEventTime;
}

@property(nonatomic) double acceptEventTime; // @synthesize acceptEventTime=_acceptEventTime;
@property(retain, nonatomic) UIButton *largeBtn; // @synthesize largeBtn=_largeBtn;
@property(retain, nonatomic) UIButton *jdmAuthorizedBtn; // @synthesize jdmAuthorizedBtn=_jdmAuthorizedBtn;
@property(retain, nonatomic) JDPayMemberProtocolView *jdmProtocolView; // @synthesize jdmProtocolView=_jdmProtocolView;
@property(retain, nonatomic) UIImageView *jdmImagView; // @synthesize jdmImagView=_jdmImagView;
@property(retain, nonatomic) JDPayMemberDismountView *jdmPayTitle; // @synthesize jdmPayTitle=_jdmPayTitle;
@property(retain, nonatomic) JDPayMemberDismountView *jdmDiscountTitle; // @synthesize jdmDiscountTitle=_jdmDiscountTitle;
@property(retain, nonatomic) UILabel *jdmTitle; // @synthesize jdmTitle=_jdmTitle;
@property(retain, nonatomic) UILabel *jdmVIPTitle; // @synthesize jdmVIPTitle=_jdmVIPTitle;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) __weak id <JDPayMemberAuthorizedViewDelegate> memberAuthorizedViewDelegate; // @synthesize memberAuthorizedViewDelegate=_memberAuthorizedViewDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateProtocolBtnStatus;
- (void)pushProtocolViewControllorByLinkWithProtocol:(id)arg1;
- (void)selectOnPaymentProtocolView:(id)arg1 checkButton:(id)arg2;
- (void)openMemberCode:(id)arg1;
- (void)updateWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

