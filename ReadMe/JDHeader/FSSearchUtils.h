//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FSSearchUtils : NSObject
{
}

+ (id)getFSSRegularFontWithSize:(double)arg1;
+ (id)createImageWithColor:(id)arg1;
+ (id)gradientColors:(id)arg1 start:(struct CGPoint)arg2 end:(struct CGPoint)arg3 isShadow:(_Bool)arg4 cornerRadius:(double)arg5 frame:(struct CGRect)arg6;
+ (void)clearMemoryCachedImageForKey:(id)arg1;
+ (id)fs_mtaDefaultWithString:(id)arg1;
+ (id)getLineModelWithAttributeText:(id)arg1 rect:(double)arg2;
+ (_Bool)isABTestOpenWithKey:(id)arg1;
+ (id)createTextLayer;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2 maxWidth:(double)arg3 maxHeight:(double)arg4;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2 maxWidth:(double)arg3;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2;

@end

