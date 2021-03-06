//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

@class IALogisticsProgressModel, NSMutableArray, UIImage, UIView;

@interface IALogisticsProgressCell : IAMainSessionBaseCell
{
    UIView *_bgView;
    UIView *_logisticsProgressView;
    NSMutableArray *_dataSource;
    UIImage *_defaultImg;
    IALogisticsProgressModel *_logisticsProgressModel;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) IALogisticsProgressModel *logisticsProgressModel; // @synthesize logisticsProgressModel=_logisticsProgressModel;
@property(retain, nonatomic) UIImage *defaultImg; // @synthesize defaultImg=_defaultImg;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *logisticsProgressView; // @synthesize logisticsProgressView=_logisticsProgressView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)bgViewTapClick:(id)arg1;
- (id)orderMessageItemView:(id)arg1 withIsFirstDict:(_Bool)arg2 withIsLastDict:(_Bool)arg3;
- (id)headView:(id)arg1;
- (void)configDelegate:(id)arg1;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

