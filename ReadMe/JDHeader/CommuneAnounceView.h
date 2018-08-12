//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommuneAnounceCarouselView, NSMutableArray, UIImageView, UILabel;
@protocol CommuneAnounceDelegate;

@interface CommuneAnounceView : UIView
{
    NSMutableArray *_activityArray;
    id <CommuneAnounceDelegate> _delegate;
    UIImageView *_leftActivityIcon;
    UILabel *_rightActivitymore;
    CommuneAnounceCarouselView *_anounceView;
}

@property(retain, nonatomic) CommuneAnounceCarouselView *anounceView; // @synthesize anounceView=_anounceView;
@property(retain, nonatomic) UILabel *rightActivitymore; // @synthesize rightActivitymore=_rightActivitymore;
@property(retain, nonatomic) UIImageView *leftActivityIcon; // @synthesize leftActivityIcon=_leftActivityIcon;
@property(nonatomic) __weak id <CommuneAnounceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *activityArray; // @synthesize activityArray=_activityArray;
- (void).cxx_destruct;
- (void)pauseTimer;
- (void)startTimer;
- (void)callBack:(long long)arg1 AnounceModel:(id)arg2;
- (void)moreAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
