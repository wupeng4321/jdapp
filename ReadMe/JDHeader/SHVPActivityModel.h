//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPBaseModel.h"

#import "SHVPCellModelProtocol-Protocol.h"

@class NSArray, NSString;

@interface SHVPActivityModel : SHVPBaseModel <SHVPCellModelProtocol>
{
    NSString *_style;
    NSArray *_items;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) double horizontalCellHeight;
@property(readonly, nonatomic) double cellHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

