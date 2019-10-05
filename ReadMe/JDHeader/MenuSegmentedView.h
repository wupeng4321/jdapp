//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol MenuSegmentedViewDelegate;

@interface MenuSegmentedView : UIView
{
    UIView *_contentView;
    NSArray *_titles;
    UIView *_indicator;
    long long _index;
    id <MenuSegmentedViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MenuSegmentedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)contentViewSize;
- (void)tapTitle:(id)arg1;
- (id)labelWithText:(id)arg1 tag:(long long)arg2;
- (void)alignLabels;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2;

@end
