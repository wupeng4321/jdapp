//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSDictionary, NSString, TTTAdsModel, TTTCalendarRemindButtonModel;
@protocol TTTCalendarRemindProtocol;

@interface TTTCalendarRemindButton : UIButton
{
    _Bool _isFirst;
    CDUnknownBlockType _tapBlock;
    id <TTTCalendarRemindProtocol> _buttonModel;
    NSString *_openJdLink;
    NSDictionary *_eventDict;
    TTTCalendarRemindButtonModel *_remindButtonModel;
    long long _remindButtonType;
    TTTAdsModel *_adModel;
}

@property(retain, nonatomic) TTTAdsModel *adModel; // @synthesize adModel=_adModel;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) long long remindButtonType; // @synthesize remindButtonType=_remindButtonType;
@property(retain, nonatomic) TTTCalendarRemindButtonModel *remindButtonModel; // @synthesize remindButtonModel=_remindButtonModel;
@property(copy, nonatomic) NSDictionary *eventDict; // @synthesize eventDict=_eventDict;
@property(copy, nonatomic) NSString *openJdLink; // @synthesize openJdLink=_openJdLink;
@property(retain, nonatomic) id <TTTCalendarRemindProtocol> buttonModel; // @synthesize buttonModel=_buttonModel;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (_Bool)isPureFloat:(id)arg1;
- (_Bool)isPureInt:(id)arg1;
- (struct UIEdgeInsets)imageEdgeInsetsForConfigModel:(id)arg1;
- (struct UIEdgeInsets)titleEdgeInsetsFromConfigModel:(id)arg1;
- (id)titleColorFromConfigModel:(id)arg1;
- (id)imageForConfigModel:(id)arg1;
- (id)titleFromConfigModel:(id)arg1;
- (id)borderColorFromConfigModel:(id)arg1;
- (id)backgroundColorFromConfigModel:(id)arg1;
- (struct CGRect)rectFromConfigModel:(id)arg1;
- (void)resetTitleAndImage;
- (void)setButtonPropertiesWithModel:(id)arg1;
- (void)getRemindButtonType;
- (void)configButton;
- (void)jumpToDesPage;
- (void)removeRemindEventWithCalendarDataModel:(id)arg1 EventDictionary:(id)arg2;
- (void)addRemindEventWithCalendarDataModel:(id)arg1 EventDictionary:(id)arg2;
- (void)buttonClicked:(id)arg1;
- (void)configRemindButtonWithModel:(id)arg1;
- (void)assignAdModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

