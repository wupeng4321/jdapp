//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WJLoginGetCountryDistrictCodeListProtocol-Protocol.h"

@class NSArray, NSString, UISearchBar, UITableView, WJLoginClientService;
@protocol JDRegisterCountryDistrictViewControllerDelegate;

@interface JDRegisterCountryDistrictViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, WJLoginGetCountryDistrictCodeListProtocol, UIGestureRecognizerDelegate>
{
    id <JDRegisterCountryDistrictViewControllerDelegate> _delegate;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    NSArray *_originData;
    NSArray *_originIndex;
    NSArray *_filteredData;
    NSArray *_filteredIndex;
    NSArray *_allIndex;
    WJLoginClientService *_loginService;
}

@property(retain, nonatomic) WJLoginClientService *loginService; // @synthesize loginService=_loginService;
@property(retain, nonatomic) NSArray *allIndex; // @synthesize allIndex=_allIndex;
@property(retain, nonatomic) NSArray *filteredIndex; // @synthesize filteredIndex=_filteredIndex;
@property(retain, nonatomic) NSArray *filteredData; // @synthesize filteredData=_filteredData;
@property(retain, nonatomic) NSArray *originIndex; // @synthesize originIndex=_originIndex;
@property(retain, nonatomic) NSArray *originData; // @synthesize originData=_originData;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <JDRegisterCountryDistrictViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutControls;
- (void)filterOriginDataWithString:(id)arg1;
- (void)objectWithDictionary:(id)arg1;
- (void)updateData:(id)arg1;
- (void)getCountryDistrictCodeList;
- (void)getCountryDistrictCodeListSuccess:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldEndEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
