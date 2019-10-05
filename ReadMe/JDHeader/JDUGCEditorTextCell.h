//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JDMutipleTextViewDelegate-Protocol.h"

@class JDMutipleTextView, JDUGCEditorModel, NSString, UIView;
@protocol JDUGCEditorTextCellDelegate;

@interface JDUGCEditorTextCell : UITableViewCell <JDMutipleTextViewDelegate>
{
    id <JDUGCEditorTextCellDelegate> _delegate;
    JDMutipleTextView *_textFieldView;
    JDUGCEditorModel *_model;
    UIView *_splitLine;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) JDUGCEditorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDMutipleTextView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(nonatomic) __weak id <JDUGCEditorTextCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateText:(id)arg1;
- (void)buildLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
