//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTRefreshHeaderContent-Protocol.h"

@class JDImageView, NSArray, NSString, UILabel;

@interface TTTRefreshHeaderContentActivity : UIView <TTTRefreshHeaderContent>
{
    JDImageView *_imageView;
    UILabel *_statusLabel;
    NSArray *_images;
    long long _type;
    CDUnknownBlockType _ChangeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ChangeBlock; // @synthesize ChangeBlock=_ChangeBlock;
- (void).cxx_destruct;
- (void)refreshCanActive;
- (void)refreshCanLoading;
- (void)refreshLoading;
- (void)refreshPulling;
- (void)refreshNomal;
- (void)setImages:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

