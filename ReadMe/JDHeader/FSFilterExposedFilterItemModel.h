//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary, NSString;

@interface FSFilterExposedFilterItemModel : JDModel
{
    _Bool _selected;
    NSString *_title;
    NSString *_lineOne;
    NSString *_lineTwo;
    NSDictionary *_filterInfo;
}

@property(copy, nonatomic) NSDictionary *filterInfo; // @synthesize filterInfo=_filterInfo;
@property(copy, nonatomic) NSString *lineTwo; // @synthesize lineTwo=_lineTwo;
@property(copy, nonatomic) NSString *lineOne; // @synthesize lineOne=_lineOne;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

