//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FSSLineLimit : NSObject
{
    long long _section;
    long long _limitRow;
}

+ (id)limitInSection:(long long)arg1 limitRow:(long long)arg2;
@property(nonatomic) long long limitRow; // @synthesize limitRow=_limitRow;
@property(nonatomic) long long section; // @synthesize section=_section;
- (id)initWithSection:(long long)arg1 limitRow:(long long)arg2;

@end

