//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface PDWendaSingleView : UIView
{
    UIImageView *_questionIcon;
    UILabel *_questionLabel;
    UILabel *_answerCountLabel;
}

@property(retain, nonatomic) UILabel *answerCountLabel; // @synthesize answerCountLabel=_answerCountLabel;
@property(retain, nonatomic) UILabel *questionLabel; // @synthesize questionLabel=_questionLabel;
@property(retain, nonatomic) UIImageView *questionIcon; // @synthesize questionIcon=_questionIcon;
- (void).cxx_destruct;
- (void)renderUI:(id)arg1 withIconUrl:(id)arg2 withABTest:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

