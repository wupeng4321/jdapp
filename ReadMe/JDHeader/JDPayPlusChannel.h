//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayBaseChannel.h"

@class JDPayViewController, NSString;

@interface JDPayPlusChannel : JDPayBaseChannel
{
    NSString *_url;
    JDPayViewController *_payView;
    CDUnknownBlockType _block;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)startPay;
- (id)initWithURL:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

