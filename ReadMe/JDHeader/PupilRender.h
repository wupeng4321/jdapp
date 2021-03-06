//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PupilRender : NSObject
{
    unsigned int mProgram;
    unsigned int mLVbo;
    unsigned int mLIbo;
    unsigned int mRVbo;
    unsigned int mRIbo;
    int mUniforms[6];
    unsigned int mTexture[1];
    int _maxTextureUnits;
}

- (void)initialize:(int)arg1;
- (void)SetImagePath:(id)arg1;
- (void)draw:(const float *)arg1 withPoses:(const float *)arg2 pointCount:(int)arg3 withSrcImageSize:(struct CGSize)arg4;
- (struct Vector2D *)mappingTexture:(struct Vector2D *)arg1 point:(struct Vector2D *)arg2 radius:(float)arg3;
- (void)drawPupil:(const float *)arg1 vbo:(int)arg2 ibo:(int)arg3 indexCount:(int)arg4 upperTexture:(float *)arg5 lowerTexture:(float *)arg6 eyeFlag:(int)arg7;
- (void)createBufferObjects;
- (void)createProgram;

@end

