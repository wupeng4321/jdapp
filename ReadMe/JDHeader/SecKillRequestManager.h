//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSString, SSSPreLoadManager, UIView;

@interface SecKillRequestManager : NSObject
{
    JDStoreNetwork *_netWork;
    NSString *_functionId;
    UIView *_showView;
    _Bool _isShow;
    SSSPreLoadManager *_preLoadManager;
}

@property(retain, nonatomic) SSSPreLoadManager *preLoadManager; // @synthesize preLoadManager=_preLoadManager;
- (void).cxx_destruct;
- (id)parseJson:(id)arg1;
- (void)startUpRequestWithPara:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)isSingleKillVCDisappaer:(_Bool)arg1;
- (void)isShowActivityView:(_Bool)arg1 inView:(id)arg2;
- (id)initWithFunctionId:(id)arg1;
- (void)dealloc;

@end
