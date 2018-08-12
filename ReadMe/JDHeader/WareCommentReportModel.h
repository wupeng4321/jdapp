//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface WareCommentReportModel : JDModel
{
    NSString *_createTime;
    NSString *_shareUrl;
    NSString *_recommendation;
    NSString *_skuId;
    NSString *_reportTitle;
    NSString *_guideMessage;
    NSString *_source;
    NSString *_position;
    NSString *_detailTitle;
    NSArray *_descriptions;
    NSString *_reportId;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *reportId; // @synthesize reportId=_reportId;
@property(retain, nonatomic) NSArray *descriptions; // @synthesize descriptions=_descriptions;
@property(copy, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) NSString *position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *guideMessage; // @synthesize guideMessage=_guideMessage;
@property(copy, nonatomic) NSString *reportTitle; // @synthesize reportTitle=_reportTitle;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *recommendation; // @synthesize recommendation=_recommendation;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (void)getHeight;
- (void)setDataWithDic:(id)arg1;

@end

