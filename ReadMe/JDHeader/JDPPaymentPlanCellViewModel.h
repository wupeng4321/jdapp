//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPPaymentPlanCellViewModel : NSObject
{
    unsigned long long _cellStyle;
    NSString *_identifier;
    NSString *_title;
    NSString *_subTitle;
    NSString *_desTitle;
    NSString *_logoImageURLString;
}

@property(copy, nonatomic) NSString *logoImageURLString; // @synthesize logoImageURLString=_logoImageURLString;
@property(copy, nonatomic) NSString *desTitle; // @synthesize desTitle=_desTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (void).cxx_destruct;

@end

