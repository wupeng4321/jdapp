//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface JDXFANSingleGoodsDetailBottomBar : UIView
{
    _Bool _isFavourite;
    long long _favouteCount;
    UIButton *_likeBtn;
    UIButton *_goAheadBtn;
    NSString *_themeColorHEX;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) NSString *themeColorHEX; // @synthesize themeColorHEX=_themeColorHEX;
@property(nonatomic) _Bool isFavourite; // @synthesize isFavourite=_isFavourite;
@property(retain, nonatomic) UIButton *goAheadBtn; // @synthesize goAheadBtn=_goAheadBtn;
@property(retain, nonatomic) UIButton *likeBtn; // @synthesize likeBtn=_likeBtn;
@property(nonatomic) long long favouteCount; // @synthesize favouteCount=_favouteCount;
- (void).cxx_destruct;
- (void)relayoutLikeBtn;
- (void)setUpLayout;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)removeKVO;
- (void)addKVO;
- (void)setTintColor:(id)arg1;

@end

