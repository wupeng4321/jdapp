//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIImageView, UIScrollView;
@protocol JDShopGiftPackageViewDelegate;

@interface JDShopGiftPackageView : UIView
{
    _Bool _isFollow;
    _Bool _isNeedRequest;
    id <JDShopGiftPackageViewDelegate> _delegate;
    NSString *_strEventParam;
    NSString *_shopId;
    UIView *_backGroundView;
    UIImageView *_contentView;
    UIButton *_followBtn;
    UIButton *_closeBtn;
    UIScrollView *_mScrollView;
    NSArray *_dataArr;
}

@property(nonatomic) _Bool isNeedRequest; // @synthesize isNeedRequest=_isNeedRequest;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIScrollView *mScrollView; // @synthesize mScrollView=_mScrollView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *strEventParam; // @synthesize strEventParam=_strEventParam;
@property(nonatomic) __weak id <JDShopGiftPackageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followAction;
- (void)hideGiftPackageView;
- (void)hide;
- (void)showWithDataArr:(id)arg1 isFollowed:(_Bool)arg2 isFollowBtnNeedRequest:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

