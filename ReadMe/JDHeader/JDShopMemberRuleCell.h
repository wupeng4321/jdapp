//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, JDLabel;

@interface JDShopMemberRuleCell : UITableViewCell
{
    JDImageView *_currentLevelImg;
    JDLabel *_conditionDetail;
    JDLabel *_privilegeDetail;
    JDLabel *_privilegeLabel;
    JDLabel *_gradeNameLabel;
}

@property(retain, nonatomic) JDLabel *gradeNameLabel; // @synthesize gradeNameLabel=_gradeNameLabel;
@property(retain, nonatomic) JDLabel *privilegeLabel; // @synthesize privilegeLabel=_privilegeLabel;
@property(retain, nonatomic) JDLabel *privilegeDetail; // @synthesize privilegeDetail=_privilegeDetail;
@property(retain, nonatomic) JDLabel *conditionDetail; // @synthesize conditionDetail=_conditionDetail;
@property(retain, nonatomic) JDImageView *currentLevelImg; // @synthesize currentLevelImg=_currentLevelImg;
- (void).cxx_destruct;
- (void)setShopRuleWithModel:(id)arg1 withLevel:(_Bool)arg2 isLastLine:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

