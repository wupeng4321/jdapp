//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreCouponBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface MyCouponModel : JDCoreCouponBaseModel
{
    _Bool _isExpand;
    _Bool _isCheck;
    _Bool _canShare;
    _Bool _canSell;
    _Bool _canOverlay;
    _Bool _canDelete;
    double _expandBottomHeight;
    NSString *_couponFaceDescription;
    long long _actualIncome;
    NSString *_sellId;
    NSDictionary *_extInfo;
    NSArray *_descriptionHighLight;
}

@property(retain, nonatomic) NSArray *descriptionHighLight; // @synthesize descriptionHighLight=_descriptionHighLight;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *sellId; // @synthesize sellId=_sellId;
@property(nonatomic) long long actualIncome; // @synthesize actualIncome=_actualIncome;
@property(copy, nonatomic) NSString *couponFaceDescription; // @synthesize couponFaceDescription=_couponFaceDescription;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) _Bool canOverlay; // @synthesize canOverlay=_canOverlay;
@property(nonatomic) _Bool canSell; // @synthesize canSell=_canSell;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
@property(nonatomic) double expandBottomHeight; // @synthesize expandBottomHeight=_expandBottomHeight;
@property(nonatomic) _Bool isCheck; // @synthesize isCheck=_isCheck;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

