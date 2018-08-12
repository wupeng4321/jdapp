//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "MessageSubscribeCellDelegaet-Protocol.h"

@class MessageSubscribeModel, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MessageSubscribeCellDelegaet;

@interface MessageSubscribeCell : UITableViewCell <MessageSubscribeCellDelegaet>
{
    MessageSubscribeModel *_model;
    id <MessageSubscribeCellDelegaet> _delegate;
    UILabel *_shopNameLal;
    UIImageView *_logoImageV;
    UIButton *_subBtn;
    UIView *_bottomSeperatorView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIButton *subBtn; // @synthesize subBtn=_subBtn;
@property(retain, nonatomic) UIImageView *logoImageV; // @synthesize logoImageV=_logoImageV;
@property(retain, nonatomic) UILabel *shopNameLal; // @synthesize shopNameLal=_shopNameLal;
@property(nonatomic) __weak id <MessageSubscribeCellDelegaet> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MessageSubscribeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)subscribeShopAction:(id)arg1;
- (void)updateSurscribe:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

