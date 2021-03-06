//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDImageView, NSDictionary, NSString, RateView, UIButton, UIImageView, UILabel, UIView;

@interface JDOrderMapBottomView : JDView
{
    int m_Showtype;
    NSDictionary *m_DataDic;
    UIView *bgView;
    JDImageView *leftIcon;
    UILabel *titleLabel;
    double titleWidth;
    UILabel *timeLabel;
    RateView *starView;
    UILabel *contentLabel;
    UIImageView *rightArrowView;
    UIButton *rightPhoneBtn;
    UIButton *jumpActionBtn;
    _Bool isShowSubTitle;
    _Bool isShowStarLevel;
    NSString *defaultContent;
    _Bool isLargeOrder;
    int deliveryState;
}

@property(copy, nonatomic) NSString *defaultContent; // @synthesize defaultContent;
@property(nonatomic) int deliveryState; // @synthesize deliveryState;
@property(nonatomic) _Bool isLargeOrder; // @synthesize isLargeOrder;
@property(retain, nonatomic) NSDictionary *m_DataDic; // @synthesize m_DataDic;
- (void).cxx_destruct;
- (void)rightPhoneBtnClicked:(id)arg1;
- (void)jumpActionBtnClicked:(id)arg1;
- (void)upBtnClicked:(id)arg1;
- (void)updateCustomerDistace:(double)arg1;
- (void)updateContentState:(id)arg1;
- (id)getAttributedText:(id)arg1;
- (void)updateMapBottomView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

