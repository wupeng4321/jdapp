//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@interface TTTTimeLineCell : UICollectionViewCell
{
    unsigned long long _num;
    double _gap;
}

@property(nonatomic) double gap; // @synthesize gap=_gap;
@property(nonatomic) unsigned long long num; // @synthesize num=_num;
- (void)p_updateTimelines:(id)arg1;
- (id)p_updateTimeUnits:(id)arg1;
- (void)p_assignNum:(id)arg1;
- (void)p_removeTimeSubviews;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

