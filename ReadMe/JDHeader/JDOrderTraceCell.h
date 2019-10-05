//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, JDOrderTraceAttributedLabel, JDOrderTraceCellIcon, JDView, NSString, UILabel;

@interface JDOrderTraceCell : UITableViewCell
{
    JDOrderTraceCellIcon *m_traceCellIcon;
    JDOrderTraceAttributedLabel *traceMessage;
    UILabel *m_traceTime;
    JDView *m_cellSeparateLine;
    JDView *avatarBgView;
    JDImageView *staffAvatar;
    _Bool isLastRow;
    NSString *shareCourierUrl;
    NSString *toCourierUrl;
}

@property(copy, nonatomic) NSString *toCourierUrl; // @synthesize toCourierUrl;
@property(copy, nonatomic) NSString *shareCourierUrl; // @synthesize shareCourierUrl;
@property(retain, nonatomic) JDOrderTraceAttributedLabel *traceMessage; // @synthesize traceMessage;
- (void).cxx_destruct;
- (void)staffImageClicked:(id)arg1;
- (void)updateInstallCellLayout:(id)arg1 cellHeight:(double)arg2;
- (void)layoutSubview:(_Bool)arg1 height:(double)arg2;
- (void)updateTraceCellLayout:(id)arg1 showStaffAvatar:(_Bool)arg2 cellHeight:(double)arg3;
- (void)setStaffAvatarImage:(id)arg1 courierUrl:(id)arg2 shareCourierUrl:(id)arg3;
- (void)updateOrderTraceData:(id)arg1;
- (void)timeLineWithRow:(long long)arg1 dataCount:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
