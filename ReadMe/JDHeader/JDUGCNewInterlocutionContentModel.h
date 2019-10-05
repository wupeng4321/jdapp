//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDUGCBaseJumpModel, NSArray, NSString;

@interface JDUGCNewInterlocutionContentModel : NSObject
{
    _Bool _hasFollowed;
    _Bool _hasLiked;
    NSString *_contentId;
    NSString *_indexImage;
    double _picWidth;
    double _picHeight;
    NSString *_authorId;
    NSString *_authorName;
    NSString *_authorPic;
    long long _appearance;
    NSString *_showTime;
    unsigned long long _likeNum;
    NSString *_likeNumStr;
    NSString *_answer;
    NSArray *_imgs;
    JDUGCBaseJumpModel *_jump;
    NSString *_pvStr;
    long long _style;
    NSString *_authorArea;
    NSString *_question;
    NSString *_questionId;
    double _cellHeight;
    struct CGSize _authorImageViewSize;
    struct CGSize _cornerBgViewSize;
    struct CGSize _quesionLabelSize;
    struct CGSize _authorLabelSize;
    struct CGSize _styleNameLabelSize;
    struct CGSize _answerLabelSize;
    struct CGSize _pvLabelSize;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) struct CGSize pvLabelSize; // @synthesize pvLabelSize=_pvLabelSize;
@property(nonatomic) struct CGSize answerLabelSize; // @synthesize answerLabelSize=_answerLabelSize;
@property(nonatomic) struct CGSize styleNameLabelSize; // @synthesize styleNameLabelSize=_styleNameLabelSize;
@property(nonatomic) struct CGSize authorLabelSize; // @synthesize authorLabelSize=_authorLabelSize;
@property(nonatomic) struct CGSize quesionLabelSize; // @synthesize quesionLabelSize=_quesionLabelSize;
@property(nonatomic) struct CGSize cornerBgViewSize; // @synthesize cornerBgViewSize=_cornerBgViewSize;
@property(nonatomic) struct CGSize authorImageViewSize; // @synthesize authorImageViewSize=_authorImageViewSize;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *questionId; // @synthesize questionId=_questionId;
@property(copy, nonatomic) NSString *question; // @synthesize question=_question;
@property(copy, nonatomic) NSString *authorArea; // @synthesize authorArea=_authorArea;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *pvStr; // @synthesize pvStr=_pvStr;
@property(retain, nonatomic) JDUGCBaseJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSArray *imgs; // @synthesize imgs=_imgs;
@property(copy, nonatomic) NSString *answer; // @synthesize answer=_answer;
@property(copy, nonatomic) NSString *likeNumStr; // @synthesize likeNumStr=_likeNumStr;
@property(nonatomic) unsigned long long likeNum; // @synthesize likeNum=_likeNum;
@property(nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(copy, nonatomic) NSString *showTime; // @synthesize showTime=_showTime;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(nonatomic) double picHeight; // @synthesize picHeight=_picHeight;
@property(nonatomic) double picWidth; // @synthesize picWidth=_picWidth;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;
- (int)convertToInt:(id)arg1;

@end
