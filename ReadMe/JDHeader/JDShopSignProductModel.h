//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface JDShopSignProductModel : JDModel
{
    NSString *wareID;
    NSString *imgPath;
    NSString *wareName;
    NSString *jdPrice;
    NSString *mPrice;
    NSNumber *_stock;
    NSNumber *_isUnderCarriage;
}

@property(retain, nonatomic) NSNumber *isUnderCarriage; // @synthesize isUnderCarriage=_isUnderCarriage;
@property(retain, nonatomic) NSNumber *stock; // @synthesize stock=_stock;
@property(retain, nonatomic) NSString *mPrice; // @synthesize mPrice;
@property(retain, nonatomic) NSString *jdPrice; // @synthesize jdPrice;
@property(retain, nonatomic) NSString *wareName; // @synthesize wareName;
@property(retain, nonatomic) NSString *imgPath; // @synthesize imgPath;
@property(retain, nonatomic) NSString *wareID; // @synthesize wareID;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

