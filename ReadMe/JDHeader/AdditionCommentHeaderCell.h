//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AfterNewCommentModel, UILabel, UIView;

@interface AdditionCommentHeaderCell : UITableViewCell
{
    UILabel *additionLabel;
    UILabel *additionTime;
    UILabel *additionContent;
    UIView *lineView;
    AfterNewCommentModel *_afterCommentModel;
}

+ (double)getAdditionHeaderHeight:(id)arg1;
@property(retain, nonatomic) AfterNewCommentModel *afterCommentModel; // @synthesize afterCommentModel=_afterCommentModel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
