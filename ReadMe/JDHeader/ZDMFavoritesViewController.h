//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMViewController.h"

#import "ZDMPageViewControllerDelegate-Protocol.h"

@class NSString, ZDMFavoritesRequest, ZDMFollowingUsersViewController, ZDMLikedPostsViewController, ZDMPageViewController, ZDMRouter;

@interface ZDMFavoritesViewController : ZDMViewController <ZDMPageViewControllerDelegate>
{
    ZDMPageViewController *_pageViewController;
    ZDMLikedPostsViewController *_likedPostsViewController;
    ZDMFollowingUsersViewController *_followingUsersViewController;
    ZDMFavoritesRequest *_favoritesRequest;
    ZDMRouter *_router;
}

@property(retain, nonatomic) ZDMRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) ZDMFavoritesRequest *favoritesRequest; // @synthesize favoritesRequest=_favoritesRequest;
@property(retain, nonatomic) ZDMFollowingUsersViewController *followingUsersViewController; // @synthesize followingUsersViewController=_followingUsersViewController;
@property(retain, nonatomic) ZDMLikedPostsViewController *likedPostsViewController; // @synthesize likedPostsViewController=_likedPostsViewController;
@property(retain, nonatomic) ZDMPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;
- (void)on:(id)arg1;
- (void)pageViewController:(id)arg1 didTransitionToViewController:(id)arg2;
- (void)requestFavorites;
- (_Bool)showAllWhiteBar;
- (void)recordPV;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
