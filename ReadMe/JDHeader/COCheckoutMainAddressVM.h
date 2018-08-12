//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractVM.h"

@class NSArray, NSAttributedString, NSString;

@interface COCheckoutMainAddressVM : COCheckoutMainAbstractVM
{
    _Bool _isPickAddress;
    _Bool _noAddress;
    unsigned long long _addressType;
    NSString *_title;
    NSString *_mobile;
    NSArray *_tagsArray;
    NSString *_detailAddress;
    NSAttributedString *_titleAttributedStr;
    NSAttributedString *_subAttributedStr;
    NSString *_noAddressTile;
    NSString *_noAddressSubTile;
}

@property(copy, nonatomic) NSString *noAddressSubTile; // @synthesize noAddressSubTile=_noAddressSubTile;
@property(copy, nonatomic) NSString *noAddressTile; // @synthesize noAddressTile=_noAddressTile;
@property(nonatomic) _Bool noAddress; // @synthesize noAddress=_noAddress;
@property(retain, nonatomic) NSAttributedString *subAttributedStr; // @synthesize subAttributedStr=_subAttributedStr;
@property(retain, nonatomic) NSAttributedString *titleAttributedStr; // @synthesize titleAttributedStr=_titleAttributedStr;
@property(nonatomic) _Bool isPickAddress; // @synthesize isPickAddress=_isPickAddress;
@property(copy, nonatomic) NSString *detailAddress; // @synthesize detailAddress=_detailAddress;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long addressType; // @synthesize addressType=_addressType;
- (void).cxx_destruct;
- (id)tagVMWith:(id)arg1;
- (id)defaultAddressTagVM;
- (id)pickAddressTagVM;
- (id)namePrefix;
- (_Bool)hasMoreAddresss;
- (void)resetWith:(id)arg1;
- (unsigned long long)type;

@end
