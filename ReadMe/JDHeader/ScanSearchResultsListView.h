//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITableView;

@interface ScanSearchResultsListView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _bMovingUnconditional;
    UITableView *_tableView;
    NSString *_strImageUrl;
    UIView *_titleView;
    UILabel *_labTitle;
    UIButton *_btnClose;
    unsigned long long _listViewDistance;
    double _fTopDistance;
    double _fBottomDistance;
    CDUnknownBlockType _distanceActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType distanceActionBlock; // @synthesize distanceActionBlock=_distanceActionBlock;
@property(nonatomic) double fBottomDistance; // @synthesize fBottomDistance=_fBottomDistance;
@property(nonatomic) double fTopDistance; // @synthesize fTopDistance=_fTopDistance;
@property(nonatomic) _Bool bMovingUnconditional; // @synthesize bMovingUnconditional=_bMovingUnconditional;
@property(nonatomic) unsigned long long listViewDistance; // @synthesize listViewDistance=_listViewDistance;
@property(retain, nonatomic) UIButton *btnClose; // @synthesize btnClose=_btnClose;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSString *strImageUrl; // @synthesize strImageUrl=_strImageUrl;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panGestureAction:(id)arg1;
- (void)onClose:(id)arg1;
- (void)setDistanceAction:(CDUnknownBlockType)arg1;
- (void)changeDistance:(unsigned long long)arg1;
- (void)defaultLayoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 topDistance:(double)arg2 bottomDistance:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

