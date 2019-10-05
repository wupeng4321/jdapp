//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, JDImageView, JDShopLiveFloorAniThumbView, JDShopLiveFloorStatusView, JDShopVideoModel, NSString, UIImageView, UILabel;

@interface JDNativeShopLiveView : UIView
{
    CDUnknownBlockType _clickBlock;
    NSString *_shopId;
    NSString *_venderId;
    NSString *_uid;
    JDShopVideoModel *_videoModel;
    JDImageView *_mainImg;
    JDShopLiveFloorStatusView *_floorStatusView;
    JDButton *_remindBtn;
    JDShopLiveFloorAniThumbView *_thumbAniView;
    UIImageView *_playBackIcon;
    UILabel *_titleLabel;
    UIImageView *_titleBgView;
}

@property(retain, nonatomic) UIImageView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *playBackIcon; // @synthesize playBackIcon=_playBackIcon;
@property(retain, nonatomic) JDShopLiveFloorAniThumbView *thumbAniView; // @synthesize thumbAniView=_thumbAniView;
@property(retain, nonatomic) JDButton *remindBtn; // @synthesize remindBtn=_remindBtn;
@property(retain, nonatomic) JDShopLiveFloorStatusView *floorStatusView; // @synthesize floorStatusView=_floorStatusView;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) JDShopVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)tapLive;
- (void)touchRemindButton;
- (void)cancelRemindLiveId:(id)arg1 title:(id)arg2 publishTime:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (void)setRemindLiveId:(id)arg1 title:(id)arg2 publishTime:(id)arg3 finish:(CDUnknownBlockType)arg4;
- (_Bool)hasSetRemind:(id)arg1 publishTime:(id)arg2;
- (void)setRemindBtnStatus:(_Bool)arg1;
- (void)setLiveData:(id)arg1 uid:(id)arg2;
- (void)nativeShopLiveViewEndDisplay;
- (void)nativeShopLiveViewWillDisplay;
- (id)initWithFrame:(struct CGRect)arg1;

@end
