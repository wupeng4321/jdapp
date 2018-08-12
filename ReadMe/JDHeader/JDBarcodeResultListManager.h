//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIImageView, UILabel, UITableView;

@interface JDBarcodeResultListManager : UIView
{
    UIImageView *backgroundView_;
    UIView *contentView_;
    UIImageView *topView_;
    UILabel *titleLabel_;
    UITableView *tableView_;
    CDUnknownBlockType _selectItemBlock;
    NSArray *_warelist;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedJDBarcodeResultListManager;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dismiss;
- (void)show;
- (void)showWithWareInfoList:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)destroy;
- (void)initSelectView;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
