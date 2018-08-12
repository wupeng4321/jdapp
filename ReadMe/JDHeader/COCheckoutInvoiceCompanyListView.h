//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString, UITableView;

@interface COCheckoutInvoiceCompanyListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _companyDidSelected;
    UITableView *_tableView;
    NSArray *_companyArray;
    NSDictionary *_companyCodeDict;
}

@property(retain, nonatomic) NSDictionary *companyCodeDict; // @synthesize companyCodeDict=_companyCodeDict;
@property(retain, nonatomic) NSArray *companyArray; // @synthesize companyArray=_companyArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType companyDidSelected; // @synthesize companyDidSelected=_companyDidSelected;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)setCompanyArray:(id)arg1 companyCodeDic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
