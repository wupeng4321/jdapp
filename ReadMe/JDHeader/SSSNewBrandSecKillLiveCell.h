//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

@class JDImageView, SSSNewBrandSecKillModel;

@interface SSSNewBrandSecKillLiveCell : SecKillBaseCell
{
    SSSNewBrandSecKillModel *_model;
    JDImageView *_ivLive;
    JDImageView *_ivLine;
}

@property(retain, nonatomic) JDImageView *ivLine; // @synthesize ivLine=_ivLine;
@property(retain, nonatomic) JDImageView *ivLive; // @synthesize ivLive=_ivLive;
@property(retain, nonatomic) SSSNewBrandSecKillModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)prepare;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
