//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderContentModel.h"

@class NSArray, NSString;

@interface FinderAttentionAuthorRecModel : FinderContentModel
{
    _Bool _activityActive;
    _Bool _showCartoon;
    NSString *_restNeedFollowing;
    NSString *_restNeedFollowingStr;
    NSString *_clk;
    NSArray *_recAuthors;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSArray *recAuthors; // @synthesize recAuthors=_recAuthors;
@property(nonatomic) _Bool showCartoon; // @synthesize showCartoon=_showCartoon;
@property(copy, nonatomic) NSString *clk; // @synthesize clk=_clk;
@property(nonatomic) _Bool activityActive; // @synthesize activityActive=_activityActive;
@property(copy, nonatomic) NSString *restNeedFollowingStr; // @synthesize restNeedFollowingStr=_restNeedFollowingStr;
@property(copy, nonatomic) NSString *restNeedFollowing; // @synthesize restNeedFollowing=_restNeedFollowing;
- (void).cxx_destruct;
- (double)cellHeight;

@end

