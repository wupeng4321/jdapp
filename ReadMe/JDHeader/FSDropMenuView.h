//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray;

@interface FSDropMenuView : UIScrollView
{
    CDUnknownBlockType _modelSelectedOfIndex;
    NSArray *_categoryArray;
    long long _lineNum;
}

@property(nonatomic) long long lineNum; // @synthesize lineNum=_lineNum;
@property(retain, nonatomic) NSArray *categoryArray; // @synthesize categoryArray=_categoryArray;
@property(copy, nonatomic) CDUnknownBlockType modelSelectedOfIndex; // @synthesize modelSelectedOfIndex=_modelSelectedOfIndex;
- (void).cxx_destruct;
- (void)currentSelect:(long long)arg1;
- (void)clearAll;
- (void)cateButtonClicked:(id)arg1;
- (void)refreshView;
- (id)initWithCategorys:(id)arg1;

@end

