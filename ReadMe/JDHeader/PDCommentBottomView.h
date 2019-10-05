//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PDViewProtocol-Protocol.h"

@class JDButton, NSString, NewProductModel;
@protocol PDCommentBottomViewDelegate;

@interface PDCommentBottomView : UIView <PDViewProtocol>
{
    id <PDCommentBottomViewDelegate> _delegate;
    JDButton *_wareOrderCommentButton;
    JDButton *_wareConsultButton;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDButton *wareConsultButton; // @synthesize wareConsultButton=_wareConsultButton;
@property(retain, nonatomic) JDButton *wareOrderCommentButton; // @synthesize wareOrderCommentButton=_wareOrderCommentButton;
@property(nonatomic) __weak id <PDCommentBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonAction:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
