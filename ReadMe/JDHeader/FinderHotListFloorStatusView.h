//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderHotSmallVideoCellLivingRedView, UILabel;

@interface FinderHotListFloorStatusView : UIView
{
    FinderHotSmallVideoCellLivingRedView *_livingView;
    UILabel *_viewNumLabel;
}

@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) FinderHotSmallVideoCellLivingRedView *livingView; // @synthesize livingView=_livingView;
- (void).cxx_destruct;
- (void)configStatusView;
- (void)configLabel:(id)arg1;
- (void)stopLivingAnimation;
- (void)startLivingAnimation;
- (void)updateString:(id)arg1;
- (id)init;

@end
