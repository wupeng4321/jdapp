//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSExchangePromModel, NSString;

@interface FSExchangePromViewModel : NSObject
{
    _Bool _canClicked;
    _Bool _isSelected;
    _Bool _priceIconVisible;
    _Bool _isNoPrice;
    _Bool _crossPriceVisible;
    _Bool _separatorLineVisible;
    _Bool _forceSelected;
    FSExchangePromModel *_dataModel;
    unsigned long long _goodsType;
    long long _sourceIndex;
    NSString *_disableClickTipStr;
    double _cellHeight;
    double _selectBtnWidth;
    double _pricePosLeft;
    double _pricePosBottom;
    NSString *_mainPrice;
    NSString *_crossPrice;
    NSString *_pageParam;
    long long _totalCount;
    struct CGRect _imgFrame;
    struct CGRect _titleFrame;
    struct CGRect _separatorLineFrame;
}

@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) _Bool forceSelected; // @synthesize forceSelected=_forceSelected;
@property(copy, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(readonly, nonatomic) struct CGRect separatorLineFrame; // @synthesize separatorLineFrame=_separatorLineFrame;
@property(readonly, nonatomic) _Bool separatorLineVisible; // @synthesize separatorLineVisible=_separatorLineVisible;
@property(readonly, copy, nonatomic) NSString *crossPrice; // @synthesize crossPrice=_crossPrice;
@property(readonly, nonatomic) _Bool crossPriceVisible; // @synthesize crossPriceVisible=_crossPriceVisible;
@property(readonly, nonatomic) _Bool isNoPrice; // @synthesize isNoPrice=_isNoPrice;
@property(nonatomic) _Bool priceIconVisible; // @synthesize priceIconVisible=_priceIconVisible;
@property(readonly, copy, nonatomic) NSString *mainPrice; // @synthesize mainPrice=_mainPrice;
@property(readonly, nonatomic) double pricePosBottom; // @synthesize pricePosBottom=_pricePosBottom;
@property(readonly, nonatomic) double pricePosLeft; // @synthesize pricePosLeft=_pricePosLeft;
@property(readonly, nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(readonly, nonatomic) struct CGRect imgFrame; // @synthesize imgFrame=_imgFrame;
@property(readonly, nonatomic) double selectBtnWidth; // @synthesize selectBtnWidth=_selectBtnWidth;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *disableClickTipStr; // @synthesize disableClickTipStr=_disableClickTipStr;
@property(readonly, nonatomic) _Bool canClicked; // @synthesize canClicked=_canClicked;
@property(readonly, nonatomic) long long sourceIndex; // @synthesize sourceIndex=_sourceIndex;
@property(readonly, nonatomic) unsigned long long goodsType; // @synthesize goodsType=_goodsType;
@property(readonly, nonatomic) FSExchangePromModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)layoutWithOptional;
- (void)layoutWithMain;
- (id)initWithDataModel:(id)arg1 goodsType:(unsigned long long)arg2 index:(long long)arg3 totalCount:(long long)arg4;

@end

