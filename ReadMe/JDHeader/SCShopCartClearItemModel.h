//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SCShopCartClearItemModel : NSObject
{
    _Bool _isChecked;
    NSString *_name;
    long long _itemType;
    NSString *_itemDesc;
    NSString *_imageDomain;
    NSURL *_imgDisplayUrl;
    NSString *_groupId;
}

@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSURL *imgDisplayUrl; // @synthesize imgDisplayUrl=_imgDisplayUrl;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
@property(copy, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(copy, nonatomic) NSString *itemDesc; // @synthesize itemDesc=_itemDesc;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
