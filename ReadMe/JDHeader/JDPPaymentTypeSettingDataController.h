//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPPaymentTypeSettingViewController;
@protocol JDPPaymentTypeSettingDataControllerDelegate;

@interface JDPPaymentTypeSettingDataController : NSObject
{
    id <JDPPaymentTypeSettingDataControllerDelegate> _deleagte;
    JDPPaymentTypeSettingViewController *_viewController;
}

@property(nonatomic) __weak JDPPaymentTypeSettingViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <JDPPaymentTypeSettingDataControllerDelegate> deleagte; // @synthesize deleagte=_deleagte;
- (void).cxx_destruct;
- (void)changeSetStatus:(id)arg1 remark:(id)arg2;
- (void)updateViewModel;
- (id)initWithViewController:(id)arg1;

@end
