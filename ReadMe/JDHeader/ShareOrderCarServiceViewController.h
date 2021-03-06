//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "SOZoomInTransitionAnimationContextDelegate-Protocol.h"
#import "ShareOrderCarServiceBaseProtocol-Protocol.h"
#import "ShareOrderCarWareScoreCellDelegate-Protocol.h"
#import "ShareOrderTextViewForCommentCellDelegate-Protocol.h"
#import "ShareOrderTextViewForCommentDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CarServiceModel, JDButton, JDStoreNetwork, NSMutableArray, NSString, ShareOrderCarServiceModel, ShareOrderCommentWareInfoModel, UITableView, UIView;

@interface ShareOrderCarServiceViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, ShareOrderTextViewForCommentDelegate, SOZoomInTransitionAnimationContextDelegate, ShareOrderCarWareScoreCellDelegate, ShareOrderCarServiceBaseProtocol, ShareOrderTextViewForCommentCellDelegate>
{
    JDButton *reloadButton;
    struct CGRect currentCarServiceCommentFrame;
    _Bool carServiceCommentIsFirstResponder;
    NSString *_orderId;
    NSString *_wareId;
    unsigned long long _ServiceType;
    CarServiceModel *_carServiceModel;
    NSMutableArray *_dataArray;
    UITableView *_contentTableView;
    UIView *_exceptionView;
    JDStoreNetwork *_network;
    ShareOrderCommentWareInfoModel *_wareInfoModel;
    ShareOrderCarServiceModel *_carServiceContentModel;
}

@property(retain, nonatomic) ShareOrderCarServiceModel *carServiceContentModel; // @synthesize carServiceContentModel=_carServiceContentModel;
@property(retain, nonatomic) ShareOrderCommentWareInfoModel *wareInfoModel; // @synthesize wareInfoModel=_wareInfoModel;
@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) UIView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) CarServiceModel *carServiceModel; // @synthesize carServiceModel=_carServiceModel;
@property(nonatomic) unsigned long long ServiceType; // @synthesize ServiceType=_ServiceType;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)so_zoomInTransitionAnimationGetReCaptureView:(id)arg1;
- (struct UIEdgeInsets)so_getZoomOutAnimationContextSafeBoundsInsets:(id)arg1;
- (id)so_zoomTransitionAnimationContextGetEndLocationView:(id)arg1 transferInfo:(id)arg2 startImage:(id)arg3;
- (void)endEditingWithCell:(id)arg1 WithCurrentModel:(id)arg2;
- (void)beginEditingWithCell:(id)arg1 WithCurrentModel:(id)arg2;
- (void)rateViewDidChange:(double)arg1 WithCurrentModel:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadDate;
- (void)commitCommetInfo;
- (void)showExceptionView;
- (void)reconnect;
- (void)showToastWithType:(long long)arg1 WithToast:(id)arg2;
- (void)publishCarServiceWithParams:(id)arg1;
- (id)toJSONStringWithArray:(id)arg1;
- (void)publishCarService;
- (id)getDataModelWithCarServiceInfoModel:(id)arg1;
- (void)getCarServicInfo;
- (void)viewWillLayoutSubviews;
- (void)keyboardFrameChange:(id)arg1;
- (void)addContent;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

