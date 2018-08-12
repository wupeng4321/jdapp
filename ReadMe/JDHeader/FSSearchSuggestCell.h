//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, FSSearchSuggestModel, JDImageView, NSMutableArray, UIImageView, UILabel;

@interface FSSearchSuggestCell : UITableViewCell
{
    NSMutableArray *_buttonArray;
    UIImageView *_hotImageView;
    FSSearchSuggestModel *_item;
    CDUnknownBlockType _suggestTagSelected;
    UILabel *_keyWord;
    CALayer *_separatorlayer;
    JDImageView *_iconView;
    UILabel *_tailLabel;
    JDImageView *_promPicImageView;
}

@property(retain, nonatomic) JDImageView *promPicImageView; // @synthesize promPicImageView=_promPicImageView;
@property(readonly, nonatomic) UILabel *tailLabel; // @synthesize tailLabel=_tailLabel;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) CALayer *separatorlayer; // @synthesize separatorlayer=_separatorlayer;
@property(readonly, nonatomic) UILabel *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) CDUnknownBlockType suggestTagSelected; // @synthesize suggestTagSelected=_suggestTagSelected;
@property(retain, nonatomic) FSSearchSuggestModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tagButtonsConfigure;
- (void)btnAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
