//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "JDReloadViewDelegate-Protocol.h"
#import "itemClickDeleagte-Protocol.h"

@class IABackImgModel, IABackImgShowView, IAMainSessionNormalCell, IAMainSessionNormalModel, IAMainSessionNormalRightCell, IAMainSessionNormalRightModel, JDStoreNetwork, NSMutableArray, NSString, UIButton, UIImageView, UIView;

@interface IAModifyBackImageVC : JDViewController <itemClickDeleagte, JDReloadViewDelegate, JDBaseToastViewDelegate>
{
    UIImageView *bgImgView;
    IAMainSessionNormalCell *leftView;
    IAMainSessionNormalRightCell *rightView;
    IABackImgShowView *scrollView;
    UIView *bottomView;
    JDStoreNetwork *bgInfoNetWork;
    JDStoreNetwork *submitBgInfoNetWork;
    NSMutableArray *modelArr;
    IABackImgModel *tempBackImgModel;
    IABackImgModel *defaultBackImgModel;
    _Bool isSubmiting;
    IAMainSessionNormalModel *_leftModel;
    IAMainSessionNormalRightModel *_rightModel;
    NSString *_currentBgId;
    UIButton *_applyBtn;
    UIButton *_restoreBtn;
    UIButton *_iaStoreBtn;
}

@property(retain, nonatomic) UIButton *iaStoreBtn; // @synthesize iaStoreBtn=_iaStoreBtn;
@property(retain, nonatomic) UIButton *restoreBtn; // @synthesize restoreBtn=_restoreBtn;
@property(retain, nonatomic) UIButton *applyBtn; // @synthesize applyBtn=_applyBtn;
@property(copy, nonatomic) NSString *currentBgId; // @synthesize currentBgId=_currentBgId;
@property(retain, nonatomic) IAMainSessionNormalRightModel *rightModel; // @synthesize rightModel=_rightModel;
@property(retain, nonatomic) IAMainSessionNormalModel *leftModel; // @synthesize leftModel=_leftModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)reconnect;
- (void)retrievalModel;
- (void)backButtonClicked;
- (void)itemClickWithSelectModel:(id)arg1 andIndex:(long long)arg2;
- (void)iaStoreBtnClick:(id)arg1;
- (void)restoreBtnClick:(id)arg1;
- (void)applyBtnClick:(id)arg1;
- (void)refreshBgTheme;
- (void)showAllSubView;
- (void)hiddenAllSubView;
- (void)initBottomView;
- (void)initScrollView;
- (void)initRightView;
- (void)initLeftView;
- (void)initBgImgView;
- (void)initUI;
- (void)showData;
- (void)modifySuccess:(id)arg1;
- (void)submitCurrentBgModel:(id)arg1;
- (void)requestServerData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

