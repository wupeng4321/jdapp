//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutTableMenuCell.h"

@class COCheckoutGradientButton, COCheckoutMyAddressModel, COCheckoutTagLabel, NSDictionary, NSNumber, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol COCheckoutMyAddressCellDelegate;

@interface COCheckoutMyAddressCell : COCheckoutTableMenuCell
{
    UIView *_infoView;
    UILabel *_nameLabel;
    UILabel *_mobileLabel;
    UILabel *_fullAddressLabel;
    UIView *_paymentTypeView;
    UIImageView *_bottomLineView;
    UIButton *_newpaymentTypeButton;
    UIButton *_newshipmentTypeButton;
    UIButton *_newCheckoutTypeButton;
    UIButton *_editButton;
    _Bool _defaultAddress;
    _Bool _defaultEasybuy;
    id <COCheckoutMyAddressCellDelegate> _myAddressdelegate;
    COCheckoutMyAddressModel *_addressModel;
    NSString *_name;
    NSString *_mobile;
    NSString *_tagName;
    NSString *_tagId;
    NSString *_fullAddress;
    NSNumber *_paymentID;
    NSNumber *_picksiteID;
    NSNumber *_checkoutType;
    NSNumber *_provinceID;
    UIButton *_defaultBtn;
    COCheckoutGradientButton *_deleteBtn;
    COCheckoutTagLabel *_defaultTagLabel;
    COCheckoutTagLabel *_tagLabel;
    COCheckoutTagLabel *_easyBuyTagLabel;
    NSDictionary *_myAddressTagColorDict;
}

+ (id)spliceStringWithModel:(id)arg1;
+ (double)calHeightWithAddress:(id)arg1;
@property(retain, nonatomic) NSDictionary *myAddressTagColorDict; // @synthesize myAddressTagColorDict=_myAddressTagColorDict;
@property(retain, nonatomic) COCheckoutTagLabel *easyBuyTagLabel; // @synthesize easyBuyTagLabel=_easyBuyTagLabel;
@property(retain, nonatomic) COCheckoutTagLabel *tagLabel; // @synthesize tagLabel=_tagLabel;
@property(retain, nonatomic) COCheckoutTagLabel *defaultTagLabel; // @synthesize defaultTagLabel=_defaultTagLabel;
@property(retain, nonatomic) COCheckoutGradientButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *defaultBtn; // @synthesize defaultBtn=_defaultBtn;
@property(nonatomic, getter=isDefaultEasybuy) _Bool defaultEasybuy; // @synthesize defaultEasybuy=_defaultEasybuy;
@property(nonatomic, getter=isDefualtAddress) _Bool defaultAddress; // @synthesize defaultAddress=_defaultAddress;
@property(retain, nonatomic) NSNumber *provinceID; // @synthesize provinceID=_provinceID;
@property(retain, nonatomic) NSNumber *checkoutType; // @synthesize checkoutType=_checkoutType;
@property(retain, nonatomic) NSNumber *picksiteID; // @synthesize picksiteID=_picksiteID;
@property(retain, nonatomic) NSNumber *paymentID; // @synthesize paymentID=_paymentID;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) COCheckoutMyAddressModel *addressModel; // @synthesize addressModel=_addressModel;
@property(nonatomic) __weak id <COCheckoutMyAddressCellDelegate> myAddressdelegate; // @synthesize myAddressdelegate=_myAddressdelegate;
- (void).cxx_destruct;
- (id)getColorWithTagId:(id)arg1 andType:(long long)arg2;
- (void)resetMenuButtonsWithDefaultBtn:(_Bool)arg1;
- (void)menuButtonTapped:(id)arg1;
- (void)setupMenuView;
- (void)buttonClick:(id)arg1;
- (void)reloadView;
- (void)setupSubViews;
- (void)setDataWithEasyBuyAddressModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
