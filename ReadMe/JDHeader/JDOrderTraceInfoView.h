//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, NSString, UIImageView, UILabel;
@protocol JDOrderTraceInfoViewDelegate;

@interface JDOrderTraceInfoView : UIView
{
    double infoHeight;
    _Bool canUrgeOrder;
    _Bool expoUrgeOrderBtn;
    _Bool expoDongdongBtn;
    id <JDOrderTraceInfoViewDelegate> _infoDelegate;
    JDButton *_remainderBtn;
    JDButton *_dongdongBtn;
    UIImageView *_bottomIcon;
    UILabel *_bottomLabel;
    NSString *_orderId;
    NSString *_orderType;
    NSString *_orderStatusId;
}

@property(retain, nonatomic) NSString *orderStatusId; // @synthesize orderStatusId=_orderStatusId;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIImageView *bottomIcon; // @synthesize bottomIcon=_bottomIcon;
@property(retain, nonatomic) JDButton *dongdongBtn; // @synthesize dongdongBtn=_dongdongBtn;
@property(retain, nonatomic) JDButton *remainderBtn; // @synthesize remainderBtn=_remainderBtn;
@property(nonatomic) __weak id <JDOrderTraceInfoViewDelegate> infoDelegate; // @synthesize infoDelegate=_infoDelegate;
- (void).cxx_destruct;
- (void)dongdongBtnClicked:(id)arg1;
- (void)remainderBtnClicked:(id)arg1;
- (void)mobileBtnClicked:(id)arg1;
- (void)didFinishedTextCopy:(id)arg1;
- (double)getInfoViewHeight;
- (double)layoutBottomPromiseAttention:(id)arg1;
- (void)layoutDongdongBtn:(id)arg1 count:(long long)arg2 showUrgeOrderBtn:(_Bool)arg3;
- (void)layoutRemainderBtn:(id)arg1 count:(long long)arg2;
- (double)layoutTextArr:(id)arg1 count:(long long)arg2 showUrgeBtn:(_Bool)arg3 showDongdongBtn:(_Bool)arg4;
- (void)resetInfoViewState;
- (void)updateInfoView:(id)arg1;
- (void)updateRemaindBtnState;
- (id)init;
- (void)dealloc;

@end
