//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDPayModuleProtocol-Protocol.h"

@class NSBundle, NSMutableDictionary, NSString;

@interface JDPayModule : NSObject <JDPayModuleProtocol>
{
    NSBundle *_mainBundle;
    NSMutableDictionary *_imagePathCaches;
    NSString *_name;
    NSString *_channel;
}

+ (id)moduleWithName:(id)arg1;
+ (id)mainModule;
+ (void)handleURL:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)canHandleURL:(id)arg1 options:(id)arg2;
+ (id)_canHandleURL:(id)arg1 options:(id)arg2;
+ (_Bool)registerModule:(id)arg1;
+ (void)load;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)nibWithNibName:(id)arg1;
- (id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3;
- (id)imageNamed:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)pathsForResources:(id)arg1 ofTypes:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
@property(readonly, copy) NSString *GITCommitID;
@property(readonly, copy) NSString *buildVersion;
@property(readonly, copy) NSString *version;
@property(readonly, copy) NSString *identifier;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)init;
- (_Bool)conformsToJDPayModuleProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
