//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class OrderDetailBottomButton;
@protocol OrderDetailBottomButtonDelegate;

@interface NewOrderDetailBottomView : UIView
{
    _Bool noButton;
    OrderDetailBottomButton *_button1;
    OrderDetailBottomButton *_button2;
    OrderDetailBottomButton *_button3;
    OrderDetailBottomButton *_button4;
    id <OrderDetailBottomButtonDelegate> delegate;
}

@property(nonatomic) _Bool noButton; // @synthesize noButton;
@property(nonatomic) __weak id <OrderDetailBottomButtonDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)getNoUsedButton;
- (void)hideAllButtons;
- (void)setupBottomView:(id)arg1;
- (void)creatButtons;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

