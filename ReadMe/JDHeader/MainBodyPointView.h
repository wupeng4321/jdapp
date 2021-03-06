//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIButton;

@interface MainBodyPointView : UIView
{
    UIButton *_btnSelectPoint;
    NSArray *_arrPoints;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSArray *arrPoints; // @synthesize arrPoints=_arrPoints;
@property(readonly, nonatomic) UIButton *btnSelectPoint; // @synthesize btnSelectPoint=_btnSelectPoint;
- (void).cxx_destruct;
- (void)shiningAllPoints;
- (void)buttonAction:(id)arg1;
- (void)addThePoints;
- (id)initWithframe:(struct CGRect)arg1 points:(id)arg2 pointAction:(CDUnknownBlockType)arg3;

@end

