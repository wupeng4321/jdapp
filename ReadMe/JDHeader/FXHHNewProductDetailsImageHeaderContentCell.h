//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ZDMArticleProductParagraph, ZDMProductRcommentdationDetailsImageCellCollectionView, ZDMProductRecommendationDetailsContentView;

@interface FXHHNewProductDetailsImageHeaderContentCell : UICollectionViewCell
{
    ZDMProductRecommendationDetailsContentView *_detailsContentView;
    ZDMProductRcommentdationDetailsImageCellCollectionView *_imageCellCollectionView;
    ZDMArticleProductParagraph *_productDetails;
}

@property(retain, nonatomic) ZDMArticleProductParagraph *productDetails; // @synthesize productDetails=_productDetails;
@property(retain, nonatomic) ZDMProductRcommentdationDetailsImageCellCollectionView *imageCellCollectionView; // @synthesize imageCellCollectionView=_imageCellCollectionView;
@property(retain, nonatomic) ZDMProductRecommendationDetailsContentView *detailsContentView; // @synthesize detailsContentView=_detailsContentView;
- (void).cxx_destruct;
- (void)setupDetailsContentView;
- (void)setupImageCellCollectionView;
- (_Bool)hasWhiteEdge;
- (void)updateImageContentView;
- (void)updateImageViews;
- (void)render:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

