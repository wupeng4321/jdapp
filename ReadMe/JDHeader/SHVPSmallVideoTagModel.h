//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPSmallVideoBaseModel.h"

@class NSMutableAttributedString, NSString, SHVPSmallVideoJumpModel;

@interface SHVPSmallVideoTagModel : SHVPSmallVideoBaseModel
{
    NSString *_tagId;
    NSString *_name;
    SHVPSmallVideoJumpModel *_jump;
    NSMutableAttributedString *_nameStr;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSMutableAttributedString *nameStr; // @synthesize nameStr=_nameStr;
@property(retain, nonatomic) SHVPSmallVideoJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

