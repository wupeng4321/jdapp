//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIImageView, UILabel;

@interface TTTDetailList1R2VUnitAuthorOrPageNumView : UIView
{
    JDImageView *_authorImageView;
    UILabel *_authorLabel;
    UIImageView *_eyeImageView;
    UILabel *_pageNumLabel;
}

@property(retain, nonatomic) UILabel *pageNumLabel; // @synthesize pageNumLabel=_pageNumLabel;
@property(retain, nonatomic) UIImageView *eyeImageView; // @synthesize eyeImageView=_eyeImageView;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) JDImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
- (void).cxx_destruct;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

