//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView;

@interface CCCMarketListHeaderView : UIView
{
    UIImageView *_headerView;
    NSString *_ruleUrl;
}

@property(copy, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl=_ruleUrl;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)jumpRule;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
