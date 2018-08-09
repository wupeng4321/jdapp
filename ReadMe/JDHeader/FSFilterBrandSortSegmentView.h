//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSFilterBrandSortSegmentModel, UIButton;

@interface FSFilterBrandSortSegmentView : UIView
{
    FSFilterBrandSortSegmentModel *_segmentModel;
    CDUnknownBlockType _segmentClick;
    UIButton *_selectedButton;
    UIView *_selectedLine;
}

@property(retain, nonatomic) UIView *selectedLine; // @synthesize selectedLine=_selectedLine;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(copy, nonatomic) CDUnknownBlockType segmentClick; // @synthesize segmentClick=_segmentClick;
@property(retain, nonatomic) FSFilterBrandSortSegmentModel *segmentModel; // @synthesize segmentModel=_segmentModel;
- (void).cxx_destruct;
- (void)selectAction:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateSelectLineRect:(id)arg1 index:(long long)arg2;
- (void)reloadSegmentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

