//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, UIImageView, UILabel;

@interface FeedBackRecentOptimizeTableHeaderView : UIView
{
    NSString *_titleStr;
    NSString *_backImageURL;
    JDImageView *_backgroundImageView;
    UIImageView *_maskImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) JDImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *backImageURL; // @synthesize backImageURL=_backImageURL;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

