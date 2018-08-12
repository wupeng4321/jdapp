//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CCCMainCouponView, CCCouponSearchNoReceivedView, UIColor;

@interface CCCouponWelfareNormalCell : UITableViewCell
{
    CCCMainCouponView *_mainCouponView;
    CCCouponSearchNoReceivedView *_viceCouponNoReceivedView;
    CDUnknownBlockType _action;
    CDUnknownBlockType _receive;
    UIColor *_progressBackgroundColor;
}

@property(retain, nonatomic) UIColor *progressBackgroundColor; // @synthesize progressBackgroundColor=_progressBackgroundColor;
@property(copy, nonatomic) CDUnknownBlockType receive; // @synthesize receive=_receive;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(retain, nonatomic) CCCouponSearchNoReceivedView *viceCouponNoReceivedView; // @synthesize viceCouponNoReceivedView=_viceCouponNoReceivedView;
@property(retain, nonatomic) CCCMainCouponView *mainCouponView; // @synthesize mainCouponView=_mainCouponView;
- (void).cxx_destruct;
- (void)setCouponOriginalState;
- (void)updateViewWithItem:(id)arg1;
- (void)setupPositiveView;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
