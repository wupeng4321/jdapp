//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface COCheckoutOrderPayWayItemModel : JDModel
{
    NSString *_label;
    NSString *_functionId;
}

@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
