//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, UILabel;

@interface MyJdBaoBaoFloorView : UIView
{
    NSDictionary *_modelDict;
    UIImageView *_backgroundImgView;
    UIImageView *_baobaoLogoImgView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *baobaoLogoImgView; // @synthesize baobaoLogoImgView=_baobaoLogoImgView;
@property(retain, nonatomic) UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(retain, nonatomic) NSDictionary *modelDict; // @synthesize modelDict=_modelDict;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

