//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TTTBoxView;

@interface TTTAdScrollCell : UICollectionViewCell
{
    CDUnknownBlockType _tapBlock;
    TTTBoxView *_boxView;
}

@property(retain, nonatomic) TTTBoxView *boxView; // @synthesize boxView=_boxView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

