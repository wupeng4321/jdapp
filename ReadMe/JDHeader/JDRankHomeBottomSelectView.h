//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDRankBottomSelectView.h"

@class NSArray, UIImageView;
@protocol JDRankBottomSelectViewDelegate;

@interface JDRankHomeBottomSelectView : JDRankBottomSelectView
{
    UIImageView *background;
    id <JDRankBottomSelectViewDelegate> _bottomDelegate;
    NSArray *_btnItems;
}

@property(retain, nonatomic) NSArray *btnItems; // @synthesize btnItems=_btnItems;
@property(nonatomic) id <JDRankBottomSelectViewDelegate> bottomDelegate; // @synthesize bottomDelegate=_bottomDelegate;
- (id)createImageWithColor:(id)arg1;
- (void)drawItems:(id)arg1;
- (void)setBottomButtons;
- (void)buttonAction:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

