//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface IAToastImageView : UIView
{
    CDUnknownBlockType _callBack;
}

+ (id)toastView;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)dismiss;
- (void)show;
- (void)okBtnClick;
- (id)setupOkBtn;
- (id)setupBackImageView;
- (void)customLayout:(id)arg1 iamgeView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

