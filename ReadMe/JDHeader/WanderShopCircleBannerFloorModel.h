//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WanderShopCircleBannerFloorModel : JDModel <NSCoding>
{
    NSString *_imageUrl;
    NSMutableArray *_bannerList;
}

@property(retain, nonatomic) NSMutableArray *bannerList; // @synthesize bannerList=_bannerList;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end

