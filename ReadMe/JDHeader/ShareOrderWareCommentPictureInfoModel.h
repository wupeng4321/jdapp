//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface ShareOrderWareCommentPictureInfoModel : JDModel
{
    NSString *_mediaType;
    NSString *_picURL;
    NSString *_largePicURL;
    NSString *_picWidth;
    NSString *_picHeight;
    NSString *_mediaId;
    NSString *_mediaLength;
    NSString *_mediaUrl;
    NSString *_jShowPicJumpUrl;
}

@property(copy, nonatomic) NSString *jShowPicJumpUrl; // @synthesize jShowPicJumpUrl=_jShowPicJumpUrl;
@property(copy, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl=_mediaUrl;
@property(copy, nonatomic) NSString *mediaLength; // @synthesize mediaLength=_mediaLength;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *picHeight; // @synthesize picHeight=_picHeight;
@property(copy, nonatomic) NSString *picWidth; // @synthesize picWidth=_picWidth;
@property(copy, nonatomic) NSString *largePicURL; // @synthesize largePicURL=_largePicURL;
@property(copy, nonatomic) NSString *picURL; // @synthesize picURL=_picURL;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

