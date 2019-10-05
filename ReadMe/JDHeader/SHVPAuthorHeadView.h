//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UILabel;

@interface SHVPAuthorHeadView : UIView
{
    CDUnknownBlockType _clickAuthorHeadView;
    JDImageView *_authorHeaderImage;
    UILabel *_authorNameLabel;
    UILabel *_authorLocationLabel;
}

@property(retain, nonatomic) UILabel *authorLocationLabel; // @synthesize authorLocationLabel=_authorLocationLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorHeaderImage; // @synthesize authorHeaderImage=_authorHeaderImage;
@property(copy, nonatomic) CDUnknownBlockType clickAuthorHeadView; // @synthesize clickAuthorHeadView=_clickAuthorHeadView;
- (void).cxx_destruct;
- (void)clickAuthorHeadViewListener:(id)arg1;
- (void)layoutViews;
- (void)setAuthorHeadImage:(id)arg1 Name:(id)arg2 Location:(id)arg3;
- (void)setAuthorLocation:(id)arg1;
- (void)setAuthorName:(id)arg1;
- (void)setAuthorHeadImage:(id)arg1;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
