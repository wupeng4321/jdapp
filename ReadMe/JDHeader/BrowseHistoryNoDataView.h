//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, UIImageView, UILabel;
@protocol BrowseHistoryNoDataViewDelegate;

@interface BrowseHistoryNoDataView : UIView
{
    id <BrowseHistoryNoDataViewDelegate> _delegate;
    UIImageView *_noHistoryIcon;
    UILabel *_noHistory;
    JDButton *_jumpButton;
}

@property(retain, nonatomic) JDButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UILabel *noHistory; // @synthesize noHistory=_noHistory;
@property(retain, nonatomic) UIImageView *noHistoryIcon; // @synthesize noHistoryIcon=_noHistoryIcon;
@property(nonatomic) __weak id <BrowseHistoryNoDataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)jumpButtonClick:(id)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

