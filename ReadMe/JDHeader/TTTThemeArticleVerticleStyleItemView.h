//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTThemeArticleVerticleStyleAuthorView, TTThemeArticleModel, UIImageView, UILabel;

@interface TTTThemeArticleVerticleStyleItemView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_browsNumLabel;
    TTTThemeArticleVerticleStyleAuthorView *_authorView;
    UIImageView *_videoImageView;
    TTThemeArticleModel *_articleModel;
}

@property(retain, nonatomic) TTThemeArticleModel *articleModel; // @synthesize articleModel=_articleModel;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) TTTThemeArticleVerticleStyleAuthorView *authorView; // @synthesize authorView=_authorView;
@property(retain, nonatomic) UILabel *browsNumLabel; // @synthesize browsNumLabel=_browsNumLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)configOptionalViews;
- (void)bindDataWithViewModel:(id)arg1;
- (void)viewTaped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

