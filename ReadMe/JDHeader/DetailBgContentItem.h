//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class UIImageView;

@interface DetailBgContentItem : JDContentItem
{
    UIImageView *_bgImageView;
    _Bool isExitAccessory;
    id currentModel;
    UIImageView *accessoryView_;
}

+ (id)creatLinesLabelWithTitle:(id)arg1 Frame:(struct CGRect)arg2 Font:(id)arg3;
+ (id)creatLabelWithTitle:(id)arg1 Frame:(struct CGRect)arg2 Font:(id)arg3;
@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=accessoryView_;
@property(retain, nonatomic) id currentModel; // @synthesize currentModel;
@property(nonatomic) _Bool isExitAccessory; // @synthesize isExitAccessory;
- (void).cxx_destruct;
- (void)setAccessoryImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

