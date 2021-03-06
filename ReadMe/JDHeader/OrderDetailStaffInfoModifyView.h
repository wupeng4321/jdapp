//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "UITextFieldDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, OrderAddressModel, UIButton, UIImageView, UILabel, UITextField, UITextView, UIView;
@protocol StaffInfoModifyViewDelegate;

@interface OrderDetailStaffInfoModifyView : JDView <UITextFieldDelegate, UITextViewDelegate>
{
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UITextField *_nameTextField;
    UILabel *_telTitleLabel;
    UITextField *_telTextField;
    UILabel *_addressTitleLabel;
    UILabel *_firstAdresLabel;
    UILabel *_secondAdresLabel;
    UILabel *_streetLabel;
    UILabel *_locationDetailLabel;
    UITextView *_locationDetail;
    UIImageView *_bottomLine;
    UIImageView *_separateLine;
    _Bool _isChangedCounty;
    _Bool _isChangedTown;
    _Bool _firstTimeTap;
    NSString *_originalPhoneNum;
    UIView *_addressView;
    UIView *_streetView;
    UIView *_selfPickView;
    UILabel *_selfPickTitleLabel;
    UIButton *_selfPickDetaileBtn;
    _Bool _isHaveFourthArea;
    UIButton *_thirdAdresBtn;
    UIButton *_streetButton;
    id <StaffInfoModifyViewDelegate> _modifydelegate;
    NSString *_event_param;
    long long _nameModifyLenLimit;
    long long _phoneModifyLenLimit;
    long long _addModifyLenLimit;
    OrderAddressModel *_selectedCounty;
    OrderAddressModel *_selectedTown;
    long long _type;
    OrderAddressModel *_selfPickMdodel;
}

@property(retain, nonatomic) OrderAddressModel *selfPickMdodel; // @synthesize selfPickMdodel=_selfPickMdodel;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) OrderAddressModel *selectedTown; // @synthesize selectedTown=_selectedTown;
@property(retain, nonatomic) OrderAddressModel *selectedCounty; // @synthesize selectedCounty=_selectedCounty;
@property(nonatomic) long long addModifyLenLimit; // @synthesize addModifyLenLimit=_addModifyLenLimit;
@property(nonatomic) long long phoneModifyLenLimit; // @synthesize phoneModifyLenLimit=_phoneModifyLenLimit;
@property(nonatomic) long long nameModifyLenLimit; // @synthesize nameModifyLenLimit=_nameModifyLenLimit;
@property(copy, nonatomic) NSString *event_param; // @synthesize event_param=_event_param;
@property(nonatomic) _Bool isHaveFourthArea; // @synthesize isHaveFourthArea=_isHaveFourthArea;
@property(nonatomic) __weak id <StaffInfoModifyViewDelegate> modifydelegate; // @synthesize modifydelegate=_modifydelegate;
@property(retain, nonatomic) UITextView *locationDetail; // @synthesize locationDetail=_locationDetail;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(retain, nonatomic) UIButton *streetButton; // @synthesize streetButton=_streetButton;
@property(retain, nonatomic) UIButton *thirdAdresBtn; // @synthesize thirdAdresBtn=_thirdAdresBtn;
- (void).cxx_destruct;
- (void)setSelfPickEnable:(_Bool)arg1;
- (void)setStreetEnable:(_Bool)arg1;
- (void)setThirdAdresEnable:(_Bool)arg1;
- (id)getParams:(_Bool)arg1;
- (_Bool)isChineseCharacterOrLettersOrNumbers:(id)arg1 type:(int)arg2;
- (_Bool)checkEmpty;
- (_Bool)checkCharacter;
- (void)updateDetailAddressViewPosition;
- (void)checkAddressChange;
- (void)hideKeyboard;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (struct CGSize)getLabelSizeWith:(id)arg1 text:(id)arg2;
- (struct CGSize)getButtonSizeWith:(id)arg1 text:(id)arg2;
- (void)resetEdgeInsetsWith:(id)arg1 text:(id)arg2;
- (void)refreshSelfPick:(id)arg1;
- (void)refreshTown:(id)arg1;
- (float)getViewHeight;
- (void)setViewWithEditInfo:(id)arg1 type:(long long)arg2 originComponment:(id)arg3 isRiskInfoEncrypt:(_Bool)arg4;
- (void)setupUI;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

