//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCShopCartClearGroupModel : NSObject
{
    NSArray *_groupDetails;
    NSString *_groupId;
    NSString *_groupName;
    long long _groupType;
    NSString *_imageDomain;
}

+ (id)objectWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSArray *groupDetails; // @synthesize groupDetails=_groupDetails;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long selectCount;
@property(readonly, nonatomic) _Bool selected;
- (void)setDataWithDictionary:(id)arg1;

@end

