//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDSHFloatingMenu, SHVPSmallVideoMoreBtn, UIControl;
@protocol SHVPNavigationBarViewDelegate;

@interface SHVPPortraitNavigationBarView : UIView
{
    CDUnknownBlockType _clickReportItemBlock;
    SHVPSmallVideoMoreBtn *_moreBtn;
    id <SHVPNavigationBarViewDelegate> _delegate;
    UIControl *_leftNavigationBarButton;
    JDSHFloatingMenu *_menu;
    long long _position;
}

@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) JDSHFloatingMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) UIControl *leftNavigationBarButton; // @synthesize leftNavigationBarButton=_leftNavigationBarButton;
@property(nonatomic) __weak id <SHVPNavigationBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SHVPSmallVideoMoreBtn *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(copy, nonatomic) CDUnknownBlockType clickReportItemBlock; // @synthesize clickReportItemBlock=_clickReportItemBlock;
- (void).cxx_destruct;
- (void)popBack;
- (id)initWithFrame:(struct CGRect)arg1 position:(long long)arg2;

@end
