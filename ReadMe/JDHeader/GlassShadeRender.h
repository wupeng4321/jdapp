//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GlassShadeRender : NSObject
{
    unsigned int mProgram;
    unsigned int mVBO;
    unsigned int mIBO;
    int mUniforms[1];
    unsigned int mPointAttrLoc[1];
    union _GLKMatrix4 mModelMatrix;
    union _GLKMatrix4 mVMatrix;
    union _GLKMatrix4 mProjMatrix;
    union _GLKMatrix4 mModelViewMatrix;
    union _GLKMatrix4 mMVPMatrix;
    int *mARGlassHandle;
    const char *mPath;
}

- (void)draw:(struct CGSize)arg1 withPointCount:(int)arg2 withShape:(const float *)arg3 withPose:(const float *)arg4;
- (void)drawGlass:(struct CGSize)arg1 withPointCount:(int)arg2 withShape:(const float *)arg3 withPose:(const float *)arg4;
- (void)drawGlassShade:(struct CGSize)arg1 withPointCount:(int)arg2 withShape:(const float *)arg3 withPose:(const float *)arg4;
- (void)unloadModel;
- (void)loadModel:(const char *)arg1 withGlassShadePath:(const char *)arg2;
- (void)onExit;
- (void)onSizeChanged:(struct CGSize)arg1;
- (void)initialize;

@end

