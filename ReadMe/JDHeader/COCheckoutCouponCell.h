//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COCheckoutOrderInfoCouponsModel, JDButton, JDImageView, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIView;
@protocol COCheckoutCouponGridCellDelegate;

@interface COCheckoutCouponCell : UITableViewCell
{
    _Bool isResponseSwitchVender;
    id <COCheckoutCouponGridCellDelegate> _couponGridCellDelegate;
    JDButton *_checkBox;
    COCheckoutOrderInfoCouponsModel *_coupon;
    UIView *_whiteView;
    UIImageView *_couponImageView;
    UILabel *_flagLb;
    UILabel *_declareLb;
    UILabel *_declareDetailLb;
    TTTAttributedLabel *_useRangeLb;
    UILabel *_validPeriodLb;
    UIView *_noCanUseExplainView;
    UILabel *_unuseLb;
    UIButton *_foldBtn;
    UIView *_verticalLine;
    UIImageView *_recommendImageView;
    UIButton *_explainBtn;
    UIView *_btnView;
    UIView *_gradientView;
    UIView *_leftNoCanUseExplainViewLine;
    UIView *_bottomNoCanUseExplainViewLine;
    UIView *_rightNoCanUseExplainViewLine;
    UIView *_tipsView;
    UIView *_lineView;
    UILabel *_overlayMsgLable;
    JDImageView *_overlayImageView;
    UIButton *_mergeOrderBtn;
    UILabel *_bottomBelowMsgLabel;
}

+ (double)cellHeightWithCoupon:(id)arg1;
+ (double)getCellHeightWithCoupon:(id)arg1;
+ (double)getExplainViewHeightWithCoupon:(id)arg1 withExplainBtnHidden:(_Bool)arg2;
+ (id)getNextBelowMsgAttributedStringWithCoupon:(id)arg1 withExplainBtnHidden:(_Bool)arg2;
+ (id)getFirstBelowMsgAttributedStringWithCoupon:(id)arg1 withExplainBtnHidden:(_Bool)arg2;
+ (struct _NSRange)getRangeFromText:(id)arg1 withMaxWidth:(double)arg2 withFont:(id)arg3;
+ (id)getAttributedTextWithBelowMsg:(id)arg1;
@property(retain, nonatomic) UILabel *bottomBelowMsgLabel; // @synthesize bottomBelowMsgLabel=_bottomBelowMsgLabel;
@property(retain, nonatomic) UIButton *mergeOrderBtn; // @synthesize mergeOrderBtn=_mergeOrderBtn;
@property(retain, nonatomic) JDImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) UILabel *overlayMsgLable; // @synthesize overlayMsgLable=_overlayMsgLable;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) UIView *rightNoCanUseExplainViewLine; // @synthesize rightNoCanUseExplainViewLine=_rightNoCanUseExplainViewLine;
@property(retain, nonatomic) UIView *bottomNoCanUseExplainViewLine; // @synthesize bottomNoCanUseExplainViewLine=_bottomNoCanUseExplainViewLine;
@property(retain, nonatomic) UIView *leftNoCanUseExplainViewLine; // @synthesize leftNoCanUseExplainViewLine=_leftNoCanUseExplainViewLine;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) UIButton *explainBtn; // @synthesize explainBtn=_explainBtn;
@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) UIView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIButton *foldBtn; // @synthesize foldBtn=_foldBtn;
@property(retain, nonatomic) UILabel *unuseLb; // @synthesize unuseLb=_unuseLb;
@property(retain, nonatomic) UIView *noCanUseExplainView; // @synthesize noCanUseExplainView=_noCanUseExplainView;
@property(retain, nonatomic) UILabel *validPeriodLb; // @synthesize validPeriodLb=_validPeriodLb;
@property(retain, nonatomic) TTTAttributedLabel *useRangeLb; // @synthesize useRangeLb=_useRangeLb;
@property(retain, nonatomic) UILabel *declareDetailLb; // @synthesize declareDetailLb=_declareDetailLb;
@property(retain, nonatomic) UILabel *declareLb; // @synthesize declareLb=_declareLb;
@property(retain, nonatomic) UILabel *flagLb; // @synthesize flagLb=_flagLb;
@property(retain, nonatomic) UIImageView *couponImageView; // @synthesize couponImageView=_couponImageView;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain, nonatomic) COCheckoutOrderInfoCouponsModel *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) JDButton *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak id <COCheckoutCouponGridCellDelegate> couponGridCellDelegate; // @synthesize couponGridCellDelegate=_couponGridCellDelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressMergeOrderAction:(id)arg1;
- (void)foldBtnTaped:(id)arg1;
- (void)setNormalCouponInfoColor;
- (void)refreshViewWithNoCanUseCoupon:(id)arg1 CanUseSkulimitNum:(id)arg2;
- (void)setNoCanUseExplainViewSubViews;
- (void)setReadOnlyCouponInfoColor;
- (void)resetOverlayMsgLabel;
- (void)resetSupportOverlayImage;
- (void)resetCouponGridWithReadOnly:(_Bool)arg1;
- (void)setTheSameViews;
- (void)refreshViewWithCanUseCoupon:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)getDiscountAttributedTextWithSingleText:(id)arg1 withFontSize:(double)arg2;
- (id)getDiscountAttributedText:(id)arg1;
- (id)moneyAndDiscountAttributedStringWithStr:(id)arg1;
- (id)getOverlayAttributedTextWithLabel:(id)arg1 overlayMsg:(id)arg2 imageName:(id)arg3;
- (void)drawLineAtView:(id)arg1;

@end

