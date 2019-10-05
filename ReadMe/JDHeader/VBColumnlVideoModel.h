//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VBListBaseContentModel.h"

@class NSArray, NSString, VBJumpModel;

@interface VBColumnlVideoModel : VBListBaseContentModel
{
    NSString *_title;
    NSString *_desc;
    NSString *_authorName;
    NSString *_authorPic;
    double _createTime;
    VBJumpModel *_authorPageJump;
    NSArray *_videos;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) VBJumpModel *authorPageJump; // @synthesize authorPageJump=_authorPageJump;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)keyValuesDidFinishConvertingToObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
