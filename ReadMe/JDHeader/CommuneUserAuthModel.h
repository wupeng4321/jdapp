//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneUserAuthModel : JDModel
{
    NSString *_resultCode;
    NSString *_blacklistText;
    NSString *_riskUserText;
    NSString *_bindText;
    NSString *_bindURL;
    NSString *_cancelText;
    NSString *_goText;
}

@property(copy, nonatomic) NSString *goText; // @synthesize goText=_goText;
@property(copy, nonatomic) NSString *cancelText; // @synthesize cancelText=_cancelText;
@property(copy, nonatomic) NSString *bindURL; // @synthesize bindURL=_bindURL;
@property(copy, nonatomic) NSString *bindText; // @synthesize bindText=_bindText;
@property(copy, nonatomic) NSString *riskUserText; // @synthesize riskUserText=_riskUserText;
@property(copy, nonatomic) NSString *blacklistText; // @synthesize blacklistText=_blacklistText;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

