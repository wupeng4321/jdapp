//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "TDPSceneModelCellProtocol-Protocol.h"

@class NSString, TDPSceneModelItem, UIImageView, UILabel;

@interface TDPModelCell : UICollectionViewCell <TDPSceneModelCellProtocol>
{
    int _width;
    _Bool _modelSelected;
    TDPSceneModelItem *_modelItem;
    UIImageView *_modelImageView;
    UIImageView *_selectedImageView;
    UIImageView *_maskImageView;
    UIImageView *_statusImageView;
    UIImageView *_maskLabelImageView;
    UILabel *_maskLabel;
    UILabel *_maskViewLabel;
    UIImageView *_blurView;
}

+ (id)selectImage;
+ (id)maskLabelImage;
+ (id)maskImage;
@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UILabel *maskViewLabel; // @synthesize maskViewLabel=_maskViewLabel;
@property(retain, nonatomic) UILabel *maskLabel; // @synthesize maskLabel=_maskLabel;
@property(retain, nonatomic) UIImageView *maskLabelImageView; // @synthesize maskLabelImageView=_maskLabelImageView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UIImageView *modelImageView; // @synthesize modelImageView=_modelImageView;
@property(nonatomic) _Bool modelSelected; // @synthesize modelSelected=_modelSelected;
@property(retain, nonatomic) TDPSceneModelItem *modelItem; // @synthesize modelItem=_modelItem;
- (void).cxx_destruct;
- (void)updateUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateProgress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

