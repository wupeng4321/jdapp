//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FinderArticleDetailFloatModel : NSObject
{
    NSArray *_skuArray;
}

@property(retain, nonatomic) NSArray *skuArray; // @synthesize skuArray=_skuArray;
- (void).cxx_destruct;
- (id)fetchModel:(id)arg1;
- (long long)numberOfRowInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (long long)numberOfSection;
- (_Bool)isValid;
- (void)retriveSkuDataFromDes:(id)arg1 ImgHost:(id)arg2;
- (id)initWithDes:(id)arg1 ImgHost:(id)arg2;

@end

