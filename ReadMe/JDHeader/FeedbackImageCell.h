//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FeedbackImageModel, JDImageView;

@interface FeedbackImageCell : UICollectionViewCell
{
    FeedbackImageModel *_model;
    JDImageView *_imageView;
}

@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FeedbackImageModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

