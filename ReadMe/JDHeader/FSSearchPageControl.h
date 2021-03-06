//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSMutableArray, UIImage;

@interface FSSearchPageControl : UIView
{
    float _pageSpace;
    long long _numberOfPages;
    long long _currentPage;
    UIImage *_imagePageStateNormal;
    UIImage *_imagePageStateHighlighted;
    JDImageView *_currentImageView;
    NSMutableArray *_dots;
    struct CGSize _currentImageSize;
    struct CGSize _nomalImageSize;
    struct CGRect _frameRect;
}

@property(nonatomic) struct CGSize nomalImageSize; // @synthesize nomalImageSize=_nomalImageSize;
@property(nonatomic) struct CGSize currentImageSize; // @synthesize currentImageSize=_currentImageSize;
@property(nonatomic) struct CGRect frameRect; // @synthesize frameRect=_frameRect;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
@property(retain, nonatomic) JDImageView *currentImageView; // @synthesize currentImageView=_currentImageView;
@property(nonatomic) float pageSpace; // @synthesize pageSpace=_pageSpace;
@property(retain, nonatomic) UIImage *imagePageStateHighlighted; // @synthesize imagePageStateHighlighted=_imagePageStateHighlighted;
@property(retain, nonatomic) UIImage *imagePageStateNormal; // @synthesize imagePageStateNormal=_imagePageStateNormal;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

