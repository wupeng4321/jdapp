//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDNJCommonDelegate-Protocol.h"

@class JDStoreNetwork, JDXiaobingSecurityCodeView, NSDictionary, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel;
@protocol JDNJCommonDelegate;

@interface JDXiaobingTicketView : UIView <JDNJCommonDelegate>
{
    UILabel *m_titleLabel;
    UILabel *m_categoryLabel;
    UILabel *m_shortLabel;
    UILabel *m_longLabel;
    UILabel *m_freeLabel;
    UIImageView *m_doneImageView;
    JDStoreNetwork *netWork;
    long long connect;
    UIButton *m_bgButton;
    _Bool alreadyTake;
    _Bool cancel;
    _Bool showCode;
    _Bool undo;
    _Bool butCLick;
    JDXiaobingSecurityCodeView *codeView;
    id <JDNJCommonDelegate> shopDelegate;
    NSMutableDictionary *couponDic;
    NSDictionary *securityDic;
}

@property(nonatomic) _Bool butCLick; // @synthesize butCLick;
@property(nonatomic) _Bool undo; // @synthesize undo;
@property(retain, nonatomic) NSDictionary *securityDic; // @synthesize securityDic;
@property(retain, nonatomic) NSMutableDictionary *couponDic; // @synthesize couponDic;
@property(nonatomic) _Bool showCode; // @synthesize showCode;
@property(nonatomic) _Bool cancel; // @synthesize cancel;
@property(nonatomic) __weak id <JDNJCommonDelegate> shopDelegate; // @synthesize shopDelegate;
@property(nonatomic) _Bool alreadyTake; // @synthesize alreadyTake;
@property(retain, nonatomic) JDXiaobingSecurityCodeView *codeView; // @synthesize codeView;
- (void).cxx_destruct;
- (void)updateDiscountTicketViews;
- (void)loadDictionary:(id)arg1;
- (void)isTakeSecurityCodeDelegate:(_Bool)arg1;
- (void)needOpenPayPassword:(id)arg1;
- (void)loadSecurityCodeView;
- (void)verifyAlreadyConnectPay;
- (void)takeTicketUndo;
- (void)takeTicket;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
