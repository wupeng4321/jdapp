//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSArray, NSString;

@interface JDPResultControlModel : JDPayModel
{
    NSString *_msgTitle;
    NSString *_msgContent;
    NSArray *_controllerArray;
    NSString *_errorCode;
}

@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(copy, nonatomic) NSArray *controllerArray; // @synthesize controllerArray=_controllerArray;
@property(copy, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(copy, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
- (void).cxx_destruct;

@end

