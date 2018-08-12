//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, OrderDetailFloorView_OrderState, OrderDetailFloorView_PinGou, OrderDetailFloorView_QA;
@protocol OrderDetailFloorBaseViewDelegate;

@interface NewOrderDetailConfigCell : UITableViewCell
{
    NSMutableArray *_viewsArray;
    id <OrderDetailFloorBaseViewDelegate> _cellDelegate;
    OrderDetailFloorView_OrderState *_stateView;
    OrderDetailFloorView_PinGou *_pingouView;
    OrderDetailFloorView_QA *_qaView;
}

+ (double)getHeightWith:(id)arg1;
@property(retain, nonatomic) OrderDetailFloorView_QA *qaView; // @synthesize qaView=_qaView;
@property(retain, nonatomic) OrderDetailFloorView_PinGou *pingouView; // @synthesize pingouView=_pingouView;
@property(retain, nonatomic) OrderDetailFloorView_OrderState *stateView; // @synthesize stateView=_stateView;
@property(nonatomic) __weak id <OrderDetailFloorBaseViewDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSMutableArray *viewsArray; // @synthesize viewsArray=_viewsArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

