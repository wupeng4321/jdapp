//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MyGiftCardConsumeModel, UILabel, UIView;

@interface MyGiftCardConsumeCell : UITableViewCell
{
    MyGiftCardConsumeModel *_consumeModel;
    double _cellWidth;
    UILabel *_orderIdLabel;
    UILabel *_consumeLabel;
    UILabel *_creatLabel;
    UILabel *_balanceLabel;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *balanceLabel; // @synthesize balanceLabel=_balanceLabel;
@property(retain, nonatomic) UILabel *creatLabel; // @synthesize creatLabel=_creatLabel;
@property(retain, nonatomic) UILabel *consumeLabel; // @synthesize consumeLabel=_consumeLabel;
@property(retain, nonatomic) UILabel *orderIdLabel; // @synthesize orderIdLabel=_orderIdLabel;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(retain, nonatomic) MyGiftCardConsumeModel *consumeModel; // @synthesize consumeModel=_consumeModel;
- (void).cxx_destruct;
- (void)createUI;
- (void)setConsumeModel:(id)arg1 isLastCell:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellWidth:(double)arg3;
- (void)dealloc;

@end

