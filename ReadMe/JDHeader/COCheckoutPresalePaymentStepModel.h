//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface COCheckoutPresalePaymentStepModel : JDModel
{
    NSString *Label;
    NSString *Value;
    NSString *Operator;
    NSString *ValueChange;
}

@property(copy, nonatomic) NSString *ValueChange; // @synthesize ValueChange;
@property(copy, nonatomic) NSString *Operator; // @synthesize Operator;
@property(copy, nonatomic) NSString *Value; // @synthesize Value;
@property(copy, nonatomic) NSString *Label; // @synthesize Label;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

