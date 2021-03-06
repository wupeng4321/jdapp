//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class FSSearchBarViewModel, FSSearchFieldText, NSString, UIButton;
@protocol FSListSearchBarDelegate;

@interface FSSearchProductListSearchBar : UIView <UITextFieldDelegate>
{
    _Bool _hiddenOfAppAudioButton;
    _Bool _hiddenAudioButton;
    _Bool _isLight;
    int _rightButtonType;
    FSSearchBarViewModel *_viewModel;
    id <FSListSearchBarDelegate> _delegate;
    NSString *_mta_HcCid3;
    NSString *_mta_CurrentKeyName;
    FSSearchFieldText *_searchTextField;
    UIButton *_funcButton;
    UIButton *_changeListGridBtn;
    UIView *_searchBackGroundView;
    struct CGRect _searchTextFrame;
    struct CGRect _searchBackFrame;
}

@property(nonatomic) _Bool isLight; // @synthesize isLight=_isLight;
@property(nonatomic) struct CGRect searchBackFrame; // @synthesize searchBackFrame=_searchBackFrame;
@property(nonatomic) struct CGRect searchTextFrame; // @synthesize searchTextFrame=_searchTextFrame;
@property(retain, nonatomic) UIView *searchBackGroundView; // @synthesize searchBackGroundView=_searchBackGroundView;
@property(retain, nonatomic) UIButton *changeListGridBtn; // @synthesize changeListGridBtn=_changeListGridBtn;
@property(retain, nonatomic) UIButton *funcButton; // @synthesize funcButton=_funcButton;
@property(retain, nonatomic) FSSearchFieldText *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) _Bool hiddenAudioButton; // @synthesize hiddenAudioButton=_hiddenAudioButton;
@property(nonatomic) _Bool hiddenOfAppAudioButton; // @synthesize hiddenOfAppAudioButton=_hiddenOfAppAudioButton;
@property(copy, nonatomic) NSString *mta_CurrentKeyName; // @synthesize mta_CurrentKeyName=_mta_CurrentKeyName;
@property(copy, nonatomic) NSString *mta_HcCid3; // @synthesize mta_HcCid3=_mta_HcCid3;
@property(nonatomic) int rightButtonType; // @synthesize rightButtonType=_rightButtonType;
@property(nonatomic) __weak id <FSListSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FSSearchBarViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)reloadNavigationSearchBarIconWithType:(_Bool)arg1;
- (void)animationHiddenWithDuration:(double)arg1;
- (void)animationShowWithDuration:(double)arg1;
- (void)gotoSearchPage:(id)arg1;
- (void)showSearchField:(_Bool)arg1;
- (struct CGRect)getTopTagFrame;
- (void)changeListGrid;
- (void)funcButtonAction:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setChangeListButtonEnabled:(_Bool)arg1;
- (void)updateSPlaceholdWord;
@property(copy, nonatomic) NSString *searchTextContent;
- (void)updateAudioButtonState;
- (void)handleAudioButtonShowNotification:(id)arg1;
- (void)searchBarIconTypeChange:(id)arg1;
- (void)createSearchBar;
- (id)initWithViewModel:(id)arg1 frame:(struct CGRect)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

