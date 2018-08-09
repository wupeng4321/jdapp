//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class JDImageView, UILabel;

@interface FinderArticleDetailBottomIconCell : JDFinderTableViewCell
{
    _Bool _fromArticle;
    CDUnknownBlockType _clickAuthorHeadImage;
    CDUnknownBlockType _clickAttentionButton;
    JDImageView *_authorHeadImage;
    UILabel *_authorNameLabel;
    UILabel *_articleRelateLabel;
    UILabel *_likeLabel;
}

@property(nonatomic) _Bool fromArticle; // @synthesize fromArticle=_fromArticle;
@property(retain, nonatomic) UILabel *likeLabel; // @synthesize likeLabel=_likeLabel;
@property(retain, nonatomic) UILabel *articleRelateLabel; // @synthesize articleRelateLabel=_articleRelateLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *authorHeadImage; // @synthesize authorHeadImage=_authorHeadImage;
@property(copy, nonatomic) CDUnknownBlockType clickAttentionButton; // @synthesize clickAttentionButton=_clickAttentionButton;
@property(copy, nonatomic) CDUnknownBlockType clickAuthorHeadImage; // @synthesize clickAuthorHeadImage=_clickAuthorHeadImage;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)setArticleRelateLabelHint:(id)arg1;
- (void)setAttentionButtonStatusAttentioned:(_Bool)arg1;
- (void)setAttentionButtonListener:(id)arg1;
- (void)tapAuthorHeadImage:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

