//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, PDVideoMasterModel;

@interface PDVideoControlModel : NSObject
{
    NSNumber *_autoPlay;
    NSNumber *_optimize;
    PDVideoMasterModel *_masterVideo;
}

@property(retain, nonatomic) PDVideoMasterModel *masterVideo; // @synthesize masterVideo=_masterVideo;
@property(retain, nonatomic) NSNumber *optimize; // @synthesize optimize=_optimize;
@property(retain, nonatomic) NSNumber *autoPlay; // @synthesize autoPlay=_autoPlay;
- (void).cxx_destruct;

@end
