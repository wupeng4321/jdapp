//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneSingleExpertModel : JDModel
{
    NSString *_expertId;
    NSString *_title;
    NSString *_content;
    NSString *_icon;
    NSString *_cancelBtnText;
}

@property(copy, nonatomic) NSString *cancelBtnText; // @synthesize cancelBtnText=_cancelBtnText;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *expertId; // @synthesize expertId=_expertId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

