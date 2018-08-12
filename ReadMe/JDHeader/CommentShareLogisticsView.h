//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol CommentShareLogisticsViewDelegate;

@interface CommentShareLogisticsView : UIView
{
    id <CommentShareLogisticsViewDelegate> _delegate;
    UIView *_tagsView;
    UIView *_inputView;
    NSMutableArray *_selectedArray;
    NSMutableArray *_logisticsArray;
}

@property(retain, nonatomic) NSMutableArray *logisticsArray; // @synthesize logisticsArray=_logisticsArray;
@property(retain, nonatomic) NSMutableArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(nonatomic) __weak id <CommentShareLogisticsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tagButtonClicked:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tagsArray;
- (void)show:(id)arg1;
- (void)hide;
- (void)setupTags;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
