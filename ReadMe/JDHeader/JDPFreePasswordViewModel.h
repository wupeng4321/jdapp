//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPFreePasswordViewModel : NSObject
{
    unsigned long long _viewStyle;
    NSString *_viewTitle;
    NSString *_viewSubTitle;
    NSString *_amountTitle;
    NSString *_amountSubTitle;
    NSString *_iconURLString;
    NSString *_protocolString;
    NSString *_protocolLinkString;
    NSString *_buttonText;
}

@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *protocolLinkString; // @synthesize protocolLinkString=_protocolLinkString;
@property(copy, nonatomic) NSString *protocolString; // @synthesize protocolString=_protocolString;
@property(copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(copy, nonatomic) NSString *amountSubTitle; // @synthesize amountSubTitle=_amountSubTitle;
@property(copy, nonatomic) NSString *amountTitle; // @synthesize amountTitle=_amountTitle;
@property(copy, nonatomic) NSString *viewSubTitle; // @synthesize viewSubTitle=_viewSubTitle;
@property(copy, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
- (void).cxx_destruct;

@end
