//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FSFilterExpandViewModel, JDButton;

@interface FSFilterExpandCollectionViewCell : UICollectionViewCell
{
    CDUnknownBlockType _clickedBlock;
    FSFilterExpandViewModel *_expandViewModel;
    JDButton *_nameJDButton;
}

@property(retain, nonatomic) JDButton *nameJDButton; // @synthesize nameJDButton=_nameJDButton;
@property(retain, nonatomic) FSFilterExpandViewModel *expandViewModel; // @synthesize expandViewModel=_expandViewModel;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
- (void).cxx_destruct;
- (void)layoutNormalCellWithExpandViewModel:(id)arg1 andIndexPath:(id)arg2;
- (void)cellClicked;
- (void)createCell;
- (id)initWithFrame:(struct CGRect)arg1;

@end
