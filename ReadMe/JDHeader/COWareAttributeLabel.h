//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class NSArray, UIButton, UILabel;
@protocol COCheckoutWareAttributeLabelDelegate;

@interface COWareAttributeLabel : JDView
{
    _Bool _isDrop;
    _Bool _isNeedDropBool;
    id <COCheckoutWareAttributeLabelDelegate> _frameDelegate;
    UILabel *_attributeLabel;
    UIButton *_dropButton;
    NSArray *_attributesArray;
    long long _labelH;
}

+ (id)getAttributeFont;
+ (long long)getAttributeDefaultHeight;
@property(nonatomic) long long labelH; // @synthesize labelH=_labelH;
@property(nonatomic) _Bool isNeedDropBool; // @synthesize isNeedDropBool=_isNeedDropBool;
@property(nonatomic) _Bool isDrop; // @synthesize isDrop=_isDrop;
@property(retain, nonatomic) NSArray *attributesArray; // @synthesize attributesArray=_attributesArray;
@property(retain, nonatomic) UIButton *dropButton; // @synthesize dropButton=_dropButton;
@property(retain, nonatomic) UILabel *attributeLabel; // @synthesize attributeLabel=_attributeLabel;
@property(nonatomic) __weak id <COCheckoutWareAttributeLabelDelegate> frameDelegate; // @synthesize frameDelegate=_frameDelegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (long long)getAttributeWidth;
- (_Bool)handleAttributeLabel:(id)arg1;
- (id)getAttributeString;
- (void)updateContentView;
- (void)setAttributes:(id)arg1 isDrop:(_Bool)arg2;
- (void)__pressDropButton;
- (void)layoutSubviews;
- (void)setAttributeLabelColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
