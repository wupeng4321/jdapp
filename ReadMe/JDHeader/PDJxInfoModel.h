//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, PDJxInfoFloorModel;

@interface PDJxInfoModel : NSObject
{
    NSString *_jxTitle;
    NSString *_jxRecEr;
    NSString *_jxImage;
    NSString *_jxRecErDesc;
    NSString *_jxJumpUrl;
    NSString *_jxOpenPlusText;
    NSNumber *_jxJumpType;
    PDJxInfoFloorModel *_jxFloor;
}

@property(retain, nonatomic) PDJxInfoFloorModel *jxFloor; // @synthesize jxFloor=_jxFloor;
@property(retain, nonatomic) NSNumber *jxJumpType; // @synthesize jxJumpType=_jxJumpType;
@property(copy, nonatomic) NSString *jxOpenPlusText; // @synthesize jxOpenPlusText=_jxOpenPlusText;
@property(copy, nonatomic) NSString *jxJumpUrl; // @synthesize jxJumpUrl=_jxJumpUrl;
@property(copy, nonatomic) NSString *jxRecErDesc; // @synthesize jxRecErDesc=_jxRecErDesc;
@property(copy, nonatomic) NSString *jxImage; // @synthesize jxImage=_jxImage;
@property(copy, nonatomic) NSString *jxRecEr; // @synthesize jxRecEr=_jxRecEr;
@property(copy, nonatomic) NSString *jxTitle; // @synthesize jxTitle=_jxTitle;
- (void).cxx_destruct;

@end

