//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDSHNavItemBaseView.h"

@class NSString, UIButton;

@interface JDSHNewNavMenuView : JDSHNavItemBaseView
{
    UIButton *_menuButton;
    CDUnknownBlockType _handleBlock;
    NSString *_imgURL;
}

@property(copy, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(copy, nonatomic) CDUnknownBlockType handleBlock; // @synthesize handleBlock=_handleBlock;
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
- (void).cxx_destruct;
- (void)setNavButton:(id)arg1;
- (void)p_button1:(id)arg1;
- (void)setUIWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonModel:(id)arg2 withHandleBlock:(CDUnknownBlockType)arg3;

@end

