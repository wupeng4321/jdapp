//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractVM.h"

@class NSNumber, NSString;

@interface COCheckoutMainYunfeeVM : COCheckoutMainAbstractVM
{
    NSString *_keyStr;
    NSString *_valueStr;
    NSString *_operatorStr;
    NSString *_signStr;
    CDUnknownBlockType _completionBlock;
    NSNumber *_hasIChar;
    NSString *_charKey;
}

+ (id)replacedKeyFromPropertyName;
@property(readonly, copy, nonatomic) NSString *charKey; // @synthesize charKey=_charKey;
@property(readonly, nonatomic) NSNumber *hasIChar; // @synthesize hasIChar=_hasIChar;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) NSString *signStr; // @synthesize signStr=_signStr;
@property(readonly, copy, nonatomic) NSString *operatorStr; // @synthesize operatorStr=_operatorStr;
@property(readonly, copy, nonatomic) NSString *valueStr; // @synthesize valueStr=_valueStr;
@property(readonly, copy, nonatomic) NSString *keyStr; // @synthesize keyStr=_keyStr;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
