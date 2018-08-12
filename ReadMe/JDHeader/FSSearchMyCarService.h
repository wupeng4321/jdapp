//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSSearchIdPlusRequest, FSSearchMyCarModel, NSMutableArray, NSString;

@interface FSSearchMyCarService : NSObject
{
    NSMutableArray *_myCarModels;
    _Bool _idPlusBubble;
    _Bool _isEncrypt;
    NSString *_exportedName;
    NSString *_idPlusName;
    NSString *_loadingTip;
    NSString *_loadFailedTip;
    NSString *_hcCid3;
    NSString *_noneTip;
    NSString *_addTip;
    NSString *_manageTip;
    long long _maxItems;
    NSString *_addUrl;
    NSString *_manageUrl;
    FSSearchMyCarModel *_selectedCar;
    FSSearchMyCarModel *_oldSelectedCar;
    CDUnknownBlockType _loginSuccBlock;
    FSSearchIdPlusRequest *_idPlusDao;
}

@property(nonatomic) _Bool isEncrypt; // @synthesize isEncrypt=_isEncrypt;
@property(retain, nonatomic) FSSearchIdPlusRequest *idPlusDao; // @synthesize idPlusDao=_idPlusDao;
@property(copy, nonatomic) CDUnknownBlockType loginSuccBlock; // @synthesize loginSuccBlock=_loginSuccBlock;
@property(retain, nonatomic) FSSearchMyCarModel *oldSelectedCar; // @synthesize oldSelectedCar=_oldSelectedCar;
@property(retain, nonatomic) FSSearchMyCarModel *selectedCar; // @synthesize selectedCar=_selectedCar;
@property(readonly, copy, nonatomic) NSString *manageUrl; // @synthesize manageUrl=_manageUrl;
@property(readonly, copy, nonatomic) NSString *addUrl; // @synthesize addUrl=_addUrl;
@property(readonly, nonatomic) long long maxItems; // @synthesize maxItems=_maxItems;
@property(readonly, copy, nonatomic) NSString *manageTip; // @synthesize manageTip=_manageTip;
@property(readonly, copy, nonatomic) NSString *addTip; // @synthesize addTip=_addTip;
@property(readonly, copy, nonatomic) NSString *noneTip; // @synthesize noneTip=_noneTip;
@property(readonly, nonatomic) _Bool idPlusBubble; // @synthesize idPlusBubble=_idPlusBubble;
@property(readonly, copy, nonatomic) NSString *hcCid3; // @synthesize hcCid3=_hcCid3;
@property(readonly, copy, nonatomic) NSString *loadFailedTip; // @synthesize loadFailedTip=_loadFailedTip;
@property(readonly, copy, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
@property(readonly, copy, nonatomic) NSString *idPlusName; // @synthesize idPlusName=_idPlusName;
@property(readonly, copy, nonatomic) NSString *exportedName; // @synthesize exportedName=_exportedName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (long long)getIDPlusType;
- (id)getIDPlusFilterDecodeInfo;
- (id)getIDPlusFilterInfo;
- (id)getSelectedIndexSet;
- (void)clearLocalMyCarInfo;
- (_Bool)isManagerCarDisabled;
- (_Bool)isContainsModel:(id)arg1;
- (id)getMyCarList;
- (void)addCar:(id)arg1;
- (void)syncMyCarFromServerWithView:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)parseMyCarInfoFromServer:(id)arg1;
- (void)clearEntryInfo;
- (void)updateEntryInfo:(id)arg1 idPlusName:(id)arg2 loadingTip:(id)arg3 loadFailedTip:(id)arg4 hcCid3:(id)arg5 idPlusBubble:(_Bool)arg6;
- (void)loginWithSuccess:(CDUnknownBlockType)arg1;
- (_Bool)isLogined;
- (void)loginSuccess;

@end
