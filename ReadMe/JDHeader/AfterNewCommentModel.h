//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSString;

@interface AfterNewCommentModel : JDModel
{
    NSString *_createTime;
    NSString *_content;
    NSMutableArray *_images;
    NSString *_timeText;
    NSString *_textStatus;
    NSString *_imageStatus;
}

@property(copy, nonatomic) NSString *imageStatus; // @synthesize imageStatus=_imageStatus;
@property(copy, nonatomic) NSString *textStatus; // @synthesize textStatus=_textStatus;
@property(copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

