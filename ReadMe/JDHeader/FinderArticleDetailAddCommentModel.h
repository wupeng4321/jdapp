//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class FinderArticleDetailCaptchaInfo, FinderArticleDetailFirstLevelCommentModel, FinderArticleJumpModel, NSString;

@interface FinderArticleDetailAddCommentModel : NSObject <NSCoding>
{
    NSString *_code;
    NSString *_subCode;
    NSString *_msg;
    FinderArticleJumpModel *_jump;
    FinderArticleDetailCaptchaInfo *_captchaInfo;
    FinderArticleDetailFirstLevelCommentModel *_comment;
}

@property(retain, nonatomic) FinderArticleDetailFirstLevelCommentModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) FinderArticleDetailCaptchaInfo *captchaInfo; // @synthesize captchaInfo=_captchaInfo;
@property(retain, nonatomic) FinderArticleJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)errorMessage;
- (_Bool)isNeedShowCaptcha;
- (_Bool)isAddCommentSuccess;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

