//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDXFanHomeViewHeaderItem_BaseModel.h"

@class JDXFanJumpModel, NSArray, NSString;

@interface JDXFanHomeViewHeaderItem_ICarouselModel : JDXFanHomeViewHeaderItem_BaseModel
{
    NSString *_bgImg;
    NSString *_pageNoColor;
    NSArray *_cardList;
    JDXFanJumpModel *_moreJump;
    long long _selectedIndex;
}

+ (id)objectClassInArray;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) JDXFanJumpModel *moreJump; // @synthesize moreJump=_moreJump;
@property(retain, nonatomic) NSArray *cardList; // @synthesize cardList=_cardList;
@property(copy, nonatomic) NSString *pageNoColor; // @synthesize pageNoColor=_pageNoColor;
@property(copy, nonatomic) NSString *bgImg; // @synthesize bgImg=_bgImg;
- (void).cxx_destruct;

@end

