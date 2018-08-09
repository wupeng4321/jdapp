//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDStoreNetwork, NSArray, NSDictionary, NSString, UIButton, UITableView, UITextView;

@interface ComposeConsultViewController : JDViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *tableView_;
    struct CGRect priorFrame;
    UIButton *typeButton_;
    UITextView *contentView_;
    NSArray *types_;
    JDStoreNetwork *networkDao_;
    NSString *wareId_;
    NSDictionary *_mtaDic;
}

@property(retain, nonatomic) NSDictionary *mtaDic; // @synthesize mtaDic=_mtaDic;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=wareId_;
- (void).cxx_destruct;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3;
- (void)didFinishPickingInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forColumn:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInColumn:(long long)arg2;
- (long long)numberOfColumnsInPickerView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)commitAction:(id)arg1;
- (_Bool)validateInput;
- (void)chooseType:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithWareId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

