//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDLabel, PDBPYuyueModel;

@interface PDBPDetailYuyueInfoView : UIView
{
    JDLabel *_yuyueNumLabel;
    PDBPYuyueModel *_model;
}

@property(retain, nonatomic) PDBPYuyueModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDLabel *yuyueNumLabel; // @synthesize yuyueNumLabel=_yuyueNumLabel;
- (void).cxx_destruct;
- (void)renderWithData:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

