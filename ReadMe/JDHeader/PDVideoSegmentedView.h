//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;
@protocol PDVideoSegmentedViewDelegate;

@interface PDVideoSegmentedView : UIView
{
    NSMutableArray *_tagArray;
    id <PDVideoSegmentedViewDelegate> _delegate;
    NSMutableArray *_markItemLabelArray;
    NSArray *_itemArray;
    UIView *_bgRedView;
}

@property(retain, nonatomic) UIView *bgRedView; // @synthesize bgRedView=_bgRedView;
@property(retain, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
@property(retain, nonatomic) NSMutableArray *markItemLabelArray; // @synthesize markItemLabelArray=_markItemLabelArray;
@property(nonatomic) __weak id <PDVideoSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *tagArray; // @synthesize tagArray=_tagArray;
- (void).cxx_destruct;
- (void)changeSelectedSegmentedIndex:(long long)arg1;
- (void)tapLabel:(id)arg1;
- (void)renderUIWithVideoMarkArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

