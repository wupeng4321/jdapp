//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderTagModel, UILabel;

@interface FinderInventoryDetailTagView : UIView
{
    FinderTagModel *_tagModel;
    CDUnknownBlockType _clickLabel;
    UILabel *_tagLebel;
}

@property(retain, nonatomic) UILabel *tagLebel; // @synthesize tagLebel=_tagLebel;
@property(copy, nonatomic) CDUnknownBlockType clickLabel; // @synthesize clickLabel=_clickLabel;
@property(retain, nonatomic) FinderTagModel *tagModel; // @synthesize tagModel=_tagModel;
- (void).cxx_destruct;
- (void)clickTabListener:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 TagModel:(id)arg2;

@end

