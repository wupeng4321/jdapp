//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UICollectionView, UILabel;

@interface SHVPRecommentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _JoinLiveListBlock;
    UICollectionView *_collection;
    UIView *_contentBackView;
    UILabel *_titleLab;
    UIButton *_cancelBtn;
    UIButton *_joinLiveListBtn;
    NSArray *_data;
}

@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *joinLiveListBtn; // @synthesize joinLiveListBtn=_joinLiveListBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *contentBackView; // @synthesize contentBackView=_contentBackView;
@property(retain, nonatomic) UICollectionView *collection; // @synthesize collection=_collection;
@property(copy, nonatomic) CDUnknownBlockType JoinLiveListBlock; // @synthesize JoinLiveListBlock=_JoinLiveListBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)joinLiveListAction;
- (void)cancelAction;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

