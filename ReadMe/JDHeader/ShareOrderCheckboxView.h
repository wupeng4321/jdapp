//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel, UIView;

@interface ShareOrderCheckboxView : UIImageView <UIGestureRecognizerDelegate>
{
    _Bool _isSelelcted;
    UIView *_coverView;
    UIView *_timeView;
    UILabel *_timeLabel;
    UIImageView *_checkBoxImageView;
}

@property(retain, nonatomic) UIImageView *checkBoxImageView; // @synthesize checkBoxImageView=_checkBoxImageView;
@property(nonatomic) _Bool isSelelcted; // @synthesize isSelelcted=_isSelelcted;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *timeView; // @synthesize timeView=_timeView;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
