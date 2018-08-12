//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HomePageChannelDisplayItem-Protocol.h"
#import "HomePageChannelInteractiveItem-Protocol.h"

@class NSString;

@interface HomePageChannelReusableView : UIView <HomePageChannelDisplayItem, HomePageChannelInteractiveItem>
{
    NSString *_reuseIdentifier;
}

+ (struct CGSize)calculateSizeWithData:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)handleActionBlock:(CDUnknownBlockType)arg1 withData:(id)arg2;
- (void)populateWithData:(id)arg1;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
