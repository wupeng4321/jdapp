//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface JZDChooseDateModel : JDModel
{
    _Bool _selected;
    NSString *_name;
    NSString *_value;
    NSArray *_hourSArray;
}

@property(retain, nonatomic) NSArray *hourSArray; // @synthesize hourSArray=_hourSArray;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;

@end

