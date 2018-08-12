//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JZHomeFloorHeadModel, NSString;

@interface JZHomeFloorBaseModel : NSObject
{
    NSString *_floorType;
    NSString *_floorStyle;
    double _imgWidth;
    double _imgHeight;
    NSString *_floorBgColor;
    NSString *_floorBgImg;
    JZHomeFloorHeadModel *_floorHead;
}

+ (id)modelWithDictionary:(id)arg1;
@property(retain, nonatomic) JZHomeFloorHeadModel *floorHead; // @synthesize floorHead=_floorHead;
@property(copy, nonatomic) NSString *floorBgImg; // @synthesize floorBgImg=_floorBgImg;
@property(copy, nonatomic) NSString *floorBgColor; // @synthesize floorBgColor=_floorBgColor;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(copy, nonatomic) NSString *floorStyle; // @synthesize floorStyle=_floorStyle;
@property(copy, nonatomic) NSString *floorType; // @synthesize floorType=_floorType;
- (void).cxx_destruct;
- (double)floorHeight;

@end

