//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface TTTWaresInfiniteTagView : UIView
{
    UILabel *_firstTag;
    UILabel *_secondTag;
}

@property(retain, nonatomic) UILabel *secondTag; // @synthesize secondTag=_secondTag;
@property(retain, nonatomic) UILabel *firstTag; // @synthesize firstTag=_firstTag;
- (void).cxx_destruct;
- (void)tagLabelLayout;
- (void)setWaresTag:(id)arg1 secondTag:(id)arg2 tagColor:(id)arg3;
- (id)creatTagLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

