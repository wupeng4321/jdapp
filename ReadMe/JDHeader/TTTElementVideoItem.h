//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TTTElementVideoModel, TTTVideoCoverView;

@interface TTTElementVideoItem : UICollectionViewCell
{
    CDUnknownBlockType _isPlaying;
    CDUnknownBlockType _isPlayEnd;
    long long _videoType;
    TTTElementVideoModel *_videoModel;
    TTTVideoCoverView *_videoCoverView;
}

@property(retain, nonatomic) TTTVideoCoverView *videoCoverView; // @synthesize videoCoverView=_videoCoverView;
@property(retain, nonatomic) TTTElementVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) CDUnknownBlockType isPlayEnd; // @synthesize isPlayEnd=_isPlayEnd;
@property(copy, nonatomic) CDUnknownBlockType isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)postNoti;
- (void)p_endPlay;
- (void)play:(_Bool)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)shouldWifiToPlay;
- (void)readytoPlay;
- (void)bindDataWithModel:(id)arg1;
- (void)videoDidEndDisplaying;
- (void)videoWillDisplay;
- (void)buryDataWithVideoGroup;
- (void)buryDataWithPlayEnd;
- (void)buryDataWithLoadUrl;
- (id)initWithFrame:(struct CGRect)arg1;

@end

