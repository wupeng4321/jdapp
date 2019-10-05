//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, UIControl, UILabel;
@protocol OrderListNavgationRightViewDelegate;

@interface OrderListNavgationRightView : JDView
{
    UILabel *_numberLabel;
    id <OrderListNavgationRightViewDelegate> _itemDelegate;
    JDButton *_searchButton;
    UIControl *_messageDoor;
}

@property(retain, nonatomic) UIControl *messageDoor; // @synthesize messageDoor=_messageDoor;
@property(retain, nonatomic) JDButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) __weak id <OrderListNavgationRightViewDelegate> itemDelegate; // @synthesize itemDelegate=_itemDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSearchIconWithImage:(id)arg1;
- (void)setMessageIconWithBarBgType:(id)arg1;
- (void)searchButtonTapped;
- (void)setupItemWith:(_Bool)arg1 isMessageShow:(_Bool)arg2;
- (id)init;

@end
