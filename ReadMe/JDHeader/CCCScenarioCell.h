//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CCCScenarioViewDelegate-Protocol.h"

@class BJCCScenarioModel, BJChoiceCouponModel, CCCScenarioView, NSString, UILabel;
@protocol CCCScenarioCellDelegate;

@interface CCCScenarioCell : UITableViewCell <CCCScenarioViewDelegate>
{
    id <CCCScenarioCellDelegate> _scenarioDelegate;
    BJChoiceCouponModel *_choiceModel;
    CCCScenarioView *_scenarioView;
    UILabel *_titleLabel;
    BJCCScenarioModel *_scenarioModel;
}

+ (long long)scenarioShowViewesWithModel:(id)arg1;
+ (double)scenarioViewHeightWithModel:(id)arg1;
@property(retain, nonatomic) BJCCScenarioModel *scenarioModel; // @synthesize scenarioModel=_scenarioModel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CCCScenarioView *scenarioView; // @synthesize scenarioView=_scenarioView;
@property(retain, nonatomic) BJChoiceCouponModel *choiceModel; // @synthesize choiceModel=_choiceModel;
@property(nonatomic) __weak id <CCCScenarioCellDelegate> scenarioDelegate; // @synthesize scenarioDelegate=_scenarioDelegate;
- (void).cxx_destruct;
- (void)selectScenarioItem:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (void)initUIContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

