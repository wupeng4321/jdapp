//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSSHomeFitModel;

@interface FSSHomeFitViewModel : NSObject
{
    _Bool _isViewed;
    FSSHomeFitModel *_model;
}

+ (id)viewModelWithModel:(id)arg1;
@property(nonatomic) _Bool isViewed; // @synthesize isViewed=_isViewed;
@property(readonly, nonatomic) FSSHomeFitModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)removeImageFromMemory;
@property(readonly, nonatomic) double cellHeight;
- (id)initWithModel:(id)arg1;

@end

