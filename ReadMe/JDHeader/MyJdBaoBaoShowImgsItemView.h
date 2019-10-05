//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UIImageView, UILabel;
@protocol MyJdBaoBaoShowImgsItemViewDelegate;

@interface MyJdBaoBaoShowImgsItemView : UIView
{
    NSDictionary *_imgsItemModelDict;
    id <MyJdBaoBaoShowImgsItemViewDelegate> _delegate;
    UIImageView *_backgroundImgView;
    UILabel *_titleLabel;
    UIView *_whiteGroundView;
}

@property(retain, nonatomic) UIView *whiteGroundView; // @synthesize whiteGroundView=_whiteGroundView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImgView; // @synthesize backgroundImgView=_backgroundImgView;
@property(nonatomic) __weak id <MyJdBaoBaoShowImgsItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *imgsItemModelDict; // @synthesize imgsItemModelDict=_imgsItemModelDict;
- (void).cxx_destruct;
- (void)didTapItemAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
