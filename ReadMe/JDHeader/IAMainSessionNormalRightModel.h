//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionModel.h"

@interface IAMainSessionNormalRightModel : IAMainSessionModel
{
    _Bool _isShowTime;
    _Bool _isShowTopSpacing;
    double _ts;
    struct CGSize _contentSize;
}

+ (id)modelWithMessage:(id)arg1;
+ (id)modelWithDic:(id)arg1;
@property(nonatomic) double ts; // @synthesize ts=_ts;
@property(nonatomic) _Bool isShowTopSpacing; // @synthesize isShowTopSpacing=_isShowTopSpacing;
@property(nonatomic) _Bool isShowTime; // @synthesize isShowTime=_isShowTime;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (double)modelInterval;
- (double)cellHeight;
- (id)cellClassName;
- (_Bool)upateShowTimeWithLastModel:(id)arg1;

@end

