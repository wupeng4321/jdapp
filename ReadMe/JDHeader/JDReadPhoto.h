//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDReadPhoto : NSObject
{
    NSString *_picUrl;
    double _progress;
    double _aspectRatio;
}

@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;
- (id)init;

@end

