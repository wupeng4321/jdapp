//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface COCheckoutConsignmentGiftInfosRM : NSObject
{
    NSNumber *_totalNum;
    NSNumber *_availableNum;
    NSNumber *_usedNum;
    NSString *_consignmentGiftSign;
}

@property(copy, nonatomic) NSString *consignmentGiftSign; // @synthesize consignmentGiftSign=_consignmentGiftSign;
@property(retain, nonatomic) NSNumber *usedNum; // @synthesize usedNum=_usedNum;
@property(retain, nonatomic) NSNumber *availableNum; // @synthesize availableNum=_availableNum;
@property(retain, nonatomic) NSNumber *totalNum; // @synthesize totalNum=_totalNum;
- (void).cxx_destruct;

@end

