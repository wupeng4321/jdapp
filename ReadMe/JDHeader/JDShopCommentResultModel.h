//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDShopDynamicCommentModel, NSDictionary, NSNumber, NSString;

@interface JDShopCommentResultModel : JDModel
{
    NSNumber *_success;
    NSString *_msg;
    NSDictionary *_comment;
    JDShopDynamicCommentModel *_commentModel;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) JDShopDynamicCommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) NSDictionary *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSNumber *success; // @synthesize success=_success;
- (void).cxx_destruct;
- (_Bool)praseDataWithDic:(id)arg1;

@end

