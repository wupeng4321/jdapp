//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, SHVPFinderListAdsItem, UILabel;

@interface SHVPFinderListTwoPicItemView : UIView
{
    JDImageView *_mainImg;
    UILabel *_sloganLabel;
    UILabel *_titleLabel;
    SHVPFinderListAdsItem *_item;
    UIView *_bgView;
    NSString *_indexStr;
}

@property(copy, nonatomic) NSString *indexStr; // @synthesize indexStr=_indexStr;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) SHVPFinderListAdsItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
- (void).cxx_destruct;
- (void)liveListAddsItemTapped;
- (void)updateContent:(id)arg1 isATest:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 WithIndex:(id)arg2;

@end

