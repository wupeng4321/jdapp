//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface JDShopFlashProductModel : JDModel
{
    int _status;
    int _subStatus;
    NSString *_wareId;
    NSString *_wareName;
    NSString *_imgPath;
    NSString *_promoPrice;
    NSString *_pcPrice;
}

@property(nonatomic) int subStatus; // @synthesize subStatus=_subStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *pcPrice; // @synthesize pcPrice=_pcPrice;
@property(retain, nonatomic) NSString *promoPrice; // @synthesize promoPrice=_promoPrice;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(retain, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (_Bool)praseDataWithDic:(id)arg1;
- (void)dealloc;

@end

