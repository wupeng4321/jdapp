//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderContentModel.h"

@class FinderJumpModel, NSArray;

@interface FinderAttentionHeadModel : FinderContentModel
{
    FinderJumpModel *_jump;
    NSArray *_attentionedPersonPicArr;
}

@property(retain, nonatomic) NSArray *attentionedPersonPicArr; // @synthesize attentionedPersonPicArr=_attentionedPersonPicArr;
@property(retain, nonatomic) FinderJumpModel *jump; // @synthesize jump=_jump;
- (void).cxx_destruct;
- (void)attentionedPersonPicArrWithItemList:(id)arg1;
- (double)cellHeight;

@end
