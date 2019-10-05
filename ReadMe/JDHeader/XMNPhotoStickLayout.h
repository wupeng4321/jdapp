//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface XMNPhotoStickLayout : UICollectionViewFlowLayout
{
    double _originX;
    double _originY;
    NSMutableArray *_itemAttributesArrayM;
    NSMutableArray *_supplementaryViewAttributesArrayM;
}

@property(retain, nonatomic) NSMutableArray *supplementaryViewAttributesArrayM; // @synthesize supplementaryViewAttributesArrayM=_supplementaryViewAttributesArrayM;
@property(retain, nonatomic) NSMutableArray *itemAttributesArrayM; // @synthesize itemAttributesArrayM=_itemAttributesArrayM;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double originX; // @synthesize originX=_originX;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)updateAllAttributes;
- (void)prepareLayout;
- (id)init;

@end
