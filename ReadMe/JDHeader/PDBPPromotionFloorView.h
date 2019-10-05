//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

@class NSArray, NSMutableString, PDBPPromotionModel;
@protocol PDFloorViewProtocol;

@interface PDBPPromotionFloorView : PDFloorBaseView
{
    _Bool _isJx;
    NSMutableString *_mtaString;
    id <PDFloorViewProtocol> _delegate;
    NSArray *_duplicateRemovalArray;
    PDBPPromotionModel *_model;
}

@property(retain, nonatomic) PDBPPromotionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *duplicateRemovalArray; // @synthesize duplicateRemovalArray=_duplicateRemovalArray;
@property(nonatomic) __weak id <PDFloorViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableString *mtaString; // @synthesize mtaString=_mtaString;
@property(nonatomic) _Bool isJx; // @synthesize isJx=_isJx;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)duplicateRemoval:(id)arg1;
- (id)serviceIconWithActivity:(id)arg1;
- (void)updatePromotion;
- (void)resetState;
- (void)renderWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
