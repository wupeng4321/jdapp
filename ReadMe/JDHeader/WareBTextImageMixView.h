//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableAttributedString, NSString, UIColor, UIFont, UIImage;

@interface WareBTextImageMixView : UIView
{
    NSMutableAttributedString *attributedString_;
    unsigned char _alignment;
    _Bool _isBehind;
    NSString *text_;
    NSString *imageName_;
    UIFont *font_;
    UIColor *textCorlor_;
    UIImage *_image;
}

+ (double)heightForAttributedString:(id)arg1 forWidth:(double)arg2;
+ (struct CGSize)sizeForAttributedString:(id)arg1 forWidth:(double)arg2;
@property(nonatomic) _Bool isBehind; // @synthesize isBehind=_isBehind;
@property(nonatomic) unsigned char alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *textCorlor; // @synthesize textCorlor=textCorlor_;
@property(retain, nonatomic) UIFont *font; // @synthesize font=font_;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=imageName_;
@property(copy, nonatomic) NSString *text; // @synthesize text=text_;
- (void).cxx_destruct;
- (void)drawAttributeString:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3;
- (id)transferToAttributeString;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleTap:(id)arg1;
- (void)attachTapHandler;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

