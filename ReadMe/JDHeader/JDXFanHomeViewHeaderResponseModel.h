//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDXFanHomeViewHeaderConfigModel, JDXFanHomeViewHeaderCoverFlowModel, JDXFanHomeViewHeaderTopModel, NSArray;

@interface JDXFanHomeViewHeaderResponseModel : NSObject
{
    JDXFanHomeViewHeaderTopModel *_top;
    JDXFanHomeViewHeaderConfigModel *_config;
    NSArray *_floorList;
    JDXFanHomeViewHeaderCoverFlowModel *_floatlayer;
}

@property(retain, nonatomic) JDXFanHomeViewHeaderCoverFlowModel *floatlayer; // @synthesize floatlayer=_floatlayer;
@property(retain, nonatomic) NSArray *floorList; // @synthesize floorList=_floorList;
@property(retain, nonatomic) JDXFanHomeViewHeaderConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) JDXFanHomeViewHeaderTopModel *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (void)setTabSelectedIndex:(long long)arg1;
- (long long)tabSelectedIndex;
- (long long)tabCount;
- (long long)indexForTabWithID:(id)arg1;
- (id)selectedTabItem;
- (id)tabItemForIndex:(long long)arg1;
- (_Bool)isLastModelKindOfTabbar;
- (id)lastModel;
- (id)floorModelAtIndex:(long long)arg1;

@end

