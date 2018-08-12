//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, TTTSearchModel, UIButton;

@interface TTTSearchBarView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTSearchModel *_searchBarModel;
    UIButton *_departmentsButton;
    UIButton *_searchButton;
    UIButton *_rightIconBtn;
}

@property(retain, nonatomic) UIButton *rightIconBtn; // @synthesize rightIconBtn=_rightIconBtn;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *departmentsButton; // @synthesize departmentsButton=_departmentsButton;
@property(retain, nonatomic) TTTSearchModel *searchBarModel; // @synthesize searchBarModel=_searchBarModel;
- (void).cxx_destruct;
- (void)rightIconBtnTapped:(id)arg1;
- (void)searchButtonTapped:(id)arg1;
- (void)departmentsTapped:(id)arg1;
- (_Bool)hasRightIconExist;
- (void)configRightIcon;
- (void)configLeftIcon;
- (void)configSearchBtn;
- (void)displayWithData;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

