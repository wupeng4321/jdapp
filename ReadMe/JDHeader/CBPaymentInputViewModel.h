//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CBPaymentInputViewModel : NSObject
{
    NSString *_title;
    NSString *_tip;
    NSString *_mainButtonTitle;
    unsigned long long _viewStyle;
    unsigned long long _viewStyleCCOption;
}

@property(nonatomic) unsigned long long viewStyleCCOption; // @synthesize viewStyleCCOption=_viewStyleCCOption;
@property(nonatomic) unsigned long long viewStyle; // @synthesize viewStyle=_viewStyle;
@property(copy, nonatomic) NSString *mainButtonTitle; // @synthesize mainButtonTitle=_mainButtonTitle;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

