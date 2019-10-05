//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol JDSegmentedViewDelegate;

@interface JDSegmentedView : UIView
{
    _Bool _isExitShadow;
    _Bool _isNeedTapAgain;
    id <JDSegmentedViewDelegate> _delegate;
    NSMutableArray *_items;
    long long _selectIndex;
}

@property(nonatomic) _Bool isNeedTapAgain; // @synthesize isNeedTapAgain=_isNeedTapAgain;
@property(nonatomic) _Bool isExitShadow; // @synthesize isExitShadow=_isExitShadow;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <JDSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectAction:(id)arg1;
- (void)addButton:(id)arg1;
- (void)removeAllButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initUI;

@end
