//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GLTools : NSObject
{
}

+ (id)textureToUIImage:(int)arg1 withHeight:(int)arg2;
+ (int)loadTextureFromPath:(id)arg1;
+ (int)loadTexture:(id)arg1;
+ (const char *)loadTextFile:(id)arg1;
+ (int)createProgram:(const char *)arg1 withfrag:(const char *)arg2;
+ (int)createProgram:(const char *)arg1 withfrag:(const char *)arg2 withattribute:(const char **)arg3 withattributebinding:(const int *)arg4 withattrcount:(int)arg5 withuniform:(const char **)arg6 withuniformbinding:(int *)arg7 withuniformcount:(int)arg8;
+ (int)validateProgram:(unsigned int)arg1;
+ (int)linkProgram:(unsigned int)arg1;
+ (int)compileShader:(unsigned int)arg1 withstring:(const char *)arg2 withshader:(unsigned int *)arg3;
+ (void)checkGLError:(const char *)arg1;

@end

