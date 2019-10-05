//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class CAGradientLayer, NSArray, NSMutableArray, UILabel, UIScrollView, UIView;
@protocol JZDChooseDateTabViewDelegate;

@interface JZDChooseDateTabView : JDView
{
    double originY;
    id <JZDChooseDateTabViewDelegate> _tabDelegate;
    NSArray *_titleArray;
    long long _index;
    UIScrollView *_tabScrollView;
    UIView *_tabBgView;
    NSMutableArray *_buttonArray;
    UIView *_selectedLineView;
    UILabel *_messageLabel;
    NSArray *_messageArray;
    NSArray *_bubbleArray;
    NSMutableArray *_bubbleViewArray;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) NSMutableArray *bubbleViewArray; // @synthesize bubbleViewArray=_bubbleViewArray;
@property(retain, nonatomic) NSArray *bubbleArray; // @synthesize bubbleArray=_bubbleArray;
@property(retain, nonatomic) NSArray *messageArray; // @synthesize messageArray=_messageArray;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *selectedLineView; // @synthesize selectedLineView=_selectedLineView;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *tabBgView; // @synthesize tabBgView=_tabBgView;
@property(retain, nonatomic) UIScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray=_titleArray;
@property(nonatomic) __weak id <JZDChooseDateTabViewDelegate> tabDelegate; // @synthesize tabDelegate=_tabDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickedTabButton:(id)arg1;
- (void)selectedViewScrollToButton:(id)arg1 animation:(_Bool)arg2;
- (void)setCancelSelected;
- (id)getMessageColor:(id)arg1;
- (void)selectedMessage;
- (void)setSelectedIndex:(long long)arg1;
- (id)tabButtonWithTitle:(id)arg1;
- (void)setButtonsFrameWithTitleWidth:(long long)arg1;
- (void)initButtons;
- (void)initBubbleViewWithButton:(id)arg1 img:(id)arg2;
- (void)initBubbleViews;
- (void)removeBubbleViews;
- (void)setHeightOfView;
- (void)setMessagesArray:(id)arg1 bubbleArray:(id)arg2;
- (void)setTitleArray:(id)arg1 selectIndex:(long long)arg2;
- (void)setOriginYWithBubbleArray:(id)arg1;
- (void)setScrollViewFrameWithButtonWidth:(long long)arg1 gap:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
