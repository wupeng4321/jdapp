//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, NSString, UIImageView;

@interface XBMenuButton : UIButton
{
    NSString *name_;
    NSString *value_;
    NSString *type_;
    NSArray *subButtonArray_;
    UIImageView *menuTipView_;
    long long isNew_;
    UIImageView *redDotView_;
}

@property(retain, nonatomic) UIImageView *redDotView; // @synthesize redDotView=redDotView_;
@property(nonatomic) long long isNew; // @synthesize isNew=isNew_;
@property(retain, nonatomic) UIImageView *menuTipView; // @synthesize menuTipView=menuTipView_;
@property(retain, nonatomic) NSArray *subButtonArray; // @synthesize subButtonArray=subButtonArray_;
@property(retain, nonatomic) NSString *type; // @synthesize type=type_;
@property(retain, nonatomic) NSString *value; // @synthesize value=value_;
@property(retain, nonatomic) NSString *name; // @synthesize name=name_;
- (void).cxx_destruct;
- (void)addRedDot;
- (void)setXBMenuButtonInfo:(id)arg1 isNewMenuArray:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
