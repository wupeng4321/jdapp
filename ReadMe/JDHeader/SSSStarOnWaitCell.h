//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillSingelKillBaseCell.h"

@class SecKillOnWaitButton, UIImageView, UILabel;

@interface SSSStarOnWaitCell : SecKillSingelKillBaseCell
{
    UIImageView *_tagView;
    SecKillOnWaitButton *_alertButton;
    UILabel *_lblStarWord;
}

@property(retain, nonatomic) UILabel *lblStarWord; // @synthesize lblStarWord=_lblStarWord;
@property(retain, nonatomic) SecKillOnWaitButton *alertButton; // @synthesize alertButton=_alertButton;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

