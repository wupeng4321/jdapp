//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseCell.h"

@class SSSSGBTimeTipsModel, UILabel;

@interface SSSSGBTimeTipsTableViewCell : SecKillBaseCell
{
    UILabel *_senceLabel;
    SSSSGBTimeTipsModel *_timeTipsModel;
}

@property(retain, nonatomic) SSSSGBTimeTipsModel *timeTipsModel; // @synthesize timeTipsModel=_timeTipsModel;
@property(retain, nonatomic) UILabel *senceLabel; // @synthesize senceLabel=_senceLabel;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

