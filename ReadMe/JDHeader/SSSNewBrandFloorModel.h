//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SSSJumpModel;

@interface SSSNewBrandFloorModel : NSObject
{
    NSNumber *_floorId;
    NSString *_type;
    NSString *_accountImg;
    SSSJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) SSSJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *accountImg; // @synthesize accountImg=_accountImg;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *floorId; // @synthesize floorId=_floorId;
- (void).cxx_destruct;

@end

