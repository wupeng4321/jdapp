//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SHVPListTotalModel : NSObject
{
    NSString *_code;
    NSString *_offset;
    NSMutableArray *_list;
    NSMutableArray *_more;
    long long _abTestValue;
}

+ (id)objectClassInArray;
@property(nonatomic) long long abTestValue; // @synthesize abTestValue=_abTestValue;
@property(retain, nonatomic) NSMutableArray *more; // @synthesize more=_more;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(copy, nonatomic) NSString *offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

