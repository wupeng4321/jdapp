//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneShareModel : JDModel
{
    NSString *_imgUrl;
    NSString *_title;
    NSString *_shareUrl;
    NSString *_strShareContent;
}

@property(copy, nonatomic) NSString *strShareContent; // @synthesize strShareContent=_strShareContent;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
