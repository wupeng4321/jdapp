//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface FSSBrandKillerHeaderViewModel : NSObject
{
    NSString *_sceneMainImage;
    NSString *_mainTitle;
    UIFont *_mainTitleFont;
    NSString *_subTitle;
    UIFont *_subTitleFont;
    NSString *_sceneAdWord;
    UIFont *_sceneAdWordFont;
    double _headerHeight;
    struct CGRect _sceneMainImageFrame;
    struct CGRect _mainTitleFrame;
    struct CGRect _subTitleFrame;
    struct CGRect _sceneAdWordFrame;
}

@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(readonly, nonatomic) UIFont *sceneAdWordFont; // @synthesize sceneAdWordFont=_sceneAdWordFont;
@property(readonly, nonatomic) struct CGRect sceneAdWordFrame; // @synthesize sceneAdWordFrame=_sceneAdWordFrame;
@property(readonly, copy, nonatomic) NSString *sceneAdWord; // @synthesize sceneAdWord=_sceneAdWord;
@property(readonly, nonatomic) UIFont *subTitleFont; // @synthesize subTitleFont=_subTitleFont;
@property(readonly, nonatomic) struct CGRect subTitleFrame; // @synthesize subTitleFrame=_subTitleFrame;
@property(readonly, copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(readonly, nonatomic) UIFont *mainTitleFont; // @synthesize mainTitleFont=_mainTitleFont;
@property(readonly, nonatomic) struct CGRect mainTitleFrame; // @synthesize mainTitleFrame=_mainTitleFrame;
@property(readonly, copy, nonatomic) NSString *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(readonly, nonatomic) struct CGRect sceneMainImageFrame; // @synthesize sceneMainImageFrame=_sceneMainImageFrame;
@property(readonly, copy, nonatomic) NSString *sceneMainImage; // @synthesize sceneMainImage=_sceneMainImage;
- (void).cxx_destruct;
- (id)initWithBrandKillerHeaderDict:(id)arg1;

@end

