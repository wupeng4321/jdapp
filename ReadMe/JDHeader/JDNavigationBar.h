//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface JDNavigationBar : UIView
{
    UIImageView *background_;
    UILabel *titleLable_;
    NSString *title_;
    UIView *leftView_;
    UIView *rightView_;
}

@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=rightView_;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=leftView_;
@property(retain, nonatomic) NSString *title; // @synthesize title=title_;
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=background_;
- (void).cxx_destruct;
- (void)showRightView:(_Bool)arg1;
- (void)showLeftView:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

