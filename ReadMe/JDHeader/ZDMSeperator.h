//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMPost.h"

@class NSString;

@interface ZDMSeperator : ZDMPost
{
    NSString *_date;
    long long _num;
    long long _isToday;
    long long _hasColor;
}

+ (id)seperatorWithDict:(id)arg1;
+ (id)seperator;
@property(nonatomic) long long hasColor; // @synthesize hasColor=_hasColor;
@property(nonatomic) long long isToday; // @synthesize isToday=_isToday;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

