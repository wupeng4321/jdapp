//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSHomeElectViewControllerDelegate-Protocol.h"
#import "FSTabExtendedProtocol-Protocol.h"

@class FSHomeElectViewController, NSString;
@protocol FSHomeElectPresenterDelegate;

@interface FSHomeElectPresenter : NSObject <FSTabExtendedProtocol, FSHomeElectViewControllerDelegate>
{
    id <FSHomeElectPresenterDelegate> _delegate;
    FSHomeElectViewController *_homeElectVC;
}

@property(retain, nonatomic) FSHomeElectViewController *homeElectVC; // @synthesize homeElectVC=_homeElectVC;
@property(nonatomic) __weak id <FSHomeElectPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)homeElectBackToTop;
- (void)homeElectScrollViewDidScrollToTop:(id)arg1;
- (void)homeElectScrollViewDidScroll:(id)arg1;
- (void)homeElectScrollViewWillBeginDragging:(id)arg1;
- (id)showRedPointTimekey;
- (id)notShowRedPointkey;
- (void)extendedClickInterfaceWithService:(id)arg1;
- (void)extendedExpoInterfaceWithService:(id)arg1;
- (id)extendedTipImageName;
- (_Bool)removeExtendedChildViewControllerFromParentController;
- (void)resetExtendedSubViewFrame:(struct CGRect)arg1;
- (void)addExtendedChildViewControllerInParentController:(id)arg1 frame:(struct CGRect)arg2 service:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
