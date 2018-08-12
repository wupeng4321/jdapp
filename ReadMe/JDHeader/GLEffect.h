//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLKNamedEffect-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface GLEffect : NSObject <GLKNamedEffect>
{
    int *_uniformIndexes;
    _Bool _shaderLoaded;
    unsigned int _program;
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSDictionary *_attributes;
    NSArray *_uniforms;
    NSMutableDictionary *_uniformValues;
    union _GLKMatrix4 _poseMatrix;
    union _GLKMatrix4 _projectionMatrix;
}

@property(nonatomic) unsigned int program; // @synthesize program=_program;
@property(nonatomic) union _GLKMatrix4 projectionMatrix; // @synthesize projectionMatrix=_projectionMatrix;
@property(nonatomic) union _GLKMatrix4 poseMatrix; // @synthesize poseMatrix=_poseMatrix;
@property(readonly, nonatomic) NSMutableDictionary *uniformValues; // @synthesize uniformValues=_uniformValues;
@property(retain, nonatomic) NSArray *uniforms; // @synthesize uniforms=_uniforms;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *fragmentShader; // @synthesize fragmentShader=_fragmentShader;
@property(retain, nonatomic) NSString *vertexShader; // @synthesize vertexShader=_vertexShader;
- (void).cxx_destruct;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3;
- (_Bool)loadShaders;
- (void)configureUniformLocations;
- (void)bindAttribLocations;
- (void)updateUniformValues;
- (void)prepareToDraw;
- (void)dealloc;
- (id)init;

@end
