//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface FinderDateFormatter : NSObject
{
    NSDateFormatter *_finderDateFormatter;
}

+ (id)shareDateFormatter;
@property(retain, nonatomic) NSDateFormatter *finderDateFormatter; // @synthesize finderDateFormatter=_finderDateFormatter;
- (void).cxx_destruct;
- (id)dateFromString:(id)arg1 formatter:(id)arg2;
- (id)stringFromDateFormatter:(id)arg1 date:(double)arg2;

@end

