//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderTemplateBaseModel.h"

@class NSString;

@interface OrderPayYushouListModel : OrderTemplateBaseModel
{
    _Bool _isLastOne;
    NSString *_loc1_ImgUrl;
    NSString *_loc2_Str;
    NSString *_loc3_Str;
    NSString *_loc3_Color;
    NSString *_line_Color;
}

@property(nonatomic) _Bool isLastOne; // @synthesize isLastOne=_isLastOne;
@property(retain, nonatomic) NSString *line_Color; // @synthesize line_Color=_line_Color;
@property(retain, nonatomic) NSString *loc3_Color; // @synthesize loc3_Color=_loc3_Color;
@property(retain, nonatomic) NSString *loc3_Str; // @synthesize loc3_Str=_loc3_Str;
@property(retain, nonatomic) NSString *loc2_Str; // @synthesize loc2_Str=_loc2_Str;
@property(retain, nonatomic) NSString *loc1_ImgUrl; // @synthesize loc1_ImgUrl=_loc1_ImgUrl;
- (void).cxx_destruct;
- (void)setDataWithSelfDic:(id)arg1;

@end

