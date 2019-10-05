//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface SHVPSmallVideoCustomButton : UIControl
{
    UIImage *_normalImage;
    UIImage *_highlightImage;
    UIImageView *_imageView;
    UIColor *_textColor;
    NSString *_text;
    UILabel *_label;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setUpSubViews;
- (id)initWithNormalImage:(id)arg1 highlightImage:(id)arg2 imageSize:(struct CGSize)arg3 type:(long long)arg4 frame:(struct CGRect)arg5;

@end
