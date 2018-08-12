//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSSearchWordInfoModel, NSMutableAttributedString, UIImageView, UILabel;

@interface FSSearchWordInfoView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_wordInfoLabel;
    FSSearchWordInfoModel *_wordInfoModel;
    long long _lineCount;
    double _lastLineWidth;
    NSMutableAttributedString *_attributedString;
}

@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) double lastLineWidth; // @synthesize lastLineWidth=_lastLineWidth;
@property(nonatomic) long long lineCount; // @synthesize lineCount=_lineCount;
@property(retain, nonatomic) FSSearchWordInfoModel *wordInfoModel; // @synthesize wordInfoModel=_wordInfoModel;
@property(retain, nonatomic) UILabel *wordInfoLabel; // @synthesize wordInfoLabel=_wordInfoLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setLinePropertys;
- (void)generateAttributedString;
- (void)setViewLayout;
- (void)setAttributedStringParagraphStyle;
- (void)createUI;
- (id)initWithWordInfoModel:(id)arg1;

@end
