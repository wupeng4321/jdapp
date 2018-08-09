//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderPhotoGroupArticleModel, JDImageView, NSString, NewFinderImageView, UILabel;

@interface FinderPhotoGroupRecommendView : UIView
{
    CDUnknownBlockType _clickViewBlock;
    CDUnknownBlockType _clickAuthorBlock;
    NewFinderImageView *_skuImageView;
    UILabel *_titleLabel;
    JDImageView *_authorImageView;
    UILabel *_authorLabel;
    UILabel *_viewLabel;
    NSString *_photoGroupId;
    NSString *_authorId;
    FinderPhotoGroupArticleModel *_articleModel;
}

@property(retain, nonatomic) FinderPhotoGroupArticleModel *articleModel; // @synthesize articleModel=_articleModel;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *photoGroupId; // @synthesize photoGroupId=_photoGroupId;
@property(retain, nonatomic) UILabel *viewLabel; // @synthesize viewLabel=_viewLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) JDImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NewFinderImageView *skuImageView; // @synthesize skuImageView=_skuImageView;
@property(copy, nonatomic) CDUnknownBlockType clickAuthorBlock; // @synthesize clickAuthorBlock=_clickAuthorBlock;
@property(copy, nonatomic) CDUnknownBlockType clickViewBlock; // @synthesize clickViewBlock=_clickViewBlock;
- (void).cxx_destruct;
- (void)clickAuthorRecognizer:(id)arg1;
- (void)clickViewRecognizer:(id)arg1;
- (void)assignData:(id)arg1;
- (struct CGSize)resizeString:(id)arg1 withFont:(id)arg2 forWidth:(double)arg3 forNumLine:(unsigned long long)arg4;
- (void)layoutSubviews;
- (void)setupViews;
- (id)init;

@end

