//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CommuneAdView, CommuneCategoryActivityListModel, NSDictionary;

@protocol CommuneUserAdViewDelegate <NSObject>
- (void)communeUserAdView:(CommuneAdView *)arg1 didSelectActivity:(CommuneCategoryActivityListModel *)arg2;

@optional
- (void)hideAdView:(_Bool)arg1;
- (void)requestAdDataWithParam:(NSDictionary *)arg1 responseBlock:(void (^)(id))arg2;
@end

