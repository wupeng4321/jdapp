//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTAttributedLabel.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString;
@protocol COCheckoutCardBindLabelPhoneNumClickDelegate;

@interface COCheckoutCardBindFailedLabel : TTTAttributedLabel <TTTAttributedLabelDelegate>
{
    id <COCheckoutCardBindLabelPhoneNumClickDelegate> _bindFailDelegate;
}

@property(nonatomic) __weak id <COCheckoutCardBindLabelPhoneNumClickDelegate> bindFailDelegate; // @synthesize bindFailDelegate=_bindFailDelegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
