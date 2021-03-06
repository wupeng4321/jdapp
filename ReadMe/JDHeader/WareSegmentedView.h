//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, WareInfoMTAModel;
@protocol WareSegmentedViewDelegate;

@interface WareSegmentedView : UIView
{
    id <WareSegmentedViewDelegate> _delegate;
    NSArray *_items;
    long long _selectIndex;
    WareInfoMTAModel *_wareInfoMTAModel;
}

@property(retain, nonatomic) WareInfoMTAModel *wareInfoMTAModel; // @synthesize wareInfoMTAModel=_wareInfoMTAModel;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WareSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (void)reloadItems;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

