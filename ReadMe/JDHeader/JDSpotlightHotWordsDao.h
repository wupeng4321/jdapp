//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDSpotlightBasicDao.h"

@class JDSpotlightManager;

@interface JDSpotlightHotWordsDao : JDSpotlightBasicDao
{
    JDSpotlightManager *_manager;
}

@property(nonatomic) __weak JDSpotlightManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)createHotWordsModel:(id)arg1;
- (void)startInsertData;
- (void)p_insertAndWait:(id)arg1;
- (id)initWithManager:(id)arg1;

@end

