//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface FSFilterExposedButtonModel : JDModel
{
    _Bool _selected;
    long long _index;
    unsigned long long _buttonType;
    unsigned long long _logicType;
    NSString *_bgNormalImageName;
    NSString *_bgSelectedImageName;
    NSString *_imageURL;
    NSString *_selectedImageURL;
    NSString *_text;
    long long _limitMaxCount;
    NSString *_promotionId;
    NSString *_promotionType;
    NSString *_expandSortName;
    NSArray *_filterItems;
    NSString *_maidianStr;
    NSString *_bodyKey;
}

+ (id)orginDataChangToLayoutDataWithExposedModel:(id)arg1 sortExposedArray:(id)arg2 expandViewModelArray:(id)arg3 isPromotionChecked:(_Bool)arg4 idPlusService:(id)arg5 filterInterface:(id)arg6;
@property(copy, nonatomic) NSString *bodyKey; // @synthesize bodyKey=_bodyKey;
@property(copy, nonatomic) NSString *maidianStr; // @synthesize maidianStr=_maidianStr;
@property(retain, nonatomic) NSArray *filterItems; // @synthesize filterItems=_filterItems;
@property(copy, nonatomic) NSString *expandSortName; // @synthesize expandSortName=_expandSortName;
@property(copy, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(nonatomic) long long limitMaxCount; // @synthesize limitMaxCount=_limitMaxCount;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *selectedImageURL; // @synthesize selectedImageURL=_selectedImageURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *bgSelectedImageName; // @synthesize bgSelectedImageName=_bgSelectedImageName;
@property(copy, nonatomic) NSString *bgNormalImageName; // @synthesize bgNormalImageName=_bgNormalImageName;
@property(nonatomic) unsigned long long logicType; // @synthesize logicType=_logicType;
@property(nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property(nonatomic) long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)init;

@end

