//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIImageView, UILabel, UIView;

@interface JDXFanHomeWomanCarouselCollectionCell : UICollectionViewCell
{
    NSIndexPath *_indexPath;
    UIView *_contentContainerV;
    UIImageView *_imgV;
    UILabel *_topTitleLB;
    UIImageView *_topTitleLBBGView;
    UILabel *_titleLB;
    UILabel *_subTitleLB;
    struct CGSize _designSize;
}

@property(retain, nonatomic) UILabel *subTitleLB; // @synthesize subTitleLB=_subTitleLB;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) UIImageView *topTitleLBBGView; // @synthesize topTitleLBBGView=_topTitleLBBGView;
@property(retain, nonatomic) UILabel *topTitleLB; // @synthesize topTitleLB=_topTitleLB;
@property(retain, nonatomic) UIImageView *imgV; // @synthesize imgV=_imgV;
@property(retain, nonatomic) UIView *contentContainerV; // @synthesize contentContainerV=_contentContainerV;
@property(nonatomic) struct CGSize designSize; // @synthesize designSize=_designSize;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
