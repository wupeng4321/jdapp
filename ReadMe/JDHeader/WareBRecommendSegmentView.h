//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, NewProductModel;
@protocol DidTapSegmentBtnDelegate;

@interface WareBRecommendSegmentView : UIView
{
    NSMutableArray *_mutableArray;
    long long _currentBtnIndex;
    id <DidTapSegmentBtnDelegate> _delegate;
    NSDictionary *_segmentBtnDictionary;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSDictionary *segmentBtnDictionary; // @synthesize segmentBtnDictionary=_segmentBtnDictionary;
@property(nonatomic) __weak id <DidTapSegmentBtnDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long currentBtnIndex; // @synthesize currentBtnIndex=_currentBtnIndex;
@property(retain, nonatomic) NSMutableArray *mutableArray; // @synthesize mutableArray=_mutableArray;
- (void).cxx_destruct;
- (id)creatButton;
- (void)didTapped:(id)arg1;
- (id)addBtnToSegmentView;
- (void)updateSegmentBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

