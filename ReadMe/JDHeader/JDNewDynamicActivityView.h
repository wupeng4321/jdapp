//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDShopDynamicActivityModel, JDShopDynamicPromotionIcon, UIButton, UIImageView, UILabel;

@interface JDNewDynamicActivityView : UIView
{
    JDShopDynamicPromotionIcon *_promIcon;
    UIButton *_topicBtn;
    UILabel *_detailLabel;
    UIImageView *_verticalLineImgView;
    UILabel *_viceDeatilLbl;
    UIView *_activityView;
    _Bool isShowActionView;
    CDUnknownBlockType _topicBlock;
    CDUnknownBlockType _dynamicBlock;
    CDUnknownBlockType _productBlock;
    CDUnknownBlockType _productArrayBlock;
    JDShopDynamicActivityModel *_activityModel;
}

@property(retain, nonatomic) JDShopDynamicActivityModel *activityModel; // @synthesize activityModel=_activityModel;
@property(copy, nonatomic) CDUnknownBlockType productArrayBlock; // @synthesize productArrayBlock=_productArrayBlock;
@property(copy, nonatomic) CDUnknownBlockType productBlock; // @synthesize productBlock=_productBlock;
@property(copy, nonatomic) CDUnknownBlockType dynamicBlock; // @synthesize dynamicBlock=_dynamicBlock;
@property(copy, nonatomic) CDUnknownBlockType topicBlock; // @synthesize topicBlock=_topicBlock;
- (void)topicButtonClick;
- (id)productFrameArray;
- (void)resetSecKillTime;
- (void)setViewWithModel:(id)arg1;
- (void)didTapActivityView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

