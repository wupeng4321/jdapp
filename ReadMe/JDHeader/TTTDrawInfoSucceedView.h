//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class NSAttributedString, TTTDrawModel, UIButton, UILabel;
@protocol TTTDrawInfoSucceedViewDelegate;

@interface TTTDrawInfoSucceedView : TTTBaseView
{
    id <TTTDrawInfoSucceedViewDelegate> _delegate;
    UILabel *_redLabel;
    UILabel *_grayLabel;
    UIButton *_againButton;
    TTTDrawModel *_drawModel;
    NSAttributedString *_chancesString;
}

@property(retain, nonatomic) NSAttributedString *chancesString; // @synthesize chancesString=_chancesString;
@property(nonatomic) __weak TTTDrawModel *drawModel; // @synthesize drawModel=_drawModel;
@property(retain, nonatomic) UIButton *againButton; // @synthesize againButton=_againButton;
@property(retain, nonatomic) UILabel *grayLabel; // @synthesize grayLabel=_grayLabel;
@property(retain, nonatomic) UILabel *redLabel; // @synthesize redLabel=_redLabel;
@property(nonatomic) __weak id <TTTDrawInfoSucceedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)repeatButtonFrame;
- (struct CGRect)grayLabelFrame;
- (struct CGRect)redLabelFrame;
- (void)updateItemLayout;
- (id)grayLabelAttributedStringChance:(id)arg1;
- (void)updateViewNode:(id)arg1;
- (void)clickButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end
