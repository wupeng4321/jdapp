//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WanderShopCircleFunctionFloorModel : JDModel <NSCoding>
{
    NSString *_floorName;
    NSString *_floorIcon;
    NSString *_floorData;
    NSString *_floorType;
}

@property(copy, nonatomic) NSString *floorType; // @synthesize floorType=_floorType;
@property(copy, nonatomic) NSString *floorData; // @synthesize floorData=_floorData;
@property(copy, nonatomic) NSString *floorIcon; // @synthesize floorIcon=_floorIcon;
@property(copy, nonatomic) NSString *floorName; // @synthesize floorName=_floorName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end

