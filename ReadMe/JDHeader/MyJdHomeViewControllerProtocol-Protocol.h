//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MyJdHomeModel, NSError, NSString;

@protocol MyJdHomeViewControllerProtocol <NSObject>
- (void)didLoadBaoBaoDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadDeliveryInfoListDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadMoreActivityDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadStoryDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadCommunicateDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadFinanceDataFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadChannelMenuFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadHistoryStateFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadUserAccountInfoFinished:(id)arg1 error:(NSError *)arg2;
- (void)didLoadExtUserInfoFinished:(id)arg1 error:(NSError *)arg2;
- (void)itemTappedRequest:(MyJdHomeModel *)arg1 type:(long long)arg2;
- (void)loadPlatformFloorData:(id)arg1;
- (void)loadRecommendData;
- (_Bool)isFloorInContainer:(NSString *)arg1;
@end
