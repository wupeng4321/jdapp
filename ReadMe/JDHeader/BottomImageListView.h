//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UITableView;
@protocol BottomImageListViewDelegate;

@interface BottomImageListView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_imagesArr;
    id <BottomImageListViewDelegate> _delegate;
    UITableView *_imageTableView;
    UIButton *_confirmButton;
    UILabel *_completeLabel;
    UILabel *_numLabel;
}

@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UILabel *completeLabel; // @synthesize completeLabel=_completeLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *imageTableView; // @synthesize imageTableView=_imageTableView;
@property(nonatomic) __weak id <BottomImageListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *imagesArr; // @synthesize imagesArr=_imagesArr;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)confirm;
- (void)scrollToEnd;
- (void)reloadImageData;
- (void)setCurrentNumber:(long long)arg1 maxNumber:(long long)arg2;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)configView;
- (void)initPlaceholderView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

