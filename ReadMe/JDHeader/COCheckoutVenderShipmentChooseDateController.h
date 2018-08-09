//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "JZDChooseDateViewDataSource-Protocol.h"
#import "JZDChooseDateViewDelegate-Protocol.h"

@class BigItemPromiseModel, COCheckOutSelectHourIndexPath, COCheckoutDateViewStorageState, COCheckoutGetJZDTimeRangApi, COCheckoutPickShipmentRM, JDActivityIndicatorView, JZDChooseDateView, MidSmallPromiseModel, NSArray, NSMutableArray, NSString, UILabel, UIViewController;

@interface COCheckoutVenderShipmentChooseDateController : COCheckoutAbstractViewController <JZDChooseDateViewDelegate, JZDChooseDateViewDataSource>
{
    _Bool _unSelectedTime;
    _Bool _isPushAction;
    CDUnknownBlockType _chooseDateBlock;
    UIViewController *_targetViewController;
    NSMutableArray *_pickerArray;
    MidSmallPromiseModel *_midSmallPromiseModel;
    BigItemPromiseModel *_bigItemPromiseModel;
    NSArray *_bigInstallDateList;
    COCheckoutPickShipmentRM *_pickShipModel;
    long long _selectedRow;
    long long _selectedRow2;
    COCheckOutSelectHourIndexPath *_selectedTimeIndexPath;
    JZDChooseDateView *_jzdChooseDateView;
    UILabel *_jzdMarkLabel;
    NSMutableArray *_jzdModelsArray;
    NSMutableArray *_titlesArray;
    long long _tabIndex;
    long long _jzdPromiseType;
    long long _dateType;
    NSArray *_tabsMessageArray;
    NSArray *_tabsBubbleImgArray;
    COCheckoutGetJZDTimeRangApi *_getJzdTimeRangApi;
    long long _hourTabIndex;
    JDActivityIndicatorView *_activityIndicatorView;
    COCheckoutDateViewStorageState *_shipmentStateModel;
}

