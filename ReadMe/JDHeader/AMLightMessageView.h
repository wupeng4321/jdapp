//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AMLightMessageView : UIView
{
    UILabel *_mMessageLabel;
    UIImageView *_mImageView;
}

@property(retain, nonatomic) UIImageView *mImageView; // @synthesize mImageView=_mImageView;
@property(retain, nonatomic) UILabel *mMessageLabel; // @synthesize mMessageLabel=_mMessageLabel;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 andMessage:(id)arg2 andHideDely:(double)arg3;
- (void)setupViews;
- (id)init;

@end

