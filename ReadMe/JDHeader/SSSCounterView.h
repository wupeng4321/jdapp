//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SSSCounterView : UIView
{
    UILabel *_lblCurrentNum;
    UILabel *_lblTotalCount;
}

@property(retain, nonatomic) UILabel *lblTotalCount; // @synthesize lblTotalCount=_lblTotalCount;
@property(retain, nonatomic) UILabel *lblCurrentNum; // @synthesize lblCurrentNum=_lblCurrentNum;
- (void).cxx_destruct;
- (void)strokeLine;
- (void)configCurrentIndex:(long long)arg1 totoalIndex:(long long)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

