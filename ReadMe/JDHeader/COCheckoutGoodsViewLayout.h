//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "COCheckoutLayout-Protocol.h"

@class COCheckoutGoodsViewModel, NSAttributedString, NSString, NSURL, UIColor;

@interface COCheckoutGoodsViewLayout : NSObject <COCheckoutLayout>
{
    _Bool _soldOut;
    _Bool _borderHidden;
    double _width;
    double _height;
    COCheckoutGoodsViewModel *_model;
    NSURL *_imageURL;
    NSAttributedString *_attrText;
    UIColor *_textBackgroundColor;
    struct CGRect _frame;
}

+ (id)layoutWithModel:(id)arg1;
@property(nonatomic, getter=isBorderHidden) _Bool borderHidden; // @synthesize borderHidden=_borderHidden;
@property(nonatomic, getter=isSoldOut) _Bool soldOut; // @synthesize soldOut=_soldOut;
@property(retain, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(retain, nonatomic) NSAttributedString *attrText; // @synthesize attrText=_attrText;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) COCheckoutGoodsViewModel *model; // @synthesize model=_model;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
