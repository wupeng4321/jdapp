//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SHVPSmallVideoBuryDataModel, SHVPSmallVideoJumpModel;

@interface SHVPSmallVideoJumpObject : NSObject
{
    unsigned long long _jumpType;
    SHVPSmallVideoJumpModel *_jumpModel;
    NSObject *_para;
    SHVPSmallVideoBuryDataModel *_buryDataModel;
}

@property(retain, nonatomic) SHVPSmallVideoBuryDataModel *buryDataModel; // @synthesize buryDataModel=_buryDataModel;
@property(retain, nonatomic) NSObject *para; // @synthesize para=_para;
@property(retain, nonatomic) SHVPSmallVideoJumpModel *jumpModel; // @synthesize jumpModel=_jumpModel;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
- (void).cxx_destruct;

@end
