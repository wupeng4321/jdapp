//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderTemplateBaseModel.h"

@class NSString;

@interface OrderFinishFoldTempModel : OrderTemplateBaseModel
{
    int _loc1_OpType;
    NSString *_loc1_Str;
    NSString *_loc1_JumpUrl;
}

@property(retain, nonatomic) NSString *loc1_JumpUrl; // @synthesize loc1_JumpUrl=_loc1_JumpUrl;
@property(nonatomic) int loc1_OpType; // @synthesize loc1_OpType=_loc1_OpType;
@property(retain, nonatomic) NSString *loc1_Str; // @synthesize loc1_Str=_loc1_Str;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setData;

@end
