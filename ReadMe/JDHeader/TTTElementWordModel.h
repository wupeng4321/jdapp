//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSNumber, NSString, TTTJumpModel;

@interface TTTElementWordModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_bgColor;
    NSString *_bgPicUrl;
    NSString *_text;
    NSNumber *_picWidth;
    NSNumber *_picHeight;
    NSNumber *_left;
    NSNumber *_up;
    TTTJumpModel *_jump;
}

@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSNumber *up; // @synthesize up=_up;
@property(copy, nonatomic) NSNumber *left; // @synthesize left=_left;
@property(copy, nonatomic) NSNumber *picHeight; // @synthesize picHeight=_picHeight;
@property(copy, nonatomic) NSNumber *picWidth; // @synthesize picWidth=_picWidth;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *bgPicUrl; // @synthesize bgPicUrl=_bgPicUrl;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
