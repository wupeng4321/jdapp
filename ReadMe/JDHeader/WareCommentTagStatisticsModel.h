//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface WareCommentTagStatisticsModel : JDModel
{
    _Bool _canBeFiltered;
    NSString *_tagId;
    NSString *_name;
    NSString *_count;
    NSString *_type;
    NSString *_stand;
    NSString *_ckeKeyWordBury;
}

@property(copy, nonatomic) NSString *ckeKeyWordBury; // @synthesize ckeKeyWordBury=_ckeKeyWordBury;
@property(copy, nonatomic) NSString *stand; // @synthesize stand=_stand;
@property(nonatomic) _Bool canBeFiltered; // @synthesize canBeFiltered=_canBeFiltered;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

