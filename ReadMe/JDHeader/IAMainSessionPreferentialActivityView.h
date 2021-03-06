//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, IAMainSessionModel, UILabel;
@protocol IAMainSessionPreferentialActivityViewDelegate;

@interface IAMainSessionPreferentialActivityView : UIView
{
    id <IAMainSessionPreferentialActivityViewDelegate> _delegate;
    UILabel *_activityTitleLabel;
    UILabel *_activityActionLabel;
    CALayer *_topLine;
    IAMainSessionModel *_model;
}

@property(retain, nonatomic) IAMainSessionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) CALayer *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *activityActionLabel; // @synthesize activityActionLabel=_activityActionLabel;
@property(retain, nonatomic) UILabel *activityTitleLabel; // @synthesize activityTitleLabel=_activityTitleLabel;
@property(nonatomic) __weak id <IAMainSessionPreferentialActivityViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupActivityActionLabel;
- (void)setupActivityTitleLabel;
- (void)customLayout;
- (void)activityActionLabelClick;
- (void)configUIWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

