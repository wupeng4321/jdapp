//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FinderVideoBuryData : NSObject
{
    NSString *_articleId;
    NSString *_typeId;
    NSString *_channel;
}

+ (id)sharedBuryData;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)BuryData:(id)arg1;
- (void)clearBuryData;

@end

