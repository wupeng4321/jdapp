//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface JDShopGiftPackageContentView : UIView
{
    UIImageView *_backImgView;
    UIImageView *_headImgView;
    UILabel *_titleLbl;
    UILabel *_detailLbl;
}

@property(retain, nonatomic) UILabel *detailLbl; // @synthesize detailLbl=_detailLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) UIImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) UIImageView *backImgView; // @synthesize backImgView=_backImgView;
- (void).cxx_destruct;
- (void)setDataWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
