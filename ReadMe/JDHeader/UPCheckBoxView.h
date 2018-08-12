//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIButton, UPLabel;

@interface UPCheckBoxView : UIView
{
    _Bool _editable;
    UIButton *mCheckBox;
    UPLabel *mLabel;
    long long mXOffSet;
    double _boxHeight;
    _Bool mSelected;
    id boxDelegate;
    NSDictionary *_boxContent;
}

@property(retain, nonatomic) NSDictionary *boxContent; // @synthesize boxContent=_boxContent;
@property(nonatomic) __weak id boxDelegate; // @synthesize boxDelegate;
@property(nonatomic) _Bool mSelected; // @synthesize mSelected;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)addFunctionLabel:(id)arg1;
- (void)checkBoxHref;
- (id)checkBoxParams;
- (id)errorInfo;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;
- (void)addLabel;
- (void)addCheckBox;
- (void)checkboxClick:(id)arg1;

@end

