//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UniformPDRecommendPageView : UIView
{
    NSMutableArray *recommendItemDataArray;
    NSMutableArray *recommendItemArray;
    int recommendPageType;
}

- (void).cxx_destruct;
- (void)setPageInfo;
- (void)layoutSubviews;
- (void)setPageArray:(id)arg1;
- (void)initPageViews;
- (id)initWithFrame:(struct CGRect)arg1 andType:(int)arg2;

@end

