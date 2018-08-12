//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTFloorModel, TTThemeArticleModel, UIImageView, UILabel, UIView;

@interface TTThemeArticleStyleThreeExView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_authorIcon;
    UILabel *_authorNameLabel;
    UIImageView *_eyeIcon;
    UILabel *_readCountLabel;
    UIView *_jiangeView;
    TTTFloorModel *_viewData;
    TTThemeArticleModel *_articleModel;
}

@property(retain, nonatomic) TTThemeArticleModel *articleModel; // @synthesize articleModel=_articleModel;
@property(retain, nonatomic) TTTFloorModel *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) UIView *jiangeView; // @synthesize jiangeView=_jiangeView;
@property(retain, nonatomic) UILabel *readCountLabel; // @synthesize readCountLabel=_readCountLabel;
@property(retain, nonatomic) UIImageView *eyeIcon; // @synthesize eyeIcon=_eyeIcon;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorIcon; // @synthesize authorIcon=_authorIcon;
- (void).cxx_destruct;
- (void)configJiange;
- (void)configBrowserNumViews;
- (void)configAuthorViews;
- (void)viewTapped;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

