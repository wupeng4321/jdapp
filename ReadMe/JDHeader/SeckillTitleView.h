//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView;

@interface SeckillTitleView : UIView
{
    JDImageView *_titleView;
}

@property(retain, nonatomic) JDImageView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (struct CGRect)frame;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

