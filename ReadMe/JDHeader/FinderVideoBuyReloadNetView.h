//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FinderVideoBuyReloadNetView : UIView
{
    UIButton *_closeButton;
    UIButton *_backButton;
    CDUnknownBlockType _clickCloseRoom;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIButton *_refreshBtn;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UIButton *refreshBtn; // @synthesize refreshBtn=_refreshBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType clickCloseRoom; // @synthesize clickCloseRoom=_clickCloseRoom;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)remove;
- (void)showInView:(id)arg1 Oriention:(unsigned long long)arg2 tapBlock:(CDUnknownBlockType)arg3;
- (void)touchRefreshBtn;
- (void)setUpWithTitle:(id)arg1 btnTitle:(id)arg2;
- (void)closeRoom;
- (id)init;

@end
