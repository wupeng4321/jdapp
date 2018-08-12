//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommuneCheckButton, JDButton, NSString, UILabel;

@interface CommunePublishAnswerSubmitView : UIView
{
    _Bool _showVoiceBtn;
    _Bool _anonymousStateChage;
    _Bool _isShowProductButton;
    NSString *_maxlenght;
    NSString *_minlenght;
    NSString *_tiptext;
    long long _productNum;
    CDUnknownBlockType _addProductBlock;
    CDUnknownBlockType _voiceInputBlock;
    CommuneCheckButton *_checkButton;
    UILabel *_textCountLabel;
    JDButton *_voiceBtn;
}

@property(retain, nonatomic) JDButton *voiceBtn; // @synthesize voiceBtn=_voiceBtn;
@property(retain, nonatomic) UILabel *textCountLabel; // @synthesize textCountLabel=_textCountLabel;
@property(retain, nonatomic) CommuneCheckButton *checkButton; // @synthesize checkButton=_checkButton;
@property(nonatomic) _Bool isShowProductButton; // @synthesize isShowProductButton=_isShowProductButton;
@property(nonatomic) _Bool anonymousStateChage; // @synthesize anonymousStateChage=_anonymousStateChage;
@property(copy, nonatomic) CDUnknownBlockType voiceInputBlock; // @synthesize voiceInputBlock=_voiceInputBlock;
@property(nonatomic) _Bool showVoiceBtn; // @synthesize showVoiceBtn=_showVoiceBtn;
@property(copy, nonatomic) CDUnknownBlockType addProductBlock; // @synthesize addProductBlock=_addProductBlock;
@property(nonatomic) long long productNum; // @synthesize productNum=_productNum;
@property(copy, nonatomic) NSString *tiptext; // @synthesize tiptext=_tiptext;
@property(copy, nonatomic) NSString *minlenght; // @synthesize minlenght=_minlenght;
@property(copy, nonatomic) NSString *maxlenght; // @synthesize maxlenght=_maxlenght;
- (void).cxx_destruct;
- (id)getIsAnonymous;
- (id)getAttributedStringWithString:(id)arg1 withAlertColor:(_Bool)arg2;
- (id)countString:(id)arg1;
- (void)handleTextLengthChange:(id)arg1;
- (void)selected:(_Bool)arg1;
- (void)checkBtnClicked:(id)arg1;
- (void)voiceinput;
- (id)startLine;
- (id)initWithFrame:(struct CGRect)arg1 max:(id)arg2 min:(id)arg3 tip:(id)arg4;
- (void)dealloc;

@end
