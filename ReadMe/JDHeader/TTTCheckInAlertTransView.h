//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class TTTCheckInAlertContainerView;

@interface TTTCheckInAlertTransView : TTTBaseView
{
    TTTCheckInAlertContainerView *_frontView;
    TTTCheckInAlertContainerView *_backView;
}

+ (id)existDefaultView;
+ (id)createViewWithModel:(id)arg1 viewType:(long long)arg2;
+ (id)createViewWithModel:(id)arg1;
@property(retain, nonatomic) TTTCheckInAlertContainerView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) TTTCheckInAlertContainerView *frontView; // @synthesize frontView=_frontView;
- (void).cxx_destruct;
- (void)transToFrontView;
- (void)transToRulesViewWithModel:(id)arg1 viewType:(long long)arg2;
- (id)initWithModel:(id)arg1 viewType:(long long)arg2;

@end
