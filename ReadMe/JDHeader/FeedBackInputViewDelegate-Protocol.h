//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedBackInputView, MyJdHomeModel;

@protocol FeedBackInputViewDelegate <NSObject>
- (void)voiceInputEnd;
- (void)imagesListViewTapped;
- (void)feedBackInputView:(FeedBackInputView *)arg1 speechRecognizerDidChangeFrame:(double)arg2 isUp:(_Bool)arg3;
- (void)voiceInputBegin;
- (void)inputViewTapped;
- (void)titleSelectedWithModel:(MyJdHomeModel *)arg1;
@end

