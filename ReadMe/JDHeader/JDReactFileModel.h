//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDReactFileModel : NSObject
{
    NSString *_relativePath;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setDataWithDic:(id)arg1;

@end
