//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, PDFreeFreightModel, UILabel;

@interface PDFreeFreightView : UIView
{
    PDFreeFreightModel *_model;
    UIView *_contentView;
    JDImageView *_iconView;
    JDImageView *_arrowView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) JDImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) PDFreeFreightModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)instanceUI;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

@end

