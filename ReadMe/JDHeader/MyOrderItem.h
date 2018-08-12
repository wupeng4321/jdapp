//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, MyJdHomeModel, NSString, UIImageView, UILabel;
@protocol MyOrderItemDelegate;

@interface MyOrderItem : UIView
{
    JDImageView *_itemIcon;
    UILabel *_itemNumberLabel;
    UIImageView *_numberIcon;
    UILabel *_numberLabel;
    UILabel *_textLabel;
    UILabel *_detailLabel;
    UIImageView *_arrow;
    UIImageView *_redPointIcon;
    _Bool _showArrow;
    UIImageView *_moreIcon;
    NSString *_number;
    MyJdHomeModel *_myHomeModel;
    id <MyOrderItemDelegate> _delegate;
    long long _orderItemSourceType;
}

@property(nonatomic) long long orderItemSourceType; // @synthesize orderItemSourceType=_orderItemSourceType;
@property(retain, nonatomic) UIImageView *redPointIcon; // @synthesize redPointIcon=_redPointIcon;
@property(nonatomic) __weak id <MyOrderItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(retain, nonatomic) MyJdHomeModel *myHomeModel; // @synthesize myHomeModel=_myHomeModel;
@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *itemNumberLabel; // @synthesize itemNumberLabel=_itemNumberLabel;
@property(retain, nonatomic) UIImageView *moreIcon; // @synthesize moreIcon=_moreIcon;
@property(retain, nonatomic) UIImageView *numberIcon; // @synthesize numberIcon=_numberIcon;
@property(retain, nonatomic) JDImageView *itemIcon; // @synthesize itemIcon=_itemIcon;
- (void).cxx_destruct;
- (void)tapGesgureHandle:(id)arg1;
- (void)resetSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

