//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDButtonInfo : NSObject
{
    long long _type;
    NSString *_name;
    NSString *_bgColor;
    NSString *_textColor;
    NSString *_business;
    NSString *_normalColor;
    NSString *_highColor;
    NSString *_disableColor;
    long long _source;
}

@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *disableColor; // @synthesize disableColor=_disableColor;
@property(copy, nonatomic) NSString *highColor; // @synthesize highColor=_highColor;
@property(copy, nonatomic) NSString *normalColor; // @synthesize normalColor=_normalColor;
@property(copy, nonatomic) NSString *business; // @synthesize business=_business;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

