//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDSwitchIconModel;

@interface JDSwitchIconDAO : NSObject
{
    CDUnknownBlockType _successBlock;
    JDSwitchIconModel *_model;
}

+ (void)removeObserver;
+ (void)requestIconData:(CDUnknownBlockType)arg1;
+ (void)serverConfigUpdate:(id)arg1;
+ (void)load;
+ (id)sharedInstance;
@property(retain, nonatomic) JDSwitchIconModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)callBack;
- (void)dealloc;

@end

