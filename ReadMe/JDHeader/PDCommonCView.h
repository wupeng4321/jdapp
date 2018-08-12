//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

@class JDImageView, NSDictionary, NSString, NewProductModel, PDCommonACPopView, PDFloorConfigInfoModel, UILabel;

@interface PDCommonCView : PDFloorBaseView
{
    NewProductModel *_pdModel;
    NSString *_floorModelBId;
    JDImageView *_iconV;
    JDImageView *_tailIconV;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_contentLabel2;
    PDFloorConfigInfoModel *_model;
    NSString *_jumpUrl;
    long long _jumpType;
    PDCommonACPopView *_commonACPopView;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) PDCommonACPopView *commonACPopView; // @synthesize commonACPopView=_commonACPopView;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) PDFloorConfigInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *contentLabel2; // @synthesize contentLabel2=_contentLabel2;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *tailIconV; // @synthesize tailIconV=_tailIconV;
@property(retain, nonatomic) JDImageView *iconV; // @synthesize iconV=_iconV;
@property(copy, nonatomic) NSString *floorModelBId; // @synthesize floorModelBId=_floorModelBId;
@property(retain, nonatomic) NewProductModel *pdModel; // @synthesize pdModel=_pdModel;
- (void).cxx_destruct;
- (void)renderUI;
- (void)setTailIconImageUrl:(id)arg1;
- (void)setIconImageUrl:(id)arg1;
- (void)configViewByModel:(id)arg1 withData:(id)arg2;
- (void)resetState;
- (void)jump:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

