//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UIButton, UIScrollView;
@protocol JDShopSearchFilterUnderViewDelegate;

@interface JDShopSearchFilterUnderView : UIView
{
    _Bool _bFromHome;
    id <JDShopSearchFilterUnderViewDelegate> _delegate;
    NSString *_pageId;
    NSString *_shopId;
    UIButton *_resetBtn;
    UIButton *_commitBtn;
    UIScrollView *_btnScrollView;
    NSMutableArray *_btnDataArr;
    NSMutableArray *_btnArr;
    NSMutableArray *_btnTempDataArr;
}

@property(retain, nonatomic) NSMutableArray *btnTempDataArr; // @synthesize btnTempDataArr=_btnTempDataArr;
@property(retain, nonatomic) NSMutableArray *btnArr; // @synthesize btnArr=_btnArr;
@property(retain, nonatomic) NSMutableArray *btnDataArr; // @synthesize btnDataArr=_btnDataArr;
@property(retain, nonatomic) UIScrollView *btnScrollView; // @synthesize btnScrollView=_btnScrollView;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) UIButton *resetBtn; // @synthesize resetBtn=_resetBtn;
@property(nonatomic) _Bool bFromHome; // @synthesize bFromHome=_bFromHome;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) __weak id <JDShopSearchFilterUnderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)commitBtnClick;
- (void)resetBtnClick;
- (void)buttonClick:(id)arg1;
- (void)layoutButtons;
- (void)refreshInStockBtnStatus:(_Bool)arg1;
- (void)layoutViewWithDeliverDesc:(id)arg1 inStockDesc:(id)arg2;
- (void)addAllBtns:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

