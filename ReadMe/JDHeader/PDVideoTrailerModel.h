//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface PDVideoTrailerModel : NSObject
{
    NSNumber *_trailerDuration;
    NSString *_trailerImgUrl;
    NSString *_trailerPlayUrl;
}

@property(copy, nonatomic) NSString *trailerPlayUrl; // @synthesize trailerPlayUrl=_trailerPlayUrl;
@property(copy, nonatomic) NSString *trailerImgUrl; // @synthesize trailerImgUrl=_trailerImgUrl;
@property(copy, nonatomic) NSNumber *trailerDuration; // @synthesize trailerDuration=_trailerDuration;
- (void).cxx_destruct;

@end