@property(retain, nonatomic) COCheckoutDateViewStorageState *shipmentStateModel; // @synthesize shipmentStateModel=_shipmentStateModel;
@property(retain, nonatomic) JDActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) long long hourTabIndex; // @synthesize hourTabIndex=_hourTabIndex;
@property(retain, nonatomic) COCheckoutGetJZDTimeRangApi *getJzdTimeRangApi; // @synthesize getJzdTimeRangApi=_getJzdTimeRangApi;
@property(retain, nonatomic) NSArray *tabsBubbleImgArray; // @synthesize tabsBubbleImgArray=_tabsBubbleImgArray;
@property(retain, nonatomic) NSArray *tabsMessageArray; // @synthesize tabsMessageArray=_tabsMessageArray;
@property(nonatomic) long long dateType; // @synthesize dateType=_dateType;
@property(nonatomic) long long jzdPromiseType; // @synthesize jzdPromiseType=_jzdPromiseType;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSMutableArray *titlesArray; // @synthesize titlesArray=_titlesArray;
@property(retain, nonatomic) NSMutableArray *jzdModelsArray; // @synthesize jzdModelsArray=_jzdModelsArray;
@property(retain, nonatomic) UILabel *jzdMarkLabel; // @synthesize jzdMarkLabel=_jzdMarkLabel;
@property(retain, nonatomic) JZDChooseDateView *jzdChooseDateView; // @synthesize jzdChooseDateView=_jzdChooseDateView;
@property(retain, nonatomic) COCheckOutSelectHourIndexPath *selectedTimeIndexPath; // @synthesize selectedTimeIndexPath=_selectedTimeIndexPath;
@property(nonatomic) long long selectedRow2; // @synthesize selectedRow2=_selectedRow2;
@property(nonatomic) long long selectedRow; // @synthesize selectedRow=_selectedRow;
@property(retain, nonatomic) COCheckoutPickShipmentRM *pickShipModel; // @synthesize pickShipModel=_pickShipModel;
@property(retain, nonatomic) NSArray *bigInstallDateList; // @synthesize bigInstallDateList=_bigInstallDateList;
@property(retain, nonatomic) BigItemPromiseModel *bigItemPromiseModel; // @synthesize bigItemPromiseModel=_bigItemPromiseModel;
@property(retain, nonatomic) MidSmallPromiseModel *midSmallPromiseModel; // @synthesize midSmallPromiseModel=_midSmallPromiseModel;
@property(retain, nonatomic) NSMutableArray *pickerArray; // @synthesize pickerArray=_pickerArray;
@property(nonatomic) __weak UIViewController *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) _Bool isPushAction; // @synthesize isPushAction=_isPushAction;
@property(copy, nonatomic) CDUnknownBlockType chooseDateBlock; // @synthesize chooseDateBlock=_chooseDateBlock;
@property(nonatomic) _Bool unSelectedTime; // @synthesize unSelectedTime=_unSelectedTime;
- (void).cxx_destruct;
- (id)getInstallDateArrayForModel:(id)arg1;
- (id)getNoDataMsgJZDDayView:(id)arg1;
- (long long)getNoDataIndexJZDDayView:(id)arg1;
- (void)stopNetwork;
- (double)widthLabelWithString:(id)arg1 withFont:(double)arg2;
- (_Bool)isSurpasssCell:(double)arg1;
- (id)getSelectTitle;
- (long long)getHourTabIndexJZDDayView:(id)arg1 selectedRow:(long long)arg2 inTab:(long long)arg3;
- (_Bool)isBzdWithdateView:(id)arg1;
- (void)didFinishJZDDateView:(id)arg1 selectedRow:(long long)arg2 selectedColumn:(id)arg3 inTab:(long long)arg4 inHourTab:(long long)arg5;
- (double)commonDateView:(id)arg1 heightForRow:(long long)arg2;
- (long long)numberOfSectionsInJZDChooseDateView:(id)arg1 forColumn:(long long)arg2 inTab:(long long)arg3;
- (long long)numberOfRowsInJZDChooseDateView:(id)arg1 forColumn:(long long)arg2 section:(long long)arg3 inTab:(long long)arg4;
- (id)titlesOfHourTabInJZDChooseDateView:(id)arg1;
- (id)titlesOfTabInJZDChooseDateView:(id)arg1;
- (id)getYunfeiColorForIndexPath:(id)arg1 forColumn:(long long)arg2;
- (id)dateView:(id)arg1 timeRangForIndexPath:(id)arg2 forColumn:(long long)arg3;
- (id)dateView:(id)arg1 yunfeiColorForIndexPath:(id)arg2 forColumn:(long long)arg3;
- (id)dateView:(id)arg1 yunfeiForIndexPath:(id)arg2 forColumn:(long long)arg3 inTab:(long long)arg4;
- (id)dateView:(id)arg1 titleForIndexPath:(id)arg2 forColumn:(long long)arg3 inTab:(long long)arg4;
- (id)selectRowInHourForRow:(long long)arg1 inTab:(long long)arg2;
- (long long)selectRowInDayForRow:(long long)arg1 inTab:(long long)arg2;
- (long long)dateTypeOfJZDChooseDateView:(id)arg1 inTab:(long long)arg2;
- (void)freshJZDSelected:(id)arg1;
- (void)selectedBigShipDateJSD;
- (void)selectedBigShipDate;
- (id)getTitle:(id)arg1 hour:(id)arg2 carriageMoney:(id)arg3;
- (id)getTitle:(id)arg1 hour:(id)arg2;
- (id)getYunfeiOfBigShipDateJZDForRow:(id)arg1 forColumn:(long long)arg2;
- (id)getYunfeiOfPromiseJZDForIndexPath:(id)arg1 forColumn:(long long)arg2;
- (id)getValueOfBigInstallForRow:(long long)arg1;
- (id)getValueOfPromise211ForRow:(long long)arg1;
- (id)getValueOfPromise411;
- (id)getValueOfBigShipDateJZDForRow:(id)arg1 forColumn:(long long)arg2;
- (id)getValueOfPromiseJZDForIndexPath:(id)arg1 forColumn:(long long)arg2;
- (id)getValueOfPromise311ForRow:(long long)arg1 forColumn:(long long)arg2;
- (void)postChangedShipDateNotificationWithIndex:(long long)arg1;
- (void)makeMidSmallDateViewChange:(long long)arg1 type:(long long)arg2;
- (void)bigShipDateChanged:(id)arg1;
- (void)midSmallShipDateChanged:(id)arg1;
- (void)initPickDateArray:(id)arg1;
- (void)initShipDateArray:(id)arg1;
- (void)initBigShipDateArrayWithModel:(id)arg1;
- (void)initJSDModel:(id)arg1;
- (void)initPromiseJZDModel:(id)arg1;
- (void)initPromise311NewModelForJZD:(id)arg1;
- (void)updateDatesArrayWithTab:(long long)arg1;
- (void)setBigInstallDateModelForJZD:(id)arg1 shipIndex:(long long)arg2;
- (void)setBigShipDateModelForJZD:(id)arg1;
- (void)setPickShipmentModelForJZD:(id)arg1;
- (void)setMidSmallShipDateModel:(id)arg1 shipIndex:(long long)arg2;
- (void)setMidSmallPromiseModelForJZD:(id)arg1;
- (void)upadateNoDataChooseDateViewWithDay:(id)arg1 timeRangResult:(id)arg2 style:(long long)arg3;
- (void)updateJzdTimeRangWithHourTabName:(id)arg1 tabIndex:(long long)arg2;
- (void)presentChooseJZDDateView;
- (void)setEnabledSwipeToParent:(_Bool)arg1;
- (void)tryHideDatePickerViewNotification;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

