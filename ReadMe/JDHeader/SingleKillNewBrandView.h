//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SSSNewBrandInfoModel;

@interface SingleKillNewBrandView : UIView
{
    JDImageView *_brandImage;
    SSSNewBrandInfoModel *_infoModel;
}

@property(retain, nonatomic) SSSNewBrandInfoModel *infoModel; // @synthesize infoModel=_infoModel;
@property(retain, nonatomic) JDImageView *brandImage; // @synthesize brandImage=_brandImage;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (void)brandTap;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
