//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSMutableArray, TTTTotalModel, UIImageView;

@interface TTTTabBar : UIView
{
    UIImageView *_shadowImageView;
    NSMutableArray *_buttons;
    TTTTotalModel *_totalModel;
    JDImageView *_backImageView;
}

@property(retain, nonatomic) JDImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(retain, nonatomic) TTTTotalModel *totalModel; // @synthesize totalModel=_totalModel;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)populateWithData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
