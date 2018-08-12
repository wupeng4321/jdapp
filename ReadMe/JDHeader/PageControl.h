//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, UIColor;
@protocol PageControlDelegate;

@interface PageControl : UIView
{
    long long _currentPage;
    long long _numberOfPages;
    UIColor *dotColorCurrentPage;
    UIColor *dotColorOtherPage;
    NSObject<PageControlDelegate> *delegate;
}

@property(nonatomic) NSObject<PageControlDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) UIColor *dotColorOtherPage; // @synthesize dotColorOtherPage;
@property(retain, nonatomic) UIColor *dotColorCurrentPage; // @synthesize dotColorCurrentPage;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrameColor:(struct CGRect)arg1 dotCurrentColor:(id)arg2 dotOtherColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long numberOfPages;
@property(nonatomic) long long currentPage;

@end

