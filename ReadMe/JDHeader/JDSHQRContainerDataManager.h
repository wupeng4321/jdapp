//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;
@protocol JDSHQRContainerDataManagerDelegate;

@interface JDSHQRContainerDataManager : NSObject
{
    id <JDSHQRContainerDataManagerDelegate> _delegate;
    JDStoreNetwork *_sharedRequest;
    long long _iQRID;
    long long _iPZGID;
    long long _iARID;
    long long _iJDPayID;
}

+ (id)requestSetupModel;
@property(nonatomic) long long iJDPayID; // @synthesize iJDPayID=_iJDPayID;
@property(nonatomic) long long iARID; // @synthesize iARID=_iARID;
@property(nonatomic) long long iPZGID; // @synthesize iPZGID=_iPZGID;
@property(nonatomic) long long iQRID; // @synthesize iQRID=_iQRID;
@property(retain, nonatomic) JDStoreNetwork *sharedRequest; // @synthesize sharedRequest=_sharedRequest;
@property(nonatomic) __weak id <JDSHQRContainerDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)JDPayRedDotDidAppear;
- (void)pzgRedDotDidAppear;
- (void)arRedDotDidAppear;
- (void)saoyisaoRedDotDidAppear;
- (void)p_processHongdian:(id)arg1;
- (void)refresh;

@end

