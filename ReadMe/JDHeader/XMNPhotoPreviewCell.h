//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView, UIScrollView, UIView;

@interface XMNPhotoPreviewCell : UICollectionViewCell <UIScrollViewDelegate>
{
    CDUnknownBlockType _singleTapBlock;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIImageView *_imageView;
}

+ (struct CGSize)adjustOriginSize:(struct CGSize)arg1 toTargetSize:(struct CGSize)arg2;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType singleTapBlock; // @synthesize singleTapBlock=_singleTapBlock;
- (void).cxx_destruct;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap;
- (void)_resizeSubviews;
- (void)_setup;
- (void)configCellWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

