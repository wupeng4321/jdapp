//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FinderTabBarItem : UIView
{
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _networkFinishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType networkFinishBlock; // @synthesize networkFinishBlock=_networkFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)refreshContent;
- (void)assignData:(id)arg1;
- (void)setupViews;
- (id)getModel;

@end

