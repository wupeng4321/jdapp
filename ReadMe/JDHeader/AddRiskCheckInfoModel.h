//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface AddRiskCheckInfoModel : JDModel
{
    NSString *_guide;
    NSString *_inputAddressUrl;
    NSString *_addressContent;
}

@property(copy, nonatomic) NSString *addressContent; // @synthesize addressContent=_addressContent;
@property(copy, nonatomic) NSString *inputAddressUrl; // @synthesize inputAddressUrl=_inputAddressUrl;
@property(copy, nonatomic) NSString *guide; // @synthesize guide=_guide;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

