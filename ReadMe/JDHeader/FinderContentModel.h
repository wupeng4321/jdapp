//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FinderCellModelProtocol-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSString;

@interface FinderContentModel : NSObject <FinderCellModelProtocol, NSCoding>
{
    _Bool _isFromPublisher;
    NSString *_type;
    NSString *_srv;
    long long _lineStyle;
}

@property(nonatomic) _Bool isFromPublisher; // @synthesize isFromPublisher=_isFromPublisher;
@property(nonatomic) long long lineStyle; // @synthesize lineStyle=_lineStyle;
@property(copy, nonatomic) NSString *srv; // @synthesize srv=_srv;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)cellBottomLine;
@property(readonly, nonatomic) double cellHeight;
- (void)keyValuesDidFinishConvertingToObject;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

