//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UICollectionView;

@interface VBTabIndexView : UIView
{
    CDUnknownBlockType _selectedBlock;
    long long _selectedIndex;
    NSArray *_values;
    NSMutableArray *_reddots;
    UICollectionView *_collectionView;
    UIView *_cursorView;
    UIView *_lineView;
    NSArray *_titles;
    NSArray *_images;
    double _titleWidth;
}

@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *cursorView; // @synthesize cursorView=_cursorView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSMutableArray *reddots; // @synthesize reddots=_reddots;
@property(retain, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)setWidth:(double)arg1;
@property(readonly, nonatomic) _Bool isOverFlow;
- (void)titleTotalWidth;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)updateCusorView;
- (void)updateTitles:(id)arg1 images:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

