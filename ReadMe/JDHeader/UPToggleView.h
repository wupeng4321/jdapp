//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface UPToggleView : UIView
{
    UIImageView *_imageView_CheckBox;
    _Bool _selected;
    CDUnknownBlockType _actionBlcok;
    CDUnknownBlockType _linkBlock;
}

+ (double)boxHeight;
@property(copy, nonatomic) CDUnknownBlockType linkBlock; // @synthesize linkBlock=_linkBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlcok; // @synthesize actionBlcok=_actionBlcok;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)tapAction;
- (void)chageBackgroundColor;
- (void)installmentDesAction;
- (id)initWithOrigin:(struct CGPoint)arg1 title:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithOrigin:(struct CGPoint)arg1 title:(id)arg2 urlDic:(id)arg3 actionBlock:(CDUnknownBlockType)arg4 linkBlock:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

