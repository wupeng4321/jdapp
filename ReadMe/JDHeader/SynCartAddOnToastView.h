//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface SynCartAddOnToastView : UIView
{
    CDUnknownBlockType _addOnToastClickBlock;
    NSString *_contentTitle;
    UILabel *_contentLabel;
    UIImageView *_arrowImgView;
}

@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(copy, nonatomic) CDUnknownBlockType addOnToastClickBlock; // @synthesize addOnToastClickBlock=_addOnToastClickBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clickAction;
- (void)closeImmediately;
- (void)closeDelySpell;
- (id)initWithFrame:(struct CGRect)arg1;

@end

