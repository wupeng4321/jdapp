//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSString, TTTJumpModel;

@interface TTTTextHeadUintModel : TTTBaseModel
{
    NSString *_tabDefaultImage;
    NSString *_tabSelectedImage;
    TTTJumpModel *_jump;
    NSString *_name;
    NSString *_groupId;
    double _textWidth;
    struct CGRect _frame;
}

@property(nonatomic) double textWidth; // @synthesize textWidth=_textWidth;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *tabSelectedImage; // @synthesize tabSelectedImage=_tabSelectedImage;
@property(copy, nonatomic) NSString *tabDefaultImage; // @synthesize tabDefaultImage=_tabDefaultImage;
- (void).cxx_destruct;

@end

