//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface TwoDDecoderResult : NSObject <NSCopying>
{
    NSString *text;
    NSArray *points;
    NSString *format;
    NSString *_text;
    NSArray *_points;
    NSString *_format;
}

@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end

