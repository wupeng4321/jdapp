//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FSFilterExpandSubViewModel : NSObject
{
    _Bool _isChecked;
    NSString *_expandSubId;
    NSString *_expandSubName;
    NSString *_cid;
    NSString *_filed;
}

@property(copy, nonatomic) NSString *filed; // @synthesize filed=_filed;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(copy, nonatomic) NSString *expandSubName; // @synthesize expandSubName=_expandSubName;
@property(copy, nonatomic) NSString *expandSubId; // @synthesize expandSubId=_expandSubId;
- (void).cxx_destruct;

@end

