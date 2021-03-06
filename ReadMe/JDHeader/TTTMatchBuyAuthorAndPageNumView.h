//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTFloorModel, UIImageView, UILabel;

@interface TTTMatchBuyAuthorAndPageNumView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_authorImageView;
    UILabel *_authorNameLabel;
    UIImageView *_pageViewImageView;
    UILabel *_pageViewLabel;
    TTTFloorModel *_floorModel;
}

@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UILabel *pageViewLabel; // @synthesize pageViewLabel=_pageViewLabel;
@property(retain, nonatomic) UIImageView *pageViewImageView; // @synthesize pageViewImageView=_pageViewImageView;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
- (void).cxx_destruct;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

