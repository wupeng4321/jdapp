//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSString, TTTJumpModel;

@interface TTTTagModel : TTTBaseModel
{
    NSString *_text;
    TTTJumpModel *_jump;
}

@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;

@end
