//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDImageView, NSArray;
@protocol JDNewDynamicRegularColumnViewDelegate;

@interface JDNewDynamicRegularColumnView : JDView
{
    JDImageView *firstColumnView;
    JDImageView *secondColumnView;
    NSArray *_dataSourceLists;
    id <JDNewDynamicRegularColumnViewDelegate> _columnDelegate;
}

@property(nonatomic) id <JDNewDynamicRegularColumnViewDelegate> columnDelegate; // @synthesize columnDelegate=_columnDelegate;
@property(retain, nonatomic) NSArray *dataSourceLists; // @synthesize dataSourceLists=_dataSourceLists;
- (void).cxx_destruct;
- (void)columnclickAction:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

