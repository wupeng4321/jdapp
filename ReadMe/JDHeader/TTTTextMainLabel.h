//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UILabel;

@interface TTTTextMainLabel : UIView
{
    JDImageView *_imageView;
    UILabel *_label;
    CDUnknownBlockType _tapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 configText:(id)arg2 tapBlock:(CDUnknownBlockType)arg3;
- (void)clickText;
- (id)initWithFrame:(struct CGRect)arg1 labelHeight:(double)arg2;

@end
