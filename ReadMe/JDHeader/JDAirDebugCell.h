//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDAirDebugHistoryModel, UILabel;

@interface JDAirDebugCell : UITableViewCell
{
    JDAirDebugHistoryModel *_historyModel;
    CDUnknownBlockType _clickCb;
    UILabel *_debugUrlValueLabel;
    UILabel *_appNameValueLabel;
}

@property(retain, nonatomic) UILabel *appNameValueLabel; // @synthesize appNameValueLabel=_appNameValueLabel;
@property(retain, nonatomic) UILabel *debugUrlValueLabel; // @synthesize debugUrlValueLabel=_debugUrlValueLabel;
@property(copy, nonatomic) CDUnknownBlockType clickCb; // @synthesize clickCb=_clickCb;
@property(retain, nonatomic) JDAirDebugHistoryModel *historyModel; // @synthesize historyModel=_historyModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

