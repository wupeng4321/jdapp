//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface PD3CGiftPoolModel : JDModel
{
    NSString *_total;
    NSString *_canSelNum;
    NSString *_imgDomain;
    NSArray *_giftPools;
    NSArray *_selectedGiftArray;
    NSArray *_selectedGiftsIdArray;
}

@property(retain, nonatomic) NSArray *selectedGiftsIdArray; // @synthesize selectedGiftsIdArray=_selectedGiftsIdArray;
@property(retain, nonatomic) NSArray *selectedGiftArray; // @synthesize selectedGiftArray=_selectedGiftArray;
@property(retain, nonatomic) NSArray *giftPools; // @synthesize giftPools=_giftPools;
@property(copy, nonatomic) NSString *imgDomain; // @synthesize imgDomain=_imgDomain;
@property(copy, nonatomic) NSString *canSelNum; // @synthesize canSelNum=_canSelNum;
@property(copy, nonatomic) NSString *total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

