//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JDXBLongPressViewDelegate-Protocol.h"

@class JDImageView, JDXiaoBingShopView, JDXiaoBingSingleSkuView, JDXiaoBingTextView, JDXiaoBingUserTextView, JDXiaobingCouponView, NSString, UIImageView, UILabel;
@protocol JDXiaoBingChatCellLongPressDelegate;

@interface JDXiaoBingChatCell : UITableViewCell <JDXBLongPressViewDelegate>
{
    JDXiaoBingSingleSkuView *singleSkuView_;
    JDXiaoBingTextView *xiaoBingView_;
    JDXiaoBingUserTextView *userView_;
    JDXiaoBingShopView *shopView_;
    JDXiaobingCouponView *couponView_;
    JDImageView *xiaobingImg_;
    JDImageView *userImg_;
    UILabel *timetickView_;
    _Bool isTimetickShow_;
    long long msgTimetick_;
    UIImageView *m_xiaobingFrame;
    UIImageView *m_userFrame;
    int type_;
    id <JDXiaoBingChatCellLongPressDelegate> _delegate;
}

@property(nonatomic) __weak id <JDXiaoBingChatCellLongPressDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long m_msgTimetick; // @synthesize m_msgTimetick=msgTimetick_;
@property(nonatomic) _Bool m_isTimetickShow; // @synthesize m_isTimetickShow=isTimetickShow_;
@property(nonatomic) int type; // @synthesize type=type_;
@property(retain, nonatomic) UILabel *m_timetickView; // @synthesize m_timetickView=timetickView_;
@property(retain, nonatomic) JDXiaobingCouponView *m_couponView; // @synthesize m_couponView=couponView_;
@property(retain, nonatomic) JDXiaoBingShopView *m_shopView; // @synthesize m_shopView=shopView_;
@property(retain, nonatomic) JDXiaoBingSingleSkuView *m_singleSkuView; // @synthesize m_singleSkuView=singleSkuView_;
@property(retain, nonatomic) JDXiaoBingUserTextView *m_userView; // @synthesize m_userView=userView_;
@property(retain, nonatomic) JDXiaoBingTextView *m_xiaoBingView; // @synthesize m_xiaoBingView=xiaoBingView_;
@property(retain, nonatomic) JDImageView *m_userImg; // @synthesize m_userImg=userImg_;
@property(retain, nonatomic) JDImageView *m_xiaobingImg; // @synthesize m_xiaobingImg=xiaobingImg_;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)xiaobingTimeView;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveAction;
- (void)copyAction;
- (void)shareAction;
- (void)lpMenuWillShow;
- (void)lpMenuWillHide;
- (void)longPressAction:(id)arg1;
- (void)hideAll;
- (void)xiaobingImgClick;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

