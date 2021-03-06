//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, UITableView;
@protocol MyNewCouponBottomEditViewDelegate;

@interface MyCouponBottomEditView : JDView
{
    _Bool _showCouponMarket;
    _Bool _hasBeenShown;
    id <MyNewCouponBottomEditViewDelegate> _editDelegate;
    JDButton *_checkAllBtn;
    JDButton *_deleteBtn;
    UITableView *_targetTabeleView;
}

@property(readonly, nonatomic) _Bool hasBeenShown; // @synthesize hasBeenShown=_hasBeenShown;
@property(readonly, nonatomic) _Bool showCouponMarket; // @synthesize showCouponMarket=_showCouponMarket;
@property(readonly, nonatomic) UITableView *targetTabeleView; // @synthesize targetTabeleView=_targetTabeleView;
@property(readonly, nonatomic) JDButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(readonly, nonatomic) JDButton *checkAllBtn; // @synthesize checkAllBtn=_checkAllBtn;
@property(nonatomic) __weak id <MyNewCouponBottomEditViewDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
- (void).cxx_destruct;
- (void)deleteBtnClicked:(id)arg1;
- (void)cancelBtnClicked:(id)arg1;
- (void)checkAllBtnClicked:(id)arg1;
- (void)updateCheckedNum:(long long)arg1 checkAll:(_Bool)arg2;
- (void)show:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)btnAttributedTitle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 couponMarketConfig:(_Bool)arg2 inTableView:(id)arg3;
- (void)dealloc;

@end

