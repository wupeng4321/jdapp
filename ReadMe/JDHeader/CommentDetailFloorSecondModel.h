//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class CommentReplyModel, NSDictionary, NSString;

@interface CommentDetailFloorSecondModel : JDModel
{
    double _firstCellHeight;
    NSString *_systemSayToUser;
    NSDictionary *_commentInfo;
    NSString *_replyCount;
    CommentReplyModel *_fristReplyModel;
}

@property(retain, nonatomic) CommentReplyModel *fristReplyModel; // @synthesize fristReplyModel=_fristReplyModel;
@property(copy, nonatomic) NSString *replyCount; // @synthesize replyCount=_replyCount;
@property(copy, nonatomic) NSDictionary *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(copy, nonatomic) NSString *systemSayToUser; // @synthesize systemSayToUser=_systemSayToUser;
- (void).cxx_destruct;
@property(readonly, nonatomic) double firstCellHeight; // @synthesize firstCellHeight=_firstCellHeight;
- (void)setDataWithDic:(id)arg1;

@end
