//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class CommuneCategoryRecommend, UIView;

@interface CommuneCategoryRecommendLabel : UILabel
{
    _Bool _selected;
    CommuneCategoryRecommend *_recommendModel;
    UIView *_redBottomView;
}

@property(retain, nonatomic) UIView *redBottomView; // @synthesize redBottomView=_redBottomView;
@property(retain, nonatomic) CommuneCategoryRecommend *recommendModel; // @synthesize recommendModel=_recommendModel;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

