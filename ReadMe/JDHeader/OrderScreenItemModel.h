//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface OrderScreenItemModel : JDModel
{
    NSString *_count;
    NSString *_direct;
    NSString *_functionId;
    NSString *_name;
    NSString *_type;
    NSString *_url;
    long long _highLight;
}

@property(nonatomic) long long highLight; // @synthesize highLight=_highLight;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(retain, nonatomic) NSString *direct; // @synthesize direct=_direct;
@property(retain, nonatomic) NSString *count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithDic:(id)arg1;
- (void)dealloc;

@end

