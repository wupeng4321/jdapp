//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface CommuneCheckButton : UIButton
{
    UIImageView *_checkImageView;
    UIImageView *_noCheckImageView;
}

@property(retain, nonatomic) UIImageView *noCheckImageView; // @synthesize noCheckImageView=_noCheckImageView;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setUpImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

