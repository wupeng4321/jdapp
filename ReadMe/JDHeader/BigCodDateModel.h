//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface BigCodDateModel : JDModel
{
    NSString *Name;
    NSString *Value;
    NSNumber *Selected;
}

@property(retain, nonatomic) NSNumber *Selected; // @synthesize Selected;
@property(retain, nonatomic) NSString *Value; // @synthesize Value;
@property(retain, nonatomic) NSString *Name; // @synthesize Name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

