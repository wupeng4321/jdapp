//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDIcon, JDTemplatePriceLabel;

@interface JDTemplatePlusPriceView : UIView
{
    JDTemplatePriceLabel *_plusPriceLabel;
    JDIcon *_plusIcon;
}

@property(retain, nonatomic) JDIcon *plusIcon; // @synthesize plusIcon=_plusIcon;
@property(retain, nonatomic) JDTemplatePriceLabel *plusPriceLabel; // @synthesize plusPriceLabel=_plusPriceLabel;
- (void).cxx_destruct;
- (struct CGSize)textSize:(id)arg1 size:(struct CGSize)arg2;
- (struct CGSize)setPlusPrice:(id)arg1 withFontSize:(long long)arg2 isNoStock:(_Bool)arg3 size:(struct CGSize)arg4;
- (struct CGSize)setPlusPrice:(id)arg1 isNoStock:(_Bool)arg2 size:(struct CGSize)arg3;
- (struct CGSize)setPlusPrice:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

