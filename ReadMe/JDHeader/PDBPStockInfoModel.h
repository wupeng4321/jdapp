//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDBPAddressModel;

@interface PDBPStockInfoModel : NSObject
{
    PDBPAddressModel *_defaultAddr;
    NSString *_stock;
}

@property(copy, nonatomic) NSString *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) PDBPAddressModel *defaultAddr; // @synthesize defaultAddr=_defaultAddr;
- (void).cxx_destruct;

@end

