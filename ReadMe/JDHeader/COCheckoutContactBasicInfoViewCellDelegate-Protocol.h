//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class COCheckoutContactBasicInfoViewCell, NSString;

@protocol COCheckoutContactBasicInfoViewCellDelegate <NSObject>

@optional
- (void)contactBasicInfoViewCell:(COCheckoutContactBasicInfoViewCell *)arg1 valueChangedOfResponder:(id)arg2;
- (void)contactBasicInfoViewCell:(COCheckoutContactBasicInfoViewCell *)arg1 invalidEntryWithErrorMsg:(NSString *)arg2;
- (void)contactBasicInfoViewCell:(COCheckoutContactBasicInfoViewCell *)arg1 didResignFirstResponder:(id)arg2;
- (void)contactBasicInfoViewCell:(COCheckoutContactBasicInfoViewCell *)arg1 didBecomeFirstResponder:(id)arg2;
- (void)contactBasicInfoViewCell:(COCheckoutContactBasicInfoViewCell *)arg1 willBecomeFirstResponder:(id)arg2;
@end

