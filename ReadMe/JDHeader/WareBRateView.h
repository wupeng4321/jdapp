//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "InnerRateViewDelegate-Protocol.h"
#import "PDViewProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WareCommentCellDelegate-Protocol.h"
#import "WareCommentImageListDelegate-Protocol.h"

@class InnerRateView, JDButton, NSMutableArray, NSString, NewProductModel, PDCommentSemanticTagView, PDNetworkAccessManager, UITableView, WareDetailCommentModel, WareHomePageVideoPlayerHelper, WareInfoParamModel;
@protocol PDCommentFloorViewProtocol;

@interface WareBRateView : PDFloorBaseView <UITableViewDelegate, UITableViewDataSource, WareCommentImageListDelegate, WareCommentCellDelegate, InnerRateViewDelegate, PDViewProtocol>
{
    _Bool _isVideoLoading;
    JDButton *_wareOrderCommentButton;
    JDButton *_wareConsultButton;
    WareInfoParamModel *_wareInfoParamModel;
    id <PDCommentFloorViewProtocol> _commentDelegate;
    NSMutableArray *_commentVideoArray;
    NSMutableArray *_commentsArray;
    UITableView *_tableView;
    InnerRateView *_rateView;
    WareHomePageVideoPlayerHelper *_videoHelper;
    WareDetailCommentModel *_wareDetailCommentModel;
    NewProductModel *_productModel;
    PDNetworkAccessManager *_networkManager;
    PDCommentSemanticTagView *_commentSemanticTagView;
}

@property(nonatomic) _Bool isVideoLoading; // @synthesize isVideoLoading=_isVideoLoading;
@property(retain, nonatomic) PDCommentSemanticTagView *commentSemanticTagView; // @synthesize commentSemanticTagView=_commentSemanticTagView;
@property(retain, nonatomic) PDNetworkAccessManager *networkManager; // @synthesize networkManager=_networkManager;
@property(retain, nonatomic) NewProductModel *productModel; // @synthesize productModel=_productModel;
@property(retain, nonatomic) WareDetailCommentModel *wareDetailCommentModel; // @synthesize wareDetailCommentModel=_wareDetailCommentModel;
@property(retain, nonatomic) WareHomePageVideoPlayerHelper *videoHelper; // @synthesize videoHelper=_videoHelper;
@property(retain, nonatomic) InnerRateView *rateView; // @synthesize rateView=_rateView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *commentsArray; // @synthesize commentsArray=_commentsArray;
@property(retain, nonatomic) NSMutableArray *commentVideoArray; // @synthesize commentVideoArray=_commentVideoArray;
@property(nonatomic) __weak id <PDCommentFloorViewProtocol> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
@property(retain, nonatomic) WareInfoParamModel *wareInfoParamModel; // @synthesize wareInfoParamModel=_wareInfoParamModel;
@property(retain, nonatomic) JDButton *wareConsultButton; // @synthesize wareConsultButton=_wareConsultButton;
@property(retain, nonatomic) JDButton *wareOrderCommentButton; // @synthesize wareOrderCommentButton=_wareOrderCommentButton;
- (void).cxx_destruct;
- (void)cellTapped:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)innerRateViewTapped;
- (void)videoTapWithModel:(id)arg1 index:(id)arg2;
- (void)imageIndexTapped:(long long)arg1 withModel:(id)arg2 index:(id)arg3;
- (id)prepareNormalCommentCell:(id)arg1 model:(id)arg2;
- (id)prepareVideoCommentCell:(id)arg1 model:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setViewHeight:(double)arg1;
- (void)updateBottomBtnViews;
- (void)updateTableview;
- (void)updateCommentVideoViewCenterY;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)layoutRootSubsView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

