//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPQBaseReturnModel.h"

@class NSString;

@interface JDPQApplyVerityReturnModel : JDPQBaseReturnModel
{
    NSString *_signResult;
    NSString *_elecCardNo;
    NSString *_elecCardNoMask;
    NSString *_phoneMask;
    NSString *_process;
}

@property(copy, nonatomic) NSString *process; // @synthesize process=_process;
@property(copy, nonatomic) NSString *phoneMask; // @synthesize phoneMask=_phoneMask;
@property(copy, nonatomic) NSString *elecCardNoMask; // @synthesize elecCardNoMask=_elecCardNoMask;
@property(copy, nonatomic) NSString *elecCardNo; // @synthesize elecCardNo=_elecCardNo;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
- (void).cxx_destruct;

@end

