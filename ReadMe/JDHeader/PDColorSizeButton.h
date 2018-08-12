//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, CAShapeLayer, NSString, UIColor, UIImageView, UILabel;

@interface PDColorSizeButton : UIButton
{
    _Bool _isJx;
    long long _selectedType;
    id _attachedObject;
    NSString *_groupId;
    CAShapeLayer *_borderLayer;
    UILabel *_subTitleLabel;
    UIColor *_normalBorderColor;
    UIColor *_themeColor;
    CALayer *_bgLayer;
    UIImageView *_subTitleBackground;
    CAShapeLayer *_disableLine;
}

@property(nonatomic) _Bool isJx; // @synthesize isJx=_isJx;
@property(retain, nonatomic) CAShapeLayer *disableLine; // @synthesize disableLine=_disableLine;
@property(retain, nonatomic) UIImageView *subTitleBackground; // @synthesize subTitleBackground=_subTitleBackground;
@property(retain, nonatomic) CALayer *bgLayer; // @synthesize bgLayer=_bgLayer;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) id attachedObject; // @synthesize attachedObject=_attachedObject;
@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
- (void).cxx_destruct;
- (void)setButtonSelectedType:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2 normalBorderColor:(id)arg3 groupId:(id)arg4 isJx:(_Bool)arg5;
- (void)dealloc;

@end

