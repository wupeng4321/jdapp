//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QuestionListItemModel : NSObject
{
    NSString *_content;
    NSString *_questionId;
    NSArray *_answerList;
    NSString *_answerCountText;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *answerCountText; // @synthesize answerCountText=_answerCountText;
@property(retain, nonatomic) NSArray *answerList; // @synthesize answerList=_answerList;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;

@end

