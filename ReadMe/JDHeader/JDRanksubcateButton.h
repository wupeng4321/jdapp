//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, UIImageView, UILabel;

@interface JDRanksubcateButton : UIButton
{
    _Bool _isshowselected;
    _Bool _isshowredpoint;
    NSString *_catetitle;
    NSString *_cateId;
    UILabel *_subcatelabel;
    UIImageView *_isselected;
    UIImageView *_redpoint;
}

@property(retain, nonatomic) UIImageView *redpoint; // @synthesize redpoint=_redpoint;
@property(retain, nonatomic) UIImageView *isselected; // @synthesize isselected=_isselected;
@property(retain, nonatomic) UILabel *subcatelabel; // @synthesize subcatelabel=_subcatelabel;
@property(nonatomic) _Bool isshowredpoint; // @synthesize isshowredpoint=_isshowredpoint;
@property(nonatomic) _Bool isshowselected; // @synthesize isshowselected=_isshowselected;
@property(retain, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(retain, nonatomic) NSString *catetitle; // @synthesize catetitle=_catetitle;
- (void)setFontAndSize;
- (void)refreshdata;
- (id)initWithFrame:(struct CGRect)arg1;

@end

