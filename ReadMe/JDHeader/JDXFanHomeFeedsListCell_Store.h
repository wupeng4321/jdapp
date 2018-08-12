//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDXFanHomeFeedsListCell_Base.h"

@class UIButton, UIImageView, UILabel;

@interface JDXFanHomeFeedsListCell_Store : JDXFanHomeFeedsListCell_Base
{
    UIImageView *_imgVBackground;
    UIImageView *_imgVStoreBackgroundLeft;
    UIImageView *_imgVStoreBackgroundRight;
    UIButton *_btnVProduct;
    UIImageView *_imgVStore;
    UILabel *_labTitle;
    UILabel *_labSubTitle;
}

+ (struct CGSize)fixedSize;
@property(retain, nonatomic) UILabel *labSubTitle; // @synthesize labSubTitle=_labSubTitle;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIImageView *imgVStore; // @synthesize imgVStore=_imgVStore;
@property(retain, nonatomic) UIButton *btnVProduct; // @synthesize btnVProduct=_btnVProduct;
@property(retain, nonatomic) UIImageView *imgVStoreBackgroundRight; // @synthesize imgVStoreBackgroundRight=_imgVStoreBackgroundRight;
@property(retain, nonatomic) UIImageView *imgVStoreBackgroundLeft; // @synthesize imgVStoreBackgroundLeft=_imgVStoreBackgroundLeft;
@property(retain, nonatomic) UIImageView *imgVBackground; // @synthesize imgVBackground=_imgVBackground;
- (void).cxx_destruct;
- (void)skuClicked:(id)arg1;
- (void)setDataModel:(id)arg1;
- (void)setDataService:(id)arg1;
- (void)addAndLayoutSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

