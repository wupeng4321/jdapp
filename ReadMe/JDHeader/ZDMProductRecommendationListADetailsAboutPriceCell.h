//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UILabel;

@interface ZDMProductRecommendationListADetailsAboutPriceCell : UICollectionViewCell
{
    UILabel *_descriptionLabel;
    UIButton *_closeButton;
    CDUnknownBlockType _onPressCloseButton;
}

@property(copy, nonatomic) CDUnknownBlockType onPressCloseButton; // @synthesize onPressCloseButton=_onPressCloseButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void).cxx_destruct;
- (void)onPressCloseButton:(id)arg1;
- (void)render:(id)arg1;

@end

