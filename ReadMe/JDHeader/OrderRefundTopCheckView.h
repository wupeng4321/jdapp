//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, UIImageView, UILabel;

@interface OrderRefundTopCheckView : UIView
{
    CDUnknownBlockType _receiptGoodsBlock;
    CDUnknownBlockType _notReceiptGoodsBlock;
    JDButton *_receiptGoodsButton;
    JDButton *_notReceiptGoodsButton;
    UILabel *_titleLabel;
    UIImageView *_splitView;
}

@property(retain, nonatomic) UIImageView *splitView; // @synthesize splitView=_splitView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDButton *notReceiptGoodsButton; // @synthesize notReceiptGoodsButton=_notReceiptGoodsButton;
@property(retain, nonatomic) JDButton *receiptGoodsButton; // @synthesize receiptGoodsButton=_receiptGoodsButton;
@property(copy, nonatomic) CDUnknownBlockType notReceiptGoodsBlock; // @synthesize notReceiptGoodsBlock=_notReceiptGoodsBlock;
@property(copy, nonatomic) CDUnknownBlockType receiptGoodsBlock; // @synthesize receiptGoodsBlock=_receiptGoodsBlock;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (void)touchDown:(id)arg1;
- (void)notReceiptGoods:(id)arg1;
- (void)receiptGoods:(id)arg1;
- (id)initWithReceiptGoods:(CDUnknownBlockType)arg1 notReceiptGoods:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
