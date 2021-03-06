//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, TTTTabModel;

@interface TTTMultiTabPicHeadUnitView : UIView
{
    _Bool _isUsedSelectPic;
    JDImageView *_defaultPic;
    JDImageView *_selectedPic;
    TTTTabModel *_tabModel;
}

@property(nonatomic) __weak TTTTabModel *tabModel; // @synthesize tabModel=_tabModel;
@property(nonatomic) _Bool isUsedSelectPic; // @synthesize isUsedSelectPic=_isUsedSelectPic;
@property(retain, nonatomic) JDImageView *selectedPic; // @synthesize selectedPic=_selectedPic;
@property(retain, nonatomic) JDImageView *defaultPic; // @synthesize defaultPic=_defaultPic;
- (void).cxx_destruct;
- (void)shouldSelectPic:(_Bool)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

