//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDBPGroupBuyModel : NSObject
{
    NSString *_actParticipantNum;
    NSString *_actParticipantNumLeft;
    NSString *_actParticipantNumRight;
    NSArray *_cantuanInfo;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *cantuanInfo; // @synthesize cantuanInfo=_cantuanInfo;
@property(copy, nonatomic) NSString *actParticipantNumRight; // @synthesize actParticipantNumRight=_actParticipantNumRight;
@property(copy, nonatomic) NSString *actParticipantNumLeft; // @synthesize actParticipantNumLeft=_actParticipantNumLeft;
@property(copy, nonatomic) NSString *actParticipantNum; // @synthesize actParticipantNum=_actParticipantNum;
- (void).cxx_destruct;

@end

