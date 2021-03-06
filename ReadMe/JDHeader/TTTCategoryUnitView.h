//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class JDImageView, NSString, TTTAdsModel, UILabel, UITapGestureRecognizer;

@interface TTTCategoryUnitView : TTTBaseView
{
    CDUnknownBlockType _tapBlock;
    NSString *_eventId;
    JDImageView *_categoryImage;
    UILabel *_categoryName;
    UITapGestureRecognizer *_tap;
    TTTAdsModel *_model;
}

@property(retain, nonatomic) TTTAdsModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) JDImageView *categoryImage; // @synthesize categoryImage=_categoryImage;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)oneTap:(id)arg1;
- (void)setNameLabel;
- (void)setCategoryWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

