//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneCategoryWareInfoModel : JDModel
{
    NSString *_index;
    NSString *_wareId;
    NSString *_wareURL;
    NSString *_wareName;
}

@property(copy, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(copy, nonatomic) NSString *wareURL; // @synthesize wareURL=_wareURL;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(copy, nonatomic) NSString *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
