//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol IAMainSessionPreferentialActivityBottomViewDelegate;

@interface IAMainSessionPreferentialActivityBottomView : UIView
{
    UIButton *bottomBtn;
    id <IAMainSessionPreferentialActivityBottomViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IAMainSessionPreferentialActivityBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bottomBtnAction:(id)arg1;
- (void)setupBtn;
- (void)customLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
