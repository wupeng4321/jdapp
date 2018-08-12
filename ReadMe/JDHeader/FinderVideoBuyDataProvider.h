//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderVideoBuyCompleteModel, JDStoreNetwork, NSString;

@interface FinderVideoBuyDataProvider : NSObject
{
    NSString *_clickUrl;
    FinderVideoBuyCompleteModel *_roomModel;
    JDStoreNetwork *_roomRequest;
    JDStoreNetwork *_followAuthorRequest;
    JDStoreNetwork *_likeCommentRequest;
    JDStoreNetwork *_collectRequest;
    JDStoreNetwork *_captchaSessionRequest;
    JDStoreNetwork *_captchaGetRequest;
    JDStoreNetwork *_captchaCodeCheckRequest;
    JDStoreNetwork *_newcommentRequest;
    JDStoreNetwork *_newaddCommentRequest;
    JDStoreNetwork *_newdeleteCommentRequest;
    JDStoreNetwork *_newpraiseCommentRequest;
}

@property(retain, nonatomic) JDStoreNetwork *newpraiseCommentRequest; // @synthesize newpraiseCommentRequest=_newpraiseCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *newdeleteCommentRequest; // @synthesize newdeleteCommentRequest=_newdeleteCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *newaddCommentRequest; // @synthesize newaddCommentRequest=_newaddCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *newcommentRequest; // @synthesize newcommentRequest=_newcommentRequest;
@property(retain, nonatomic) JDStoreNetwork *captchaCodeCheckRequest; // @synthesize captchaCodeCheckRequest=_captchaCodeCheckRequest;
@property(retain, nonatomic) JDStoreNetwork *captchaGetRequest; // @synthesize captchaGetRequest=_captchaGetRequest;
@property(retain, nonatomic) JDStoreNetwork *captchaSessionRequest; // @synthesize captchaSessionRequest=_captchaSessionRequest;
@property(retain, nonatomic) JDStoreNetwork *collectRequest; // @synthesize collectRequest=_collectRequest;
@property(retain, nonatomic) JDStoreNetwork *likeCommentRequest; // @synthesize likeCommentRequest=_likeCommentRequest;
@property(retain, nonatomic) JDStoreNetwork *followAuthorRequest; // @synthesize followAuthorRequest=_followAuthorRequest;
@property(retain, nonatomic) JDStoreNetwork *roomRequest; // @synthesize roomRequest=_roomRequest;
@property(retain, nonatomic) FinderVideoBuyCompleteModel *roomModel; // @synthesize roomModel=_roomModel;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
- (void).cxx_destruct;
- (void)startSendCaptcha:(id)arg1 comment:(id)arg2 bsid:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)startCaptchaCheckcodeRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)startCaptchaSessionRequestSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)startPraiseCommentRequestWithCommentId:(id)arg1 Action:(long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)startAddCommentRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)startCommentRequestWithOffset:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancelLike;
- (void)likeArticleWithArticleId:(id)arg1 isLike:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)followAuthorWithAuthorId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)fetchVPRoomInfoWithArticleId:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end
