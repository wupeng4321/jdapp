//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDButton, SCShopCartClearGroupModel, UILabel;
@protocol SCShopCartClearCartHeaderCellDelegate;

@interface SCShopCartClearCartHeaderCell : UICollectionViewCell
{
    struct CGRect _titieRect;
    UILabel *_titleLabel;
    SCShopCartClearGroupModel *_groupModel;
    id <SCShopCartClearCartHeaderCellDelegate> _delegate;
    JDButton *_checkBox;
}

@property(retain, nonatomic) JDButton *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) __weak id <SCShopCartClearCartHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCShopCartClearGroupModel *groupModel; // @synthesize groupModel=_groupModel;
- (void).cxx_destruct;
- (void)itemClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
