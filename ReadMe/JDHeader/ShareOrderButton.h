//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CJDButton.h"

@interface ShareOrderButton : CJDButton
{
    _Bool _isAnonymous;
    _Bool _isnormal;
}

@property(nonatomic) _Bool isnormal; // @synthesize isnormal=_isnormal;
@property(nonatomic) _Bool isAnonymous; // @synthesize isAnonymous=_isAnonymous;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)buttonImageNormal:(_Bool)arg1 anonymous:(_Bool)arg2;

@end

