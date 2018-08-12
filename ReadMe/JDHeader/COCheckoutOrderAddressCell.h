//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutTableMenuCell.h"

#import "COCheckoutAddressBaseInfoViewDelegate-Protocol.h"

@class COCheckoutShippingAddressModel, NSString, UIButton, UIView;

@interface COCheckoutOrderAddressCell : COCheckoutTableMenuCell <COCheckoutAddressBaseInfoViewDelegate>
{
    UIView *_bottomLine;
    _Bool _isSelected;
    _Bool _enabledDeleteMenu;
    _Bool _defaultAddressFlag;
    COCheckoutShippingAddressModel *_addressModel;
    double _cellHeight;
    UIButton *_defaultBtn;
    UIView *_deleteBtn;
    UIView *_borderView;
    NSString *_name;
    NSString *_mobile;
    NSString *_fullAddress;
}

+ (double)calHeightWithAddress:(id)arg1 selectedFlag:(_Bool)arg2;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool defaultAddressFlag; // @synthesize defaultAddressFlag=_defaultAddressFlag;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIView *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *defaultBtn; // @synthesize defaultBtn=_defaultBtn;
@property(readonly, nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool enabledDeleteMenu; // @synthesize enabledDeleteMenu=_enabledDeleteMenu;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) COCheckoutShippingAddressModel *addressModel; // @synthesize addressModel=_addressModel;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)addressBaseInfoViewEditBtnTaped:(id)arg1;
- (void)prepareForReuse;
- (void)resetMenuButtonsSelecteBtn:(_Bool)arg1 defaultBtn:(_Bool)arg2;
- (void)menuButtonTapped:(id)arg1;
- (void)setupMenuView:(double)arg1;
- (void)layoutSubviews;
- (void)isHiddenLineView:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
