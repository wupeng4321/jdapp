//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewAppCenterTableViewCell.h"

@class NewAppCenterContainerView, UIImageView;

@interface NewAppCenterRecommendCell : NewAppCenterTableViewCell
{
    NewAppCenterContainerView *_unitsContainerView;
    UIImageView *_recommendImageView;
}

@property(retain, nonatomic) UIImageView *recommendImageView; // @synthesize recommendImageView=_recommendImageView;
@property(retain, nonatomic) NewAppCenterContainerView *unitsContainerView; // @synthesize unitsContainerView=_unitsContainerView;
- (void).cxx_destruct;
- (void)tapOnePlace:(CDUnknownBlockType)arg1 preIndex:(id)arg2;
- (void)setupData:(id)arg1 cornerColor:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

