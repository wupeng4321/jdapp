//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView;
@protocol NSObject;

@interface SHVPSmallVideoLiveLastPageCell : UITableViewCell
{
    UIView *_bottomLine;
    id <NSObject> _data;
    UILabel *_hintLabel;
}

@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void).cxx_destruct;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

