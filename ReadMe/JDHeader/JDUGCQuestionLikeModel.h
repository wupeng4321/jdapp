//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDUGCQuestionLikeModel : NSObject
{
    long long _type;
    NSString *_contentId;
    long long _cancel;
    long long _status;
    long long _cnt;
    NSString *_cntStr;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *cntStr; // @synthesize cntStr=_cntStr;
@property(nonatomic) long long cnt; // @synthesize cnt=_cnt;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

