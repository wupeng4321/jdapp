//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDButton, MyJdHomeModel, UIImageView;

@interface FeedbackCategoryCell : UICollectionViewCell
{
    MyJdHomeModel *_model;
    JDButton *_titleNomalButton;
    UIImageView *_titleView;
    JDButton *_titleSelectedButton;
}

@property(retain, nonatomic) JDButton *titleSelectedButton; // @synthesize titleSelectedButton=_titleSelectedButton;
@property(retain, nonatomic) UIImageView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) JDButton *titleNomalButton; // @synthesize titleNomalButton=_titleNomalButton;
@property(retain, nonatomic) MyJdHomeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

