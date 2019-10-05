//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class JDButton, JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSString, UISearchBar, UITableView;

@interface JDQBGameSelectViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, UITextFieldDelegate>
{
    JDStoreNetwork *_net;
    UITableView *_gameListTableView;
    NSMutableDictionary *_gameDataListDict;
    NSMutableArray *_hotGameList;
    NSMutableArray *_gameCardList;
    NSMutableArray *_sectionTitleList;
    NSMutableArray *_historyGameList;
    JDButton *_toTopButton;
    _Bool _bSearch;
    _Bool _isSearch;
    UISearchBar *_searchBar;
    NSMutableArray *_searchGameLists;
}

@property(nonatomic) _Bool isSearch; // @synthesize isSearch=_isSearch;
@property(nonatomic) _Bool bSearch; // @synthesize bSearch=_bSearch;
@property(retain, nonatomic) NSMutableArray *searchGameLists; // @synthesize searchGameLists=_searchGameLists;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setGameDataListDict:(id)arg1 withType:(int)arg2;
- (void)getGameListRequest;
- (void)getLocalHistory;
- (void)gameBtnClick:(id)arg1;
- (void)scroll2Top:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)initData;
- (void)initScroll2TopBtn;
- (void)initUIView;
- (void)didReceiveMemoryWarning;
- (void)reloadMainView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
