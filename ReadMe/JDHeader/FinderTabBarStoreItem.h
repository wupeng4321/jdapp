//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderTabBarItem.h"

@class FinderTabBarStoreItemModel, UIImageView, UIView;

@interface FinderTabBarStoreItem : FinderTabBarItem
{
    FinderTabBarStoreItemModel *_model;
    UIView *_clickView;
    UIImageView *_storeImageView;
}

@property(retain, nonatomic) UIImageView *storeImageView; // @synthesize storeImageView=_storeImageView;
@property(retain, nonatomic) UIView *clickView; // @synthesize clickView=_clickView;
@property(retain, nonatomic) FinderTabBarStoreItemModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)showStoreGuideView;
- (void)storeRequest;
- (void)startStoreRequest;
- (void)clickBlockRecognizer:(id)arg1;
- (void)refreshContent;
- (void)assignData:(id)arg1;
- (id)getModel;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

