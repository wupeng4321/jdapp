//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, Result;

@protocol FittingViewDelegate <NSObject>

@optional
- (void)OnOccurError:(Result *)arg1;
- (void)OnResultCustomFace:(Result *)arg1;
- (void)OnClothChange:(NSArray *)arg1;
- (void)OnFinishAsyncWork:(void (^)(void))arg1;
- (void)OnStartAsyncWork;
@end

