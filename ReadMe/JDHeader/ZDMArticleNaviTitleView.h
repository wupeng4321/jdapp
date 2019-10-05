//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIButton, UILabel, ZDMUser;

@interface ZDMArticleNaviTitleView : UIView
{
    JDImageView *_authorIconIV;
    UILabel *_authorNameLabel;
    UIButton *_followButton;
    CDUnknownBlockType _followAuthor;
    CDUnknownBlockType _jumpToAuthorPage;
    ZDMUser *_author;
}

@property(retain, nonatomic) ZDMUser *author; // @synthesize author=_author;
@property(copy, nonatomic) CDUnknownBlockType jumpToAuthorPage; // @synthesize jumpToAuthorPage=_jumpToAuthorPage;
@property(copy, nonatomic) CDUnknownBlockType followAuthor; // @synthesize followAuthor=_followAuthor;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorIconIV; // @synthesize authorIconIV=_authorIconIV;
- (void).cxx_destruct;
- (void)jumpToAuthorPage:(id)arg1;
- (void)followAuthor:(id)arg1;
- (void)reload:(id)arg1;
- (void)layoutSubviews;
- (void)render:(id)arg1;

@end
