//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface JDSHNavItemModel : NSObject
{
    _Bool _pullHeader;
    _Bool _isTrans;
    NSString *_canPull;
    NSString *_supportTran;
    NSDictionary *_tranParams;
}

@property(nonatomic) _Bool isTrans; // @synthesize isTrans=_isTrans;
@property(nonatomic) _Bool pullHeader; // @synthesize pullHeader=_pullHeader;
@property(copy, nonatomic) NSDictionary *tranParams; // @synthesize tranParams=_tranParams;
@property(copy, nonatomic) NSString *supportTran; // @synthesize supportTran=_supportTran;
@property(copy, nonatomic) NSString *canPull; // @synthesize canPull=_canPull;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

