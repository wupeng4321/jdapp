//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UILabel;

@interface JZHomeSpecialRecommandHeadView : UIView
{
    JDImageView *_imageView;
    UILabel *_title;
}

@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)fillBgImg:(id)arg1 title:(id)arg2;
- (void)clearContent;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

