//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FinderArticleContentModel.h"

@class NSArray, NSString;

@interface NewFinderColumnModel : FinderArticleContentModel
{
    NSString *_newestOrder;
    NSArray *_listImages;
}

+ (id)objectClassInArray;
@property(retain, nonatomic) NSArray *listImages; // @synthesize listImages=_listImages;
@property(copy, nonatomic) NSString *newestOrder; // @synthesize newestOrder=_newestOrder;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

