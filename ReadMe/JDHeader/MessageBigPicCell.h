//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageCenterCell.h"

@class UIImageView, UILabel;

@interface MessageBigPicCell : MessageCenterCell
{
    UIImageView *_goodsView;
    UILabel *_title;
    UILabel *_goodsContent;
    UIImageView *_expireMaskView;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *expireMaskView; // @synthesize expireMaskView=_expireMaskView;
@property(retain, nonatomic) UILabel *goodsContent; // @synthesize goodsContent=_goodsContent;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *goodsView; // @synthesize goodsView=_goodsView;
- (void).cxx_destruct;
- (void)validateActivity;
- (void)setWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

