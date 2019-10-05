//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewKitBaseContainer.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface JDViewKitItemView : JDViewKitBaseContainer
{
    NSString *_templateType;
    NSMutableDictionary *_multiplexMap;
    NSDictionary *_oriDataDict;
}

@property(retain, nonatomic) NSDictionary *oriDataDict; // @synthesize oriDataDict=_oriDataDict;
@property(retain, nonatomic) NSMutableDictionary *multiplexMap; // @synthesize multiplexMap=_multiplexMap;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
- (void).cxx_destruct;
- (id)elementByModel:(id)arg1;
- (void)layoutSubViewsByItemModel:(id)arg1 superView:(id)arg2;
- (void)layoutSubViewByItemModel:(id)arg1;
- (void)clickViewWithGesture:(id)arg1;
- (void)addEvent:(id)arg1 params:(id)arg2;
- (void)findSubViewsByItemModel:(id)arg1;
- (void)updateSubViewsDataByItemModel:(id)arg1;
- (void)updateWithData:(id)arg1;
- (void)updateViewWithData:(id)arg1;
- (void)reloadContainer;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
