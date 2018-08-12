//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, UILabel, UIView, WanderShopCircleDetailedListModel;

@interface WanderShopCircleDetailListView : UITableViewCell
{
    WanderShopCircleDetailedListModel *_listModel;
    UILabel *_titleLabel;
    UIView *_imagesView;
    UILabel *_itemCount;
    UIView *_itemCountView;
    JDImageView *_iconView;
    UIView *_backgroundColorView;
    UIView *_bottomLine;
    JDImageView *_headImage;
    UILabel *_nickNameLabel;
    UILabel *_desLabel;
    UILabel *_tagLabel;
    UILabel *_pageViewLabel;
}

@property(retain, nonatomic) UILabel *pageViewLabel; // @synthesize pageViewLabel=_pageViewLabel;
@property(retain, nonatomic) UILabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) UILabel *desLabel; // @synthesize desLabel=_desLabel;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) JDImageView *headImage; // @synthesize headImage=_headImage;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *backgroundColorView; // @synthesize backgroundColorView=_backgroundColorView;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *itemCountView; // @synthesize itemCountView=_itemCountView;
@property(retain, nonatomic) UILabel *itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) UIView *imagesView; // @synthesize imagesView=_imagesView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WanderShopCircleDetailedListModel *listModel; // @synthesize listModel=_listModel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

