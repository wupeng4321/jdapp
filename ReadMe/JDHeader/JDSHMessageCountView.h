//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface JDSHMessageCountView : UILabel
{
    unsigned long long _style;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)msgAttiText:(id)arg1;
- (id)convertMsgCount:(id)arg1;
- (id)initWithMsgCount:(id)arg1 CountStyle:(long long)arg2;
- (id)initWithMsgCount:(id)arg1;

@end
