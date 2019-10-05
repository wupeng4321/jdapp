//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, TTTWaresMarkView, UIImageView;

@interface TTTWareImageView : UIView
{
    JDImageView *_wareImage;
    TTTWaresMarkView *_markView;
    UIImageView *_statusView;
}

@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) TTTWaresMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) JDImageView *wareImage; // @synthesize wareImage=_wareImage;
- (void).cxx_destruct;
- (struct CGRect)markViewFrame;
- (struct CGRect)statusViewFrame;
- (void)updateWareSellStatus:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
