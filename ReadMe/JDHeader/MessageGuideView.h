//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView, UILabel;
@protocol MessageGuideViewDelegate;

@interface MessageGuideView : UIView
{
    id <MessageGuideViewDelegate> _delegate;
    NSString *_content;
    UIView *_backView;
    UIImageView *_imageView;
    UILabel *_contentLabel;
    UILabel *_tipLabel;
    UIButton *_closeBtn;
    UIButton *_openBtn;
}

+ (id)guideViewWithContent:(id)arg1 style:(long long)arg2;
+ (id)guideAlertViewWithContent:(id)arg1;
@property(retain, nonatomic) UIButton *openBtn; // @synthesize openBtn=_openBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) __weak id <MessageGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getAppKeyWindow;
- (void)ms_reallyClose;
- (void)ms_reallyShow;
- (void)didOpenSettings:(id)arg1;
- (void)didClose:(id)arg1;
- (void)setSubviewsFrame;
- (void)configView;
- (void)hide;
- (void)show;
- (id)init;

@end

