//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FeedBackRecentOptimizeModel : NSObject
{
    NSString *_feedbackAreaTitle;
    NSArray *_feedbackList;
    NSString *_emotionalImage;
    NSString *_emotionalLanguage;
    NSString *_feedbackPageTitle;
    NSString *_entranceicon;
    NSString *_moreText;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *moreText; // @synthesize moreText=_moreText;
@property(copy, nonatomic) NSString *entranceicon; // @synthesize entranceicon=_entranceicon;
@property(copy, nonatomic) NSString *feedbackPageTitle; // @synthesize feedbackPageTitle=_feedbackPageTitle;
@property(copy, nonatomic) NSString *emotionalLanguage; // @synthesize emotionalLanguage=_emotionalLanguage;
@property(copy, nonatomic) NSString *emotionalImage; // @synthesize emotionalImage=_emotionalImage;
@property(copy, nonatomic) NSArray *feedbackList; // @synthesize feedbackList=_feedbackList;
@property(copy, nonatomic) NSString *feedbackAreaTitle; // @synthesize feedbackAreaTitle=_feedbackAreaTitle;
- (void).cxx_destruct;

@end

