//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMArticleParagraphViewModel.h"

@class NSURL, ZDMArticleImageParagraph;

@interface ZDMArticleImageParagraphViewModel : ZDMArticleParagraphViewModel
{
    ZDMArticleImageParagraph *_imageParagraph;
}

@property(readonly, nonatomic) ZDMArticleImageParagraph *imageParagraph; // @synthesize imageParagraph=_imageParagraph;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *imageURL;
- (id)initWithImageParagraph:(id)arg1;

@end

