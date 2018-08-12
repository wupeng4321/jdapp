//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RCTComponent-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface UIView (React) <RCTComponent>
- (void)reactBlur;
- (void)reactFocusIfNeeded;
- (void)reactFocus;
- (void)setReactIsFocusNeeded:(_Bool)arg1;
- (_Bool)reactIsFocusNeeded;
- (void)reactAddControllerToClosestParent:(id)arg1;
- (id)reactViewController;
- (void)reactSetInheritedBackgroundColor:(id)arg1;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)didUpdateReactSubviews;
- (void)clearSortedSubviews;
@property(readonly, copy, nonatomic) NSArray *sortedReactSubviews;
@property(nonatomic) long long reactZIndex;
@property(nonatomic) long long reactLayoutDirection;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (id)reactSuperview;
- (id)reactSubviews;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (_Bool)isReactRootView;
@property(copy, nonatomic) NSNumber *reactTag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

