//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface COCheckoutNOISuggestionTableCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_suggestionLabel;
    UILabel *_suggestionSubLabel;
    UIView *_line;
}

@property(readonly, retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(readonly, retain, nonatomic) UILabel *suggestionSubLabel; // @synthesize suggestionSubLabel=_suggestionSubLabel;
@property(readonly, retain, nonatomic) UILabel *suggestionLabel; // @synthesize suggestionLabel=_suggestionLabel;
@property(readonly, retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

