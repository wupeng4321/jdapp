//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTTAttributedLabel, UILabel, WanderShopActivePKDetailModel;
@protocol WanderShopActivePKHeaderDelegate;

@interface WanderShopActivePKHeader : UIView
{
    _Bool _needDetailOpen;
    id <WanderShopActivePKHeaderDelegate> _delegate;
    WanderShopActivePKDetailModel *_model;
    UILabel *_PKTime;
    TTTAttributedLabel *_PKDetail;
}

@property(retain, nonatomic) TTTAttributedLabel *PKDetail; // @synthesize PKDetail=_PKDetail;
@property(retain, nonatomic) UILabel *PKTime; // @synthesize PKTime=_PKTime;
@property(nonatomic) __weak WanderShopActivePKDetailModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <WanderShopActivePKHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadLess;
- (void)loadMore;
- (void)refreshUI;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
