//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;
@protocol CommuneSearchBarDelegate;

@interface CommuneSearchBarView : UIView <UITextFieldDelegate>
{
    UIImageView *border_;
    id <CommuneSearchBarDelegate> _delegate;
    CDUnknownBlockType _beginInputText;
    NSString *_searchText;
    UITextField *_searchField;
}

@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField=_searchField;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) CDUnknownBlockType beginInputText; // @synthesize beginInputText=_beginInputText;
@property(nonatomic) __weak id <CommuneSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)resignText;
- (void)selectedText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
