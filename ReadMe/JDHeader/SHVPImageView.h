//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDImageView.h"

@interface SHVPImageView : JDImageView
{
    long long _expectedContentMode;
}

@property(nonatomic) long long expectedContentMode; // @synthesize expectedContentMode=_expectedContentMode;
- (void)tapButtonFinishDownloadImage:(id)arg1;
- (void)setImageWithURLNOPlaceHolder:(id)arg1;
- (void)setImageWithURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderColor:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 placeholderColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

