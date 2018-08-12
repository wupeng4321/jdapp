//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDViewKitRootModel, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface JDViewKitManager : NSObject
{
    NSDictionary *_dataDictonary;
    NSMutableArray *_modelArray;
    NSMutableDictionary *_containerDictionary;
    Class _modelFactoryClass;
    JDViewKitRootModel *_rootModel;
    NSString *_uniqueId;
}

@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) JDViewKitRootModel *rootModel; // @synthesize rootModel=_rootModel;
@property(retain, nonatomic) Class modelFactoryClass; // @synthesize modelFactoryClass=_modelFactoryClass;
@property(retain, nonatomic) NSMutableDictionary *containerDictionary; // @synthesize containerDictionary=_containerDictionary;
@property(retain, nonatomic) NSMutableArray *modelArray; // @synthesize modelArray=_modelArray;
@property(retain, nonatomic) NSDictionary *dataDictonary; // @synthesize dataDictonary=_dataDictonary;
- (void).cxx_destruct;
- (id)description;
- (id)getViewWithDslRoot:(id)arg1 dslData:(id)arg2;
- (double)getFloorHeightWithDslRoot:(id)arg1 dslData:(id)arg2;
- (double)getFloorHeightWithDslRoot:(id)arg1;
- (void)updateDslMap:(id)arg1;
- (void)destroy;
- (id)getIdentifierIDWithDslRoot:(id)arg1 dslData:(id)arg2;
- (id)getViewKitVersion;
- (void)updateView:(id)arg1 dslData:(id)arg2;
- (id)getContainerViewWithStyle:(id)arg1;
- (id)init;
- (void)dealloc;

@end

