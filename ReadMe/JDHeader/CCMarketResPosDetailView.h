//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;

@interface CCMarketResPosDetailView : UIView
{
    NSString *_jumUrl;
    long long _index;
    NSString *_activityName;
    long long _urlListCount;
}

@property(nonatomic) long long urlListCount; // @synthesize urlListCount=_urlListCount;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *jumUrl; // @synthesize jumUrl=_jumUrl;
- (void).cxx_destruct;
- (void)clickView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

