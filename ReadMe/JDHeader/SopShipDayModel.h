//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface SopShipDayModel : JDModel
{
    _Bool _selected;
    NSNumber *_index;
    NSString *_date;
    NSString *_dateStr;
    NSString *_week;
    NSArray *_hours;
}

+ (id)getTitle:(id)arg1 hour:(id)arg2;
@property(retain, nonatomic) NSArray *hours; // @synthesize hours=_hours;
@property(retain, nonatomic) NSString *week; // @synthesize week=_week;
@property(retain, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSNumber *index; // @synthesize index=_index;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

