//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface JDPRResultCtrlModel : NSObject
{
    NSString *_msgTitle;
    NSString *_msgContent;
    NSArray *_controlList;
    NSString *_errorCode;
}

@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSArray *controlList; // @synthesize controlList=_controlList;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(copy, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
- (void).cxx_destruct;
- (void)setDataWithResultCtrlDict:(id)arg1;

@end
