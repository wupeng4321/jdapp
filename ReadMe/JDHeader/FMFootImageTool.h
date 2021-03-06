//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FMFootImageTool : NSObject
{
    _Bool _changeLeftHeelState;
    _Bool _changeRightHeelState;
    NSMutableArray *_leftFootDataArray;
    NSMutableArray *_rightFootDataArray;
}

@property(nonatomic) _Bool changeRightHeelState; // @synthesize changeRightHeelState=_changeRightHeelState;
@property(nonatomic) _Bool changeLeftHeelState; // @synthesize changeLeftHeelState=_changeLeftHeelState;
@property(retain, nonatomic) NSMutableArray *rightFootDataArray; // @synthesize rightFootDataArray=_rightFootDataArray;
@property(retain, nonatomic) NSMutableArray *leftFootDataArray; // @synthesize leftFootDataArray=_leftFootDataArray;
- (void).cxx_destruct;
- (_Bool)saveImageToTemp:(id)arg1 image:(id)arg2 withFileName:(id)arg3;
- (id)scaleImageToNormalStatus:(id)arg1 withIsRight:(_Bool)arg2 withIsHeelpiece:(_Bool)arg3 withIsSelf:(_Bool)arg4;
- (void)destroyFeetMeasuereMent;
- (int)saveImage:(id)arg1 withIsRight:(_Bool)arg2 withisHeelpiece:(_Bool)arg3 isSelfTakePhoto:(_Bool)arg4;
- (int)footTiptoeImagePath:(const char *)arg1 isRightFoot:(_Bool)arg2 isSelfTakePhoto:(_Bool)arg3;
- (int)footHeelpieceImagePath:(const char *)arg1 isRightFoot:(_Bool)arg2 isSelfTakePhoto:(_Bool)arg3;
- (int)footImage:(id)arg1 withStatus:(long long)arg2 isSelfTakePhoto:(_Bool)arg3;

@end

