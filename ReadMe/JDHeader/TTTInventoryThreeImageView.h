//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface TTTInventoryThreeImageView : TTTBaseView <TTTBaseViewProtocol>
{
    NSMutableArray *_imagesList;
    NSMutableArray *_brandsList;
}

@property(retain, nonatomic) NSMutableArray *brandsList; // @synthesize brandsList=_brandsList;
@property(retain, nonatomic) NSMutableArray *imagesList; // @synthesize imagesList=_imagesList;
- (void).cxx_destruct;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
