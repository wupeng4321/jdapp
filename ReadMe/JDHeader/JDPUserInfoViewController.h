//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPFullBaseViewController.h"

@class UIImageView, UILabel;

@interface JDPUserInfoViewController : JDPFullBaseViewController
{
    _Bool _canCloseDidEnterBackground;
    UIImageView *_userIconImageView;
    UILabel *_userNameLabel;
}

@property(nonatomic) _Bool canCloseDidEnterBackground; // @synthesize canCloseDidEnterBackground=_canCloseDidEnterBackground;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userIconImageView; // @synthesize userIconImageView=_userIconImageView;
- (void).cxx_destruct;
- (void)userInfoCloseDidEnterBackground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)navBarLeftButtonAction:(id)arg1;
- (void)getUserInfo;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end
