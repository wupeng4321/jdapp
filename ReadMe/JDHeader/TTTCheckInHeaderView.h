//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTCheckInTotalModel, UIButton, UILabel;

@interface TTTCheckInHeaderView : TTTBaseView <TTTBaseViewProtocol>
{
    UIButton *_rulesButton;
    UIButton *_backButton;
    UILabel *_bigTxtLabel;
    UILabel *_subTxtLabel;
    JDImageView *_giftImageView;
    TTTCheckInTotalModel *_totalModel;
}

@property(retain, nonatomic) TTTCheckInTotalModel *totalModel; // @synthesize totalModel=_totalModel;
@property(retain, nonatomic) JDImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UILabel *subTxtLabel; // @synthesize subTxtLabel=_subTxtLabel;
@property(retain, nonatomic) UILabel *bigTxtLabel; // @synthesize bigTxtLabel=_bigTxtLabel;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *rulesButton; // @synthesize rulesButton=_rulesButton;
- (void).cxx_destruct;
- (void)backButtonPressed:(id)arg1;
- (void)rulesButtonPressed:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

