//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@protocol JZHomePageFLoorDelegate;

@interface JZHomeBaseCollectionViewCell : UICollectionViewCell
{
    id <JZHomePageFLoorDelegate> _delegate;
}

@property(nonatomic) __weak id <JZHomePageFLoorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)refreshFloor:(id)arg1;
- (void)cellDidEndDisPlay;
- (void)cellWillDisPlay;
- (void)bindData:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
