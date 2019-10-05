//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "PDViewProtocol-Protocol.h"

@class NSIndexPath, NSString, PDYBConfigModel, UIImageView, UILabel, UIView;

@interface PDYanbaoCollectionViewCell : UICollectionViewCell <PDViewProtocol>
{
    _Bool _shouldSelected;
    _Bool _isJx;
    PDYBConfigModel *_unitItem;
    UIView *_borderView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UILabel *_seperateLine;
    UILabel *_discountLabel;
    UIImageView *_discountBackground;
    CDUnknownBlockType _actionHandler;
    NSIndexPath *_currentIndexPath;
}

@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) UIImageView *discountBackground; // @synthesize discountBackground=_discountBackground;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *seperateLine; // @synthesize seperateLine=_seperateLine;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) _Bool isJx; // @synthesize isJx=_isJx;
@property(retain, nonatomic) PDYBConfigModel *unitItem; // @synthesize unitItem=_unitItem;
@property(nonatomic) _Bool shouldSelected; // @synthesize shouldSelected=_shouldSelected;
- (void).cxx_destruct;
- (void)updateUnitViewWithItem:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
