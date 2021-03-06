//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface FSFilterExpandViewModel : NSObject
{
    _Bool _isDisableOpen;
    _Bool _isSingleSelected;
    _Bool _isOpen;
    _Bool _isLastDeliverAddress;
    unsigned long long _headerType;
    double _headerHeight;
    long long _closeCount;
    NSString *_expandId;
    NSString *_expandName;
    unsigned long long _expandDataType;
    unsigned long long _expandLayoutType;
    long long _detailLayoutOpenCount;
    double _expandNameWidth;
    double _expandSelectedNameWidth;
    long long _limitMaxCount;
    NSArray *_expandSubViewModelArray;
    NSArray *_letterViewModelArray;
    NSString *_expandSelectedName;
    NSMutableArray *_selectedIndexArray;
    NSMutableArray *_letterSelectedIndexPathArray;
}

+ (id)getExpandViewModelArrayWithFilterDeliverAddressModel:(id)arg1;
+ (id)getExpandViewModelArrayWithServiceArray:(id)arg1 allCategoryExpandViewModel:(id)arg2 nExpandArray:(id)arg3 filterDeliverViewModelArray:(id)arg4 expandPropertysArray:(id)arg5;
+ (id)getExpandViewModelArrayWithServiceArray:(id)arg1 allCategoryExpandViewModel:(id)arg2 nExpandArray:(id)arg3 filterDeliverViewModelArray:(id)arg4;
@property(nonatomic) _Bool isLastDeliverAddress; // @synthesize isLastDeliverAddress=_isLastDeliverAddress;
@property(retain, nonatomic) NSMutableArray *letterSelectedIndexPathArray; // @synthesize letterSelectedIndexPathArray=_letterSelectedIndexPathArray;
@property(retain, nonatomic) NSMutableArray *selectedIndexArray; // @synthesize selectedIndexArray=_selectedIndexArray;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) NSString *expandSelectedName; // @synthesize expandSelectedName=_expandSelectedName;
@property(nonatomic) _Bool isSingleSelected; // @synthesize isSingleSelected=_isSingleSelected;
@property(readonly, nonatomic) NSArray *letterViewModelArray; // @synthesize letterViewModelArray=_letterViewModelArray;
@property(readonly, nonatomic) NSArray *expandSubViewModelArray; // @synthesize expandSubViewModelArray=_expandSubViewModelArray;
@property(readonly, nonatomic) long long limitMaxCount; // @synthesize limitMaxCount=_limitMaxCount;
@property(readonly, nonatomic) double expandSelectedNameWidth; // @synthesize expandSelectedNameWidth=_expandSelectedNameWidth;
@property(readonly, nonatomic) double expandNameWidth; // @synthesize expandNameWidth=_expandNameWidth;
@property(readonly, nonatomic) long long detailLayoutOpenCount; // @synthesize detailLayoutOpenCount=_detailLayoutOpenCount;
@property(readonly, nonatomic) _Bool isDisableOpen; // @synthesize isDisableOpen=_isDisableOpen;
@property(readonly, nonatomic) unsigned long long expandLayoutType; // @synthesize expandLayoutType=_expandLayoutType;
@property(readonly, nonatomic) unsigned long long expandDataType; // @synthesize expandDataType=_expandDataType;
@property(readonly, copy, nonatomic) NSString *expandName; // @synthesize expandName=_expandName;
@property(readonly, copy, nonatomic) NSString *expandId; // @synthesize expandId=_expandId;
@property(nonatomic) long long closeCount; // @synthesize closeCount=_closeCount;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) unsigned long long headerType; // @synthesize headerType=_headerType;
- (void).cxx_destruct;
- (void)updateSelectedName;
- (void)allCategoryDetailConfirmUpdateSeletedDataWithSelectIndexPath:(id)arg1;
- (void)brandDetailConfirmUpdateSeletedDataWithSelectedArray:(id)arg1 sortType:(int)arg2 indexPath:(id)arg3;
- (void)cellDidClickWithIndexPath:(id)arg1;
- (id)initWithDeliverAddressSubModelArray:(id)arg1;
- (id)initWithNExpandModel:(id)arg1;
- (id)initWithCategoryModelArray:(id)arg1 pannelSortExposed:(id)arg2;
- (void)setWidthPropertys;
- (void)setDefaultPropertys;

@end

