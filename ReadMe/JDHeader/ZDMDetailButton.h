//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface ZDMDetailButton : UIButton
{
    UIImage *_iconImage;
    UIImage *_selectedImage;
    NSString *_countStr;
    UIImageView *_tagView;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) NSString *countStr; // @synthesize countStr=_countStr;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

