//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDUGCMainPagePullMenuView, JDUGCMainPageTabView, UIImageView;

@interface JDUGCMainPageTopView : UIView
{
    UIImageView *_maskView;
    JDUGCMainPagePullMenuView *_pullMenuView;
    JDUGCMainPageTabView *_tabIndexView;
}

@property(retain, nonatomic) JDUGCMainPageTabView *tabIndexView; // @synthesize tabIndexView=_tabIndexView;
@property(retain, nonatomic) JDUGCMainPagePullMenuView *pullMenuView; // @synthesize pullMenuView=_pullMenuView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tabIndexUpdate;
- (id)initWithFrame:(struct CGRect)arg1;

@end

