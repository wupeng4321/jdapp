//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface VBRecommendVideoInfo : NSObject <NSCoding, NSCopying>
{
    NSString *_vd;
    NSString *_vs;
    NSString *_vh;
    NSString *_vw;
}

@property(copy, nonatomic) NSString *vw; // @synthesize vw=_vw;
@property(copy, nonatomic) NSString *vh; // @synthesize vh=_vh;
@property(copy, nonatomic) NSString *vs; // @synthesize vs=_vs;
@property(copy, nonatomic) NSString *vd; // @synthesize vd=_vd;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

