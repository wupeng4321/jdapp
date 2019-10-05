//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDStoreNetwork, NSMutableArray, NSMutableString, NewRecommendModel, UIButton, UIImageView, UILabel;
@protocol RecommendNegativeDelegate;

@interface RecommendNegativePopView : UIView
{
    long long chooseButtonInt;
    long long longPressType;
    NSMutableString *chooseSkuString;
    id <RecommendNegativeDelegate> _delegate;
    long long _currentSourceType;
    JDStoreNetwork *_feedBackNetwork;
    NewRecommendModel *_currentRecommendModel;
    long long _currentIndex;
    UIButton *_windowBGButton;
    UIView *_popView;
    UIView *_popBGView;
    UIImageView *_popBGImageView;
    UIImageView *_popTriangleImageView;
    UIView *_popButtonView;
    UILabel *_popChooseLabel;
    UIButton *_popChooseRightButton;
    NSMutableArray *_popChooseButtonArray;
}

@property(retain, nonatomic) NSMutableArray *popChooseButtonArray; // @synthesize popChooseButtonArray=_popChooseButtonArray;
@property(retain, nonatomic) UIButton *popChooseRightButton; // @synthesize popChooseRightButton=_popChooseRightButton;
@property(retain, nonatomic) UILabel *popChooseLabel; // @synthesize popChooseLabel=_popChooseLabel;
@property(retain, nonatomic) UIView *popButtonView; // @synthesize popButtonView=_popButtonView;
@property(retain, nonatomic) UIImageView *popTriangleImageView; // @synthesize popTriangleImageView=_popTriangleImageView;
@property(retain, nonatomic) UIImageView *popBGImageView; // @synthesize popBGImageView=_popBGImageView;
@property(retain, nonatomic) UIView *popBGView; // @synthesize popBGView=_popBGView;
@property(retain, nonatomic) UIView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) UIButton *windowBGButton; // @synthesize windowBGButton=_windowBGButton;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NewRecommendModel *currentRecommendModel; // @synthesize currentRecommendModel=_currentRecommendModel;
@property(retain, nonatomic) JDStoreNetwork *feedBackNetwork; // @synthesize feedBackNetwork=_feedBackNetwork;
@property(nonatomic) long long currentSourceType; // @synthesize currentSourceType=_currentSourceType;
@property(nonatomic) __weak id <RecommendNegativeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showNegativePopLayer:(id)arg1 andRect:(struct CGRect)arg2 andSuperRect:(struct CGRect)arg3 andIndex:(long long)arg4 andTriggerType:(long long)arg5;
- (void)sendNegativeItems:(id)arg1;
- (void)onClickChooseButton:(id)arg1;
- (void)removeSubviews;
- (void)onClickPopChooseRightButton:(id)arg1;
- (void)onClickWindowBGButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
