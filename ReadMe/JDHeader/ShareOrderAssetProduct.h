//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShareOrderProduct.h"

@class NSNumber;

@interface ShareOrderAssetProduct : ShareOrderProduct
{
    int _uploadStatus;
    NSNumber *_isInLocalAblum;
    long long _secondsLength;
}

@property(nonatomic) long long secondsLength; // @synthesize secondsLength=_secondsLength;
@property(retain, nonatomic) NSNumber *isInLocalAblum; // @synthesize isInLocalAblum=_isInLocalAblum;
@property(nonatomic) int uploadStatus; // @synthesize uploadStatus=_uploadStatus;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

