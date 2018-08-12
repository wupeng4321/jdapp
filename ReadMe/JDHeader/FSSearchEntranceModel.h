//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;

@interface FSSearchEntranceModel : NSObject
{
    _Bool _isVirtualCatId;
    _Bool _isWorldBuy;
    _Bool _isChannalWorldBuy;
    _Bool _isChannalJDSuperMarket;
    _Bool _hiddenAudioButton;
    _Bool _isFromCategoryCms;
    _Bool _isAudioSearch;
    NSString *_fullId;
    NSArray *_categoryArray;
    NSArray *_expandPropertysArray;
    NSString *_cid;
    NSString *_name;
    NSString *_level1Cid;
    NSString *_keyWord;
    NSString *_tipUrlLink;
    NSString *_fromAuthorDetail;
    NSString *_fromPublisherDetail;
    NSString *_level;
    NSString *_cids;
    NSString *_channelName;
    NSString *_channelTitle;
    NSDictionary *_channelWordDic;
    NSString *_suggestABVersion;
    NSDictionary *_boxWord;
    NSString *_searchSource;
    NSString *_promotionId;
    NSString *_promotionType;
    NSString *_selectedShopTab;
    NSString *_searchFilterType;
    NSString *_brandIds;
    NSString *_multiShopIds;
    NSArray *_filterConfigKeys;
    NSArray *_bodyMaps;
    NSArray *_clearBodyMaps;
    NSAttributedString *_backBrowseBarAttrText;
    NSString *_backBrowseImageString;
    NSString *_sceneId;
    NSString *_killProductIndex;
}

@property(copy, nonatomic) NSString *killProductIndex; // @synthesize killProductIndex=_killProductIndex;
@property(copy, nonatomic) NSString *sceneId; // @synthesize sceneId=_sceneId;
@property(copy, nonatomic) NSString *backBrowseImageString; // @synthesize backBrowseImageString=_backBrowseImageString;
@property(copy, nonatomic) NSAttributedString *backBrowseBarAttrText; // @synthesize backBrowseBarAttrText=_backBrowseBarAttrText;
@property(retain, nonatomic) NSArray *clearBodyMaps; // @synthesize clearBodyMaps=_clearBodyMaps;
@property(retain, nonatomic) NSArray *bodyMaps; // @synthesize bodyMaps=_bodyMaps;
@property(retain, nonatomic) NSArray *filterConfigKeys; // @synthesize filterConfigKeys=_filterConfigKeys;
@property(copy, nonatomic) NSString *multiShopIds; // @synthesize multiShopIds=_multiShopIds;
@property(copy, nonatomic) NSString *brandIds; // @synthesize brandIds=_brandIds;
@property(copy, nonatomic) NSString *searchFilterType; // @synthesize searchFilterType=_searchFilterType;
@property(nonatomic) _Bool isAudioSearch; // @synthesize isAudioSearch=_isAudioSearch;
@property(nonatomic) _Bool isFromCategoryCms; // @synthesize isFromCategoryCms=_isFromCategoryCms;
@property(copy, nonatomic) NSString *selectedShopTab; // @synthesize selectedShopTab=_selectedShopTab;
@property(copy, nonatomic) NSString *promotionType; // @synthesize promotionType=_promotionType;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(copy, nonatomic) NSString *searchSource; // @synthesize searchSource=_searchSource;
@property(retain, nonatomic) NSDictionary *boxWord; // @synthesize boxWord=_boxWord;
@property(copy, nonatomic) NSString *suggestABVersion; // @synthesize suggestABVersion=_suggestABVersion;
@property(nonatomic) _Bool hiddenAudioButton; // @synthesize hiddenAudioButton=_hiddenAudioButton;
@property(retain, nonatomic) NSDictionary *channelWordDic; // @synthesize channelWordDic=_channelWordDic;
@property(nonatomic) _Bool isChannalJDSuperMarket; // @synthesize isChannalJDSuperMarket=_isChannalJDSuperMarket;
@property(nonatomic) _Bool isChannalWorldBuy; // @synthesize isChannalWorldBuy=_isChannalWorldBuy;
@property(copy, nonatomic) NSString *channelTitle; // @synthesize channelTitle=_channelTitle;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *cids; // @synthesize cids=_cids;
@property(copy, nonatomic) NSString *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *fromPublisherDetail; // @synthesize fromPublisherDetail=_fromPublisherDetail;
@property(copy, nonatomic) NSString *fromAuthorDetail; // @synthesize fromAuthorDetail=_fromAuthorDetail;
@property(copy, nonatomic) NSString *tipUrlLink; // @synthesize tipUrlLink=_tipUrlLink;
@property(nonatomic) _Bool isWorldBuy; // @synthesize isWorldBuy=_isWorldBuy;
@property(copy, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) NSString *level1Cid; // @synthesize level1Cid=_level1Cid;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isVirtualCatId; // @synthesize isVirtualCatId=_isVirtualCatId;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSArray *expandPropertysArray; // @synthesize expandPropertysArray=_expandPropertysArray;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(copy, nonatomic) NSString *fullId; // @synthesize fullId=_fullId;
- (void).cxx_destruct;
- (_Bool)isYesWithParam:(id)arg1;
- (id)initWithParams:(id)arg1;

@end
