//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ZDMTab : NSObject
{
    _Bool _useSeperatorLine;
    _Bool _belowPictureDisplay;
    _Bool _notPullRefresh;
    _Bool _selected;
    NSString *_identifier;
    NSString *_type;
    NSString *_name;
    NSString *_imagePath;
    NSString *_deliveryClk;
    NSString *_tabStyle;
    NSString *_belowPicture;
    NSString *_activityUrl;
    long long _tabImageTextStyle;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long tabImageTextStyle; // @synthesize tabImageTextStyle=_tabImageTextStyle;
@property(nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(nonatomic) _Bool notPullRefresh; // @synthesize notPullRefresh=_notPullRefresh;
@property(nonatomic) _Bool belowPictureDisplay; // @synthesize belowPictureDisplay=_belowPictureDisplay;
@property(retain, nonatomic) NSString *belowPicture; // @synthesize belowPicture=_belowPicture;
@property(nonatomic) _Bool useSeperatorLine; // @synthesize useSeperatorLine=_useSeperatorLine;
@property(retain, nonatomic) NSString *tabStyle; // @synthesize tabStyle=_tabStyle;
@property(retain, nonatomic) NSString *deliveryClk; // @synthesize deliveryClk=_deliveryClk;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

