//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSAskInfoModel, NSString;

@interface FSProductListRightModel : NSObject
{
    _Bool _problemFeedback;
    int _currentPage;
    FSAskInfoModel *_askInfoModel;
    NSString *_myHistory;
}

@property(nonatomic) _Bool problemFeedback; // @synthesize problemFeedback=_problemFeedback;
@property(copy, nonatomic) NSString *myHistory; // @synthesize myHistory=_myHistory;
@property(retain, nonatomic) FSAskInfoModel *askInfoModel; // @synthesize askInfoModel=_askInfoModel;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;

@end
