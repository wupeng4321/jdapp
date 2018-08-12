//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDButton, JDLabel, NSString, OrderDetailCancelReasonModel, UIImageView, UIView;
@protocol OrderDetailCancelReasonCellDelegate;

@interface OrderDetailCancelReasonCell : UITableViewCell
{
    _Bool _cellSelected;
    NSString *_reasonId;
    NSString *_reason;
    OrderDetailCancelReasonModel *_model;
    id <OrderDetailCancelReasonCellDelegate> _cellDelegate;
    JDButton *_selectButton;
    JDLabel *_reasonLabel;
    JDLabel *_tipLabel;
    JDButton *_tipButton;
    UIView *_tipView;
    UIImageView *_arrowImgView;
    double _upHeight;
}

+ (double)cellHeight:(id)arg1;
@property(nonatomic) double upHeight; // @synthesize upHeight=_upHeight;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) JDButton *tipButton; // @synthesize tipButton=_tipButton;
@property(retain, nonatomic) JDLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) JDLabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(retain, nonatomic) JDButton *selectButton; // @synthesize selectButton=_selectButton;
@property(nonatomic) __weak id <OrderDetailCancelReasonCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) OrderDetailCancelReasonModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *reasonId; // @synthesize reasonId=_reasonId;
@property(nonatomic) _Bool cellSelected; // @synthesize cellSelected=_cellSelected;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)buttonClicked;
- (void)tipClicked;
- (void)hideTips;
- (void)showTips;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

