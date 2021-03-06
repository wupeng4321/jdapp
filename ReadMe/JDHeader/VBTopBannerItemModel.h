//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, VBJumpModel;

@interface VBTopBannerItemModel : NSObject <NSCopying, NSCoding>
{
    NSString *_tabId;
    NSString *_title;
    NSString *_indexImage;
    VBJumpModel *_jump;
    NSString *_type;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) VBJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

