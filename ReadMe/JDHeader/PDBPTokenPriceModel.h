//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDBPTokenPriceModel : NSObject
{
    NSString *_value;
    NSString *_name;
    NSString *_tipsTitle;
    NSArray *_tipsContents;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *tipsContents; // @synthesize tipsContents=_tipsContents;
@property(copy, nonatomic) NSString *tipsTitle; // @synthesize tipsTitle=_tipsTitle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;

@end

