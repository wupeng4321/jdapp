//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COCheckoutOrderWareGroupItemView, NSString, UIView;

@interface COCheckoutOrderWareGroupCell : UITableViewCell
{
    _Bool _isLastWare;
    _Bool _isShowPlusPirce;
    CDUnknownBlockType _needReload;
    UIView *_lineView;
    NSString *_pageParam;
    COCheckoutOrderWareGroupItemView *_itemView;
    UIView *_bottomLineView;
}

+ (double)heightForModel:(id)arg1;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) COCheckoutOrderWareGroupItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) _Bool isShowPlusPirce; // @synthesize isShowPlusPirce=_isShowPlusPirce;
@property(retain, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(nonatomic) _Bool isLastWare; // @synthesize isLastWare=_isLastWare;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(copy, nonatomic) CDUnknownBlockType needReload; // @synthesize needReload=_needReload;
- (void).cxx_destruct;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (void)layoutSubviews;
- (void)setWareModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

