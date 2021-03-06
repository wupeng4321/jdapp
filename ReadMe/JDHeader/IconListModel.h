//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface IconListModel : NSObject
{
    NSNumber *_sortId;
    NSString *_iconType;
    NSString *_iconValue;
    NSString *_text;
    NSString *_tip;
    NSString *_imageUrl;
    NSString *_jumpUrl;
    NSNumber *_show;
}

+ (id)getIconListArray:(id)arg1 detailArray:(id)arg2 servIconRelation:(id)arg3;
@property(retain, nonatomic) NSNumber *show; // @synthesize show=_show;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *iconValue; // @synthesize iconValue=_iconValue;
@property(copy, nonatomic) NSString *iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSNumber *sortId; // @synthesize sortId=_sortId;
- (void).cxx_destruct;

@end

