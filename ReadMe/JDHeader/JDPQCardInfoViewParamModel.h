//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface JDPQCardInfoViewParamModel : NSObject
{
    NSString *_bankName;
    NSString *_elecCardNo;
    NSString *_deviceCardNoMask;
    NSString *_elecCardNoMask;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) NSString *elecCardNoMask; // @synthesize elecCardNoMask=_elecCardNoMask;
@property(copy, nonatomic) NSString *deviceCardNoMask; // @synthesize deviceCardNoMask=_deviceCardNoMask;
@property(copy, nonatomic) NSString *elecCardNo; // @synthesize elecCardNo=_elecCardNo;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
- (void).cxx_destruct;

@end

