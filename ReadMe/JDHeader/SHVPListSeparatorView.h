//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface SHVPListSeparatorView : UIView
{
    UIImageView *_leftImg;
    UIImageView *_rightImg;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *rightImg; // @synthesize rightImg=_rightImg;
@property(retain, nonatomic) UIImageView *leftImg; // @synthesize leftImg=_leftImg;
- (void).cxx_destruct;
- (void)updateContentWithText:(id)arg1 a:(_Bool)arg2;
- (id)init;

@end

