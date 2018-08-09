//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface FinderAttentionModel : NSObject <NSSecureCoding>
{
    NSNumber *_currentPage;
    NSMutableArray *_itemList;
    NSNumber *_totalPage;
    NSString *_updateCount;
    NSNumber *_type;
    NSString *_typeName;
    NSNumber *_visiteTime;
    NSString *_showMessage;
    NSString *_offSet;
    NSString *_anOtherOffSet;
    NSString *_releaseTime;
    NSNumber *_pageSize;
    NSString *_testID;
    NSArray *_myFollowAuth;
    NSMutableArray *_authorPicArr;
}

+ (_Bool)supportsSecureCoding;
+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSMutableArray *authorPicArr; // @synthesize authorPicArr=_authorPicArr;
@property(retain, nonatomic) NSArray *myFollowAuth; // @synthesize myFollowAuth=_myFollowAuth;
@property(copy, nonatomic) NSString *testID; // @synthesize testID=_testID;
@property(retain, nonatomic) NSNumber *pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *releaseTime; // @synthesize releaseTime=_releaseTime;
@property(copy, nonatomic) NSString *anOtherOffSet; // @synthesize anOtherOffSet=_anOtherOffSet;
@property(copy, nonatomic) NSString *offSet; // @synthesize offSet=_offSet;
@property(copy, nonatomic) NSString *showMessage; // @synthesize showMessage=_showMessage;
@property(retain, nonatomic) NSNumber *visiteTime; // @synthesize visiteTime=_visiteTime;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *totalPage; // @synthesize totalPage=_totalPage;
@property(retain, nonatomic) NSMutableArray *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSNumber *currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateListData:(id)arg1 attentionListType:(long long)arg2;
- (id)processHeaderDataWithItemList;
- (Class)getClassWithappearance:(id)arg1;
- (void)keyValuesDidFinishConvertingToObject;
- (void)dealloc;

@end

