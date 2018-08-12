//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray;
@protocol PhotoListCellDelegate;

@interface UserInfoPhotoListCell : UITableViewCell
{
    unsigned long long _numOfSection;
    NSArray *_assetsArray;
    NSMutableArray *_viewArray;
    id <PhotoListCellDelegate> _delegate;
}

@property(nonatomic) __weak id <PhotoListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) NSArray *assetsArray; // @synthesize assetsArray=_assetsArray;
@property(nonatomic) unsigned long long numOfSection; // @synthesize numOfSection=_numOfSection;
- (void).cxx_destruct;
- (void)configUI;
- (void)imageViewDidSelected:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

