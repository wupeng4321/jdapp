//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDKOAuthFloorProtocol-Protocol.h"

@class NSString, NewProductModel, PDKOAuthFloorView;

@interface PDKOAuthFloorViewModel : PDFloorBaseViewModel <PDKOAuthFloorProtocol>
{
    NewProductModel *_model;
    PDKOAuthFloorView *_authView;
}

+ (void)load;
@property(retain, nonatomic) PDKOAuthFloorView *authView; // @synthesize authView=_authView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)refreshAndTapFloor;
- (void)goToAuthPage;
- (void)renderUIWithProductModel:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

