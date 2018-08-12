//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class CommuneProductInfoModel, CommuneShareModel, NSMutableArray, NSString;

@interface CommuneListModel : JDModel
{
    _Bool _shareSwitch;
    _Bool _hasMoreSwitch;
    _Bool _hasMore;
    CommuneProductInfoModel *_productInfo;
    NSMutableArray *_questionList;
    NSString *_noticeMsg;
    NSString *_timeStamp;
    NSString *_categoryId;
    CommuneShareModel *_shareInfo;
    NSString *_code;
    NSString *_testId;
}

@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool hasMoreSwitch; // @synthesize hasMoreSwitch=_hasMoreSwitch;
@property(nonatomic) _Bool shareSwitch; // @synthesize shareSwitch=_shareSwitch;
@property(retain, nonatomic) CommuneShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *noticeMsg; // @synthesize noticeMsg=_noticeMsg;
@property(retain, nonatomic) NSMutableArray *questionList; // @synthesize questionList=_questionList;
@property(retain, nonatomic) CommuneProductInfoModel *productInfo; // @synthesize productInfo=_productInfo;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
