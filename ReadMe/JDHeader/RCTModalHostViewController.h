//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface RCTModalHostViewController : UIViewController
{
    struct CGRect _lastViewFrame;
    long long _preferredStatusBarStyle;
    _Bool _preferredStatusBarHidden;
    CDUnknownBlockType _boundsDidChangeBlock;
    unsigned long long _supportedInterfaceOrientations;
}

@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(copy, nonatomic) CDUnknownBlockType boundsDidChangeBlock; // @synthesize boundsDidChangeBlock=_boundsDidChangeBlock;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (id)init;

@end

