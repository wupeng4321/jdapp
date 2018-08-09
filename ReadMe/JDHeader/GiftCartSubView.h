//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GiftCardModel, GiftWriteCardBtn, JDImageView, NSString, UIButton, UILabel;

@interface GiftCartSubView : UIView
{
    _Bool isSelected;
    UIButton *selectBtn;
    JDImageView *wareImgView;
    UILabel *wareInfoLabel;
    UILabel *wareNumLabel;
    UILabel *warePriceLabel;
    GiftWriteCardBtn *writeCartBtn;
    NSString *imgUrl;
    GiftCardModel *cardModel;
    UIButton *stock;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected;
@property(retain, nonatomic) GiftCardModel *cardModel; // @synthesize cardModel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)wareViewDidTap;
- (void)selectBtnClicked;
- (void)setSelected:(_Bool)arg1;
- (void)writeCartBtnClicked;
- (void)setViewWithModel:(id)arg1;
- (void)setWriteCartBtnText:(id)arg1;

@end

