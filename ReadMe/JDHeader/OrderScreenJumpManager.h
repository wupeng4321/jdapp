//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OrderScreenJumpManager : NSObject
{
    CDUnknownBlockType _manualHandlingBlock;
    CDUnknownBlockType _autoHandlingBlock;
}

+ (id)sharedOrderScreenJumpManager;
@property(copy, nonatomic) CDUnknownBlockType autoHandlingBlock; // @synthesize autoHandlingBlock=_autoHandlingBlock;
@property(copy, nonatomic) CDUnknownBlockType manualHandlingBlock; // @synthesize manualHandlingBlock=_manualHandlingBlock;
- (void).cxx_destruct;
- (id)currentNavigationController;
- (void)safePush:(id)arg1;
- (void)_jump_nativePageRecharge;
- (void)_jump_nativePageFluxrecharge;
- (void)_jump_nativePageQQGame_2;
- (void)_jump_nativePageQQGame;
- (void)_jump_nativePageCinema;
- (void)_jump_nativePageSourcePage:(id)arg1;
- (void)jump_nativePage:(id)arg1;
- (void)jump_openappPage:(id)arg1;
- (void)jump_webPage:(id)arg1;
- (void)handleJump:(id)arg1;
- (void)handleJump:(id)arg1 finish:(CDUnknownBlockType)arg2 needManualHandling:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

