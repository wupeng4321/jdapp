//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSString;

@interface CommuneRewardInfoListModel : JDModel
{
    NSString *_title;
    NSMutableArray *_rewardAmountList;
    NSString *_balanceBeans;
    NSString *_balanceBeansText;
    NSString *_buttonText;
}

@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *balanceBeansText; // @synthesize balanceBeansText=_balanceBeansText;
@property(copy, nonatomic) NSString *balanceBeans; // @synthesize balanceBeans=_balanceBeans;
@property(retain, nonatomic) NSMutableArray *rewardAmountList; // @synthesize rewardAmountList=_rewardAmountList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

