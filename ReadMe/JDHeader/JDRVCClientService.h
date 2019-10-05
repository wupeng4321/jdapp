//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDRVCClientInfo, NSString;
@protocol JDRVCCheckAuthDelegate, JDRVCIsAllowAccessDelegate, JDRVCRefreshAuthDelegate, JDRVCServiceDelegate;

@interface JDRVCClientService : NSObject
{
    _Bool _requestBlocked;
    id <JDRVCIsAllowAccessDelegate> _IAAdelegate;
    id <JDRVCCheckAuthDelegate> _CAdelegate;
    id <JDRVCRefreshAuthDelegate> _RAdelegate;
    id <JDRVCServiceDelegate> _RVCdelegate;
    JDRVCClientInfo *_clientInfo;
    NSString *_cookieLight;
    NSString *_bsid;
}

@property _Bool requestBlocked; // @synthesize requestBlocked=_requestBlocked;
@property(retain, nonatomic) NSString *bsid; // @synthesize bsid=_bsid;
@property(retain, nonatomic) NSString *cookieLight; // @synthesize cookieLight=_cookieLight;
@property(retain, nonatomic) JDRVCClientInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(nonatomic) __weak id <JDRVCServiceDelegate> RVCdelegate; // @synthesize RVCdelegate=_RVCdelegate;
@property(nonatomic) __weak id <JDRVCRefreshAuthDelegate> RAdelegate; // @synthesize RAdelegate=_RAdelegate;
@property(nonatomic) __weak id <JDRVCCheckAuthDelegate> CAdelegate; // @synthesize CAdelegate=_CAdelegate;
@property(nonatomic) __weak id <JDRVCIsAllowAccessDelegate> IAAdelegate; // @synthesize IAAdelegate=_IAAdelegate;
- (void).cxx_destruct;
- (_Bool)checkRequestBlocked;
- (void)deliverError:(id)arg1 interface:(long long)arg2;
- (void)refreshAuth;
- (void)checkAuthWithAnswer:(id)arg1;
- (void)initWithClientInfo:(id)arg1 IAAResponse:(id)arg2 cookie:(id)arg3;

@end
