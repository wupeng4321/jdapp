//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JDNewWebViewConnectionDelegate;

@interface JDSHWebViewConnectionDelegate : NSObject
{
    _Bool _authenticated;
    id <JDNewWebViewConnectionDelegate> _delegate;
}

@property(nonatomic) __weak id <JDNewWebViewConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAuthenticated) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void).cxx_destruct;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

