//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol JDVideoExceptionViewDelegate;

@interface JDVideoPlayerExceptionView : UIView
{
    id <JDVideoExceptionViewDelegate> _delegate;
    UIView *_content;
    long long _style;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *content; // @synthesize content=_content;
@property(nonatomic) __weak id <JDVideoExceptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)timeoutViewWith:(long long)arg1;
- (id)noNetworkViewWith:(long long)arg1;
- (void)exceptionViewClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end

