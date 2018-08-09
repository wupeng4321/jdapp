//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class CommuneRealNameAuthModel, CommuneSingleExpertModel, NSMutableAttributedString, NSString;

@interface CommuneDetailAnswerModel : JDModel
{
    _Bool _showPraise;
    _Bool _canPriase;
    _Bool _isRewarded;
    _Bool _canAcceptReward;
    _Bool _isLoginPinSameAsAnswerPin;
    _Bool _isBest;
    _Bool _isShowBestButton;
    _Bool _showComment;
    _Bool _showRewardBeans;
    _Bool _hiddenBottomLineView;
    _Bool _isSelf;
    _Bool _top;
    NSString *_answerID;
    NSString *_content;
    NSString *_createTime;
    NSString *_userNickName;
    long long _cellHeight;
    NSString *_priaseCount;
    NSString *_rewardBeans;
    NSString *_rewardDate;
    NSString *_rewardDeadLine;
    NSString *_rewardLabel;
    CommuneRealNameAuthModel *_realNameAuthModel;
    CommuneSingleExpertModel *_expertInfo;
    NSMutableAttributedString *_contentAttributedString;
    NSString *_userHeadUrl;
    NSString *_sellerType;
    NSString *_commentCount;
    double _praiseCountWidth;
    double _commentCountWidth;
    NSString *_topIcon;
}

@property(copy, nonatomic) NSString *topIcon; // @synthesize topIcon=_topIcon;
@property(nonatomic) _Bool top; // @synthesize top=_top;
@property(nonatomic) _Bool isSelf; // @synthesize isSelf=_isSelf;
@property(nonatomic) _Bool hiddenBottomLineView; // @synthesize hiddenBottomLineView=_hiddenBottomLineView;
@property(nonatomic) _Bool showRewardBeans; // @synthesize showRewardBeans=_showRewardBeans;
@property(nonatomic) double commentCountWidth; // @synthesize commentCountWidth=_commentCountWidth;
@property(nonatomic) double praiseCountWidth; // @synthesize praiseCountWidth=_praiseCountWidth;
@property(copy, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
@property(nonatomic) _Bool showComment; // @synthesize showComment=_showComment;
@property(copy, nonatomic) NSString *sellerType; // @synthesize sellerType=_sellerType;
@property(copy, nonatomic) NSString *userHeadUrl; // @synthesize userHeadUrl=_userHeadUrl;
@property(nonatomic) _Bool isShowBestButton; // @synthesize isShowBestButton=_isShowBestButton;
@property(nonatomic) _Bool isBest; // @synthesize isBest=_isBest;
@property(retain, nonatomic) NSMutableAttributedString *contentAttributedString; // @synthesize contentAttributedString=_contentAttributedString;
@property(retain, nonatomic) CommuneSingleExpertModel *expertInfo; // @synthesize expertInfo=_expertInfo;
@property(retain, nonatomic) CommuneRealNameAuthModel *realNameAuthModel; // @synthesize realNameAuthModel=_realNameAuthModel;
@property(nonatomic) _Bool isLoginPinSameAsAnswerPin; // @synthesize isLoginPinSameAsAnswerPin=_isLoginPinSameAsAnswerPin;
@property(copy, nonatomic) NSString *rewardLabel; // @synthesize rewardLabel=_rewardLabel;
@property(copy, nonatomic) NSString *rewardDeadLine; // @synthesize rewardDeadLine=_rewardDeadLine;
@property(nonatomic) _Bool canAcceptReward; // @synthesize canAcceptReward=_canAcceptReward;
@property(nonatomic) _Bool isRewarded; // @synthesize isRewarded=_isRewarded;
@property(copy, nonatomic) NSString *rewardDate; // @synthesize rewardDate=_rewardDate;
@property(copy, nonatomic) NSString *rewardBeans; // @synthesize rewardBeans=_rewardBeans;
@property(copy, nonatomic) NSString *priaseCount; // @synthesize priaseCount=_priaseCount;
@property(nonatomic) _Bool canPriase; // @synthesize canPriase=_canPriase;
@property(nonatomic) long long cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool showPraise; // @synthesize showPraise=_showPraise;
@property(copy, nonatomic) NSString *userNickName; // @synthesize userNickName=_userNickName;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *answerID; // @synthesize answerID=_answerID;
- (void).cxx_destruct;
- (id)paraStyle;
- (void)layoutFrame;
- (void)setHeight;
- (void)setDataWithDic:(id)arg1;

@end

