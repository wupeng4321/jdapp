//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TTTTimePointUnit : UIView
{
    UILabel *_timeLabel;
    UIView *_pointView;
    UILabel *_textLabel1;
    UILabel *_textLabel2;
}

@property(retain, nonatomic) UILabel *textLabel2; // @synthesize textLabel2=_textLabel2;
@property(retain, nonatomic) UILabel *textLabel1; // @synthesize textLabel1=_textLabel1;
@property(retain, nonatomic) UIView *pointView; // @synthesize pointView=_pointView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)p_updateTimeColors:(id)arg1 pointModel:(id)arg2;
- (void)p_updateTimeLabels:(id)arg1 pointModel:(id)arg2;
- (void)bindDataWithLineModel:(id)arg1 pointModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
