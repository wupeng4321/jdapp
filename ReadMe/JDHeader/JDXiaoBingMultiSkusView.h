//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView;

@interface JDXiaoBingMultiSkusView : UIView
{
    UIImageView *m_contentView;
    UIView *m_line;
    long long positionInTable;
    NSMutableArray *skusArray;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)skuImgClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)resizeViewLayout:(struct CGRect)arg1;
- (void)setSkusArrayAndPosition:(id)arg1 position:(long long)arg2;

@end

