//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CommuneSearchSimilarQuestionDetailModel, NSArray, UIView;
@protocol CommuneMatchedQuestionTableViewCellDidClickDelegate;

@interface CommuneMatchedQuestionTableViewCell : UITableViewCell
{
    UIView *endLine;
    CommuneSearchSimilarQuestionDetailModel *_model;
    NSArray *_keywords;
    id <CommuneMatchedQuestionTableViewCellDidClickDelegate> _delegate;
}

@property(nonatomic) __weak id <CommuneMatchedQuestionTableViewCellDidClickDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CommuneSearchSimilarQuestionDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)getAttributedStringWithString:(id)arg1 keywords:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)didClickCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

