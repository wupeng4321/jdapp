//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorViewProtocol-Protocol.h"

@class CommentInfoListModel, NSMutableArray, NSString, UIButton;

@protocol PDCommentFloorViewProtocol <PDFloorViewProtocol>
- (void)innerRateViewTapped;
- (void)stopPlayingCommentVideo;
- (void)wareBRateViewButtonTapped:(UIButton *)arg1;
- (void)commentCardTypeImageTapped:(long long)arg1 withCommentArray:(NSMutableArray *)arg2;
- (void)imageTapped:(long long)arg1 withModel:(CommentInfoListModel *)arg2 index:(NSString *)arg3;
@end

