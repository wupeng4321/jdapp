//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDUGCCustomTextView.h"

@class NSString, UILabel;

@interface JDMutipleInsideTextView : JDUGCCustomTextView
{
    UILabel *_placeHolderLabel;
    NSString *_placeholder;
}

@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (id)delegate;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)refreshPlaceholder;
- (void)awakeFromNib;
- (id)init;
- (void)dealloc;

@end

