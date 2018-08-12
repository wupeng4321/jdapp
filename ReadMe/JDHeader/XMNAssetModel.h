//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem, NSDictionary, NSString, UIImage;

@interface XMNAssetModel : NSObject
{
    _Bool _selected;
    UIImage *_originImage;
    UIImage *_thumbnail;
    UIImage *_previewImage;
    long long _imageOrientation;
    AVPlayerItem *_playerItem;
    NSDictionary *_playerItemInfo;
    NSString *_filename;
    NSString *_filepath;
    id _asset;
    unsigned long long _type;
    NSString *_timeLength;
}

+ (id)modelWithAsset:(id)arg1 type:(unsigned long long)arg2 timeLength:(id)arg3;
+ (id)modelWithAsset:(id)arg1 type:(unsigned long long)arg2;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *timeLength; // @synthesize timeLength=_timeLength;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id asset; // @synthesize asset=_asset;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, copy, nonatomic) NSString *filepath; // @synthesize filepath=_filepath;
@property(readonly, copy, nonatomic) NSDictionary *playerItemInfo; // @synthesize playerItemInfo=_playerItemInfo;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) long long imageOrientation; // @synthesize imageOrientation=_imageOrientation;
@property(readonly, nonatomic, getter=thumbnail) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;

@end

