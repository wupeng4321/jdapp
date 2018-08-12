//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDShopDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JDGridButton, NSString, UIButton, UIImageView, UITextField;
@protocol JDShopDelegate;

@interface JDShopNationBar : UIView <UISearchBarDelegate, JDShopDelegate, UITextFieldDelegate>
{
    UIView *m_bgView;
    UIImageView *_searchBg;
    UITextField *m_searchBar;
    UIButton *m_rightBut;
    long long spaceY;
    JDGridButton *_gridBut;
    _Bool showShareBtn;
    _Bool isFromHomePage;
    _Bool isPushSearch;
    _Bool showCategory;
    _Bool searchPage;
    _Bool _hiddenBut;
    id <JDShopDelegate> delegate;
    NSString *placeHolder;
    UIButton *rightShareBtn;
    UIImageView *_xImageView;
    NSString *_keyWord;
    NSString *_suggestWord;
}

@property(retain, nonatomic) NSString *suggestWord; // @synthesize suggestWord=_suggestWord;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) UIImageView *xImageView; // @synthesize xImageView=_xImageView;
@property(nonatomic) _Bool hiddenBut; // @synthesize hiddenBut=_hiddenBut;
@property(retain, nonatomic) UIButton *rightShareBtn; // @synthesize rightShareBtn;
@property(retain, nonatomic) JDGridButton *gridBut; // @synthesize gridBut=_gridBut;
@property(nonatomic) _Bool searchPage; // @synthesize searchPage;
@property(nonatomic) _Bool showCategory; // @synthesize showCategory;
@property(retain, nonatomic) UITextField *searchbar; // @synthesize searchbar=m_searchBar;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder;
@property(nonatomic) id <JDShopDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIButton *rightBut; // @synthesize rightBut=m_rightBut;
- (void)textFieldResignFirstResponder;
- (void)textFieldDidChanged:(id)arg1;
- (void)UIControlEventEditingDidBegin:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setRightButBgImage:(_Bool)arg1;
- (void)clickMoreButton:(id)arg1;
- (void)rightButClick;
- (void)xImageViewClick:(id)arg1;
- (void)showMoreButton;
- (void)setGridButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withBarWidth:(double)arg2 isFromHome:(_Bool)arg3 isPushSearchList:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withBarWidth:(double)arg2 isFromHome:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

