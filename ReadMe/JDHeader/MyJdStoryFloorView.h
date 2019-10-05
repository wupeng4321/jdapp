//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MyJdStoryModel, NSMutableArray, UIButton, UIImageView, UILabel;
@protocol MyJdStoryFloorViewDelegate;

@interface MyJdStoryFloorView : UIView
{
    UIView *_line;
    id <MyJdStoryFloorViewDelegate> _delegate;
    MyJdStoryModel *_storyModel;
    UIView *_topBGView;
    UIImageView *_iconImgView;
    UILabel *_nameLabel;
    UILabel *_numberOfPeopleLabel;
    UILabel *_sloganLabel;
    UILabel *_intoCircleLabel;
    UIButton *_closeBtn;
    UIView *_midBGView;
    UILabel *_storyTextLabel;
    NSMutableArray *_picArray;
}

+ (struct CGSize)getSizeOfString:(id)arg1 WithFont:(id)arg2 forDefaultSize:(struct CGSize)arg3 forMaxWidth:(double)arg4 ForNumLine:(unsigned long long)arg5;
+ (double)getCellHeightWithStoryModel:(id)arg1 width:(double)arg2;
@property(retain, nonatomic) NSMutableArray *picArray; // @synthesize picArray=_picArray;
@property(retain, nonatomic) UILabel *storyTextLabel; // @synthesize storyTextLabel=_storyTextLabel;
@property(retain, nonatomic) UIView *midBGView; // @synthesize midBGView=_midBGView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *intoCircleLabel; // @synthesize intoCircleLabel=_intoCircleLabel;
@property(retain, nonatomic) UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) UILabel *numberOfPeopleLabel; // @synthesize numberOfPeopleLabel=_numberOfPeopleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIView *topBGView; // @synthesize topBGView=_topBGView;
@property(retain, nonatomic) MyJdStoryModel *storyModel; // @synthesize storyModel=_storyModel;
@property(nonatomic) __weak id <MyJdStoryFloorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (void)midBGViewTapAction:(id)arg1;
- (void)topBGViewTapAction:(id)arg1;
- (void)addAction;
- (struct CGSize)getSizeOfString:(id)arg1 WithFont:(id)arg2 forDefaultSize:(struct CGSize)arg3 forMaxWidth:(double)arg4 ForNumLine:(unsigned long long)arg5;
- (void)fitMidBGViewWithStoryModel:(id)arg1;
- (void)fitTopBGViewWithStoryModel:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
