//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

@class JDImageView, NSArray, NSMutableArray, UILabel, UIView;

@interface SingleKillNewBrandKillCell : SecKillBaseCell
{
    UIView *_topLine;
    UILabel *_moreLabel;
    JDImageView *_arrowView;
    JDImageView *_topTagView;
    JDImageView *_bgImage;
    NSArray *_brandList;
    NSMutableArray *_brandViews;
}

@property(retain, nonatomic) NSMutableArray *brandViews; // @synthesize brandViews=_brandViews;
@property(retain, nonatomic) NSArray *brandList; // @synthesize brandList=_brandList;
@property(retain, nonatomic) JDImageView *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) JDImageView *topTagView; // @synthesize topTagView=_topTagView;
@property(retain, nonatomic) JDImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (void)initBrandsView;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
