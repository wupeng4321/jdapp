//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillSingelKillBaseCell.h"

@class SecKillGroupBuyingRunOutButton, SecKillGroupBuyingTagView, UILabel;

@interface SecKillGroupBuyingRunOutCell : SecKillSingelKillBaseCell
{
    SecKillGroupBuyingTagView *_tagView;
    UILabel *_soldOutLabel;
    SecKillGroupBuyingRunOutButton *_runOutButton;
}

@property(retain, nonatomic) SecKillGroupBuyingRunOutButton *runOutButton; // @synthesize runOutButton=_runOutButton;
@property(retain, nonatomic) UILabel *soldOutLabel; // @synthesize soldOutLabel=_soldOutLabel;
@property(retain, nonatomic) SecKillGroupBuyingTagView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)fillData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

