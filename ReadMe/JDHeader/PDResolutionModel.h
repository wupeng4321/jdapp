//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PDResolutionModel : NSObject
{
    NSString *_defaultSmall;
    NSString *_defaultBig;
    NSMutableArray *_kvs;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSMutableArray *kvs; // @synthesize kvs=_kvs;
@property(copy, nonatomic) NSString *defaultBig; // @synthesize defaultBig=_defaultBig;
@property(copy, nonatomic) NSString *defaultSmall; // @synthesize defaultSmall=_defaultSmall;
- (void).cxx_destruct;

@end
