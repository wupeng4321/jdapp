//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface JDShopLoftGuideView : UIView
{
    CDUnknownBlockType _callBack;
    UIImageView *_backImgView;
    UIImageView *_handImgView;
}

@property(retain, nonatomic) UIImageView *handImgView; // @synthesize handImgView=_handImgView;
@property(retain, nonatomic) UIImageView *backImgView; // @synthesize backImgView=_backImgView;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showWithComplete:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

