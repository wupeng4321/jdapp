//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, PDBPContainerDataModel;

@interface PDWareBusinessModel : NSObject
{
    PDBPContainerDataModel *_containerData;
    NSArray *_floors;
}

@property(retain, nonatomic) NSArray *floors; // @synthesize floors=_floors;
@property(retain, nonatomic) PDBPContainerDataModel *containerData; // @synthesize containerData=_containerData;
- (void).cxx_destruct;
- (void)setWithDic:(id)arg1;

@end

