//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface AMOptionFlowLayout : UICollectionViewFlowLayout
{
    long long _mItemCount;
    NSMutableArray *_mAttributeArray;
}

@property(retain, nonatomic) NSMutableArray *mAttributeArray; // @synthesize mAttributeArray=_mAttributeArray;
@property(nonatomic) long long mItemCount; // @synthesize mItemCount=_mItemCount;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)compluteLayoutsAttributes;
- (void)prepareLayout;

@end

