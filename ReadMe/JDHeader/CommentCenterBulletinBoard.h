//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol CommentCenterBulletinBoardDelegate;

@interface CommentCenterBulletinBoard : UIView
{
    UILabel *_contentLabel;
    NSString *_content;
    NSString *_jumpUrl;
    NSString *_version;
    id <CommentCenterBulletinBoardDelegate> _delegate;
}

@property(nonatomic) __weak id <CommentCenterBulletinBoardDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)closeView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

