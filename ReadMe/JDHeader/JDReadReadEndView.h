//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JDReadReadEndView : UIView
{
    UIButton *_backBtn;
    UILabel *_titleLab;
    UIView *_lineView;
    UIImageView *_poweredView;
}

@property(retain, nonatomic) UIImageView *poweredView; // @synthesize poweredView=_poweredView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
