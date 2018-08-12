//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, MyJdHomeModel, UIButton, UILabel;
@protocol EditUserFileIconCellDelegate;

@interface UserInfoEditFileIconCell : UICollectionViewCell
{
    MyJdHomeModel *_model;
    JDImageView *_backgoundImageView;
    JDImageView *_iconImageView;
    UILabel *_titleLabel;
    long long _userFileIconCellType;
    long long _cellIndex;
    id <EditUserFileIconCellDelegate> _delegate;
    UIButton *_cameraButton;
    JDImageView *_cameraImageView;
}

@property(retain, nonatomic) JDImageView *cameraImageView; // @synthesize cameraImageView=_cameraImageView;
@property(retain, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(nonatomic) __weak id <EditUserFileIconCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long cellIndex; // @synthesize cellIndex=_cellIndex;
@property(nonatomic) long long userFileIconCellType; // @synthesize userFileIconCellType=_userFileIconCellType;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) JDImageView *backgoundImageView; // @synthesize backgoundImageView=_backgoundImageView;
@property(retain, nonatomic) MyJdHomeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)IsChinese:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

