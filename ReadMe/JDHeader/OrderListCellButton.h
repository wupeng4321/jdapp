//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDButton, NSString;
@protocol OrderListCellButtonDelegate;

@interface OrderListCellButton : JDView
{
    _Bool _buttonEnabled;
    int _buttoType;
    id <OrderListCellButtonDelegate> _btnDelegate;
    JDButton *_button;
    NSString *_jumpUrl;
    NSString *_opType;
}

@property(retain, nonatomic) NSString *opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool buttonEnabled; // @synthesize buttonEnabled=_buttonEnabled;
@property(nonatomic) int buttoType; // @synthesize buttoType=_buttoType;
@property(retain, nonatomic) JDButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <OrderListCellButtonDelegate> btnDelegate; // @synthesize btnDelegate=_btnDelegate;
- (void).cxx_destruct;
- (void)clickedButton;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setButtoType:(int)arg1 islastBtn:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

