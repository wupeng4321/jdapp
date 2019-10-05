//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDBaseToastViewDelegate-Protocol.h"

@class NSString;

@interface TTTBaseToastView : NSObject <JDBaseToastViewDelegate>
{
    _Bool _animation;
    CDUnknownBlockType _cancleCallback;
    CDUnknownBlockType _doneCallback;
}

+ (id)toastViewOptionWithTitle:(id)arg1 subTitle:(id)arg2 cancleButtonTitle:(id)arg3 doneButtonTitle:(id)arg4 cancleCallBack:(CDUnknownBlockType)arg5 doneCallBack:(CDUnknownBlockType)arg6 animation:(_Bool)arg7;
@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(copy, nonatomic) CDUnknownBlockType doneCallback; // @synthesize doneCallback=_doneCallback;
@property(copy, nonatomic) CDUnknownBlockType cancleCallback; // @synthesize cancleCallback=_cancleCallback;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
