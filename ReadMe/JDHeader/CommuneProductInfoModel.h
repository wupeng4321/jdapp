//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneProductInfoModel : JDModel
{
    NSString *_productID;
    NSString *_fullname;
    NSString *_imgUrl;
}

@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *fullname; // @synthesize fullname=_fullname;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
