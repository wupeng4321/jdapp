//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class notificationContentView;
@protocol WanderShopViewControllerMessageCellDelegate;

@interface WanderShopViewControllerMessageCell : UIView
{
    notificationContentView *content;
    long long unreadCount;
    id <WanderShopViewControllerMessageCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopViewControllerMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount;
- (void).cxx_destruct;
- (void)showMessageCenter;
- (id)initWithFrame:(struct CGRect)arg1;

@end
