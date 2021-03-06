//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol OrderListSegmentViewDelegate;

@interface OrderListSegmentView : UIView
{
    id <OrderListSegmentViewDelegate> _segDelegate;
    NSMutableArray *_array;
    NSMutableArray *_buttonsArray;
    UIView *_separateLine;
}

+ (id)segmentMenuWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property(nonatomic) __weak id <OrderListSegmentViewDelegate> segDelegate; // @synthesize segDelegate=_segDelegate;
- (void).cxx_destruct;
- (void)tabIsSelected:(int)arg1;
- (void)resetButtonsWithout:(unsigned long long)arg1;
- (void)click:(id)arg1;
- (void)addSeparateLine;
- (void)addButtonWith:(id)arg1 index:(int)arg2 num:(int)arg3;
- (void)clearData;
- (void)fillDataWithArray:(id)arg1;
- (void)dealloc;

@end

