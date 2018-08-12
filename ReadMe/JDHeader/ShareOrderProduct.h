//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURLSessionTask, PHAsset;
@protocol ShareOrderProductUploadImageDelegate;

@interface ShareOrderProduct : NSObject
{
    _Bool _isSelected;
    _Bool _isMainShow;
    _Bool _isBusy;
    _Bool _notCompress;
    _Bool _showCompressMsg;
    NSString *_wareID;
    NSString *_assetUrl;
    NSString *_identifier;
    long long _position;
    PHAsset *_phAsset;
    NSString *_imageUrl;
    id <ShareOrderProductUploadImageDelegate> _delegate;
    NSURLSessionTask *_uploadTask;
    NSData *_imageData;
    NSString *_crcString;
    double _imageMaxFile;
    double _imageMaxPixel;
    double _startQuality;
    double _endQuality;
    NSString *_authCode;
    NSString *_uploadUrl;
}

@property(nonatomic) _Bool showCompressMsg; // @synthesize showCompressMsg=_showCompressMsg;
@property(nonatomic) _Bool notCompress; // @synthesize notCompress=_notCompress;
@property(nonatomic) _Bool isBusy; // @synthesize isBusy=_isBusy;
@property(copy, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(copy, nonatomic) NSString *authCode; // @synthesize authCode=_authCode;
@property(nonatomic) double endQuality; // @synthesize endQuality=_endQuality;
@property(nonatomic) double startQuality; // @synthesize startQuality=_startQuality;
@property(nonatomic) double imageMaxPixel; // @synthesize imageMaxPixel=_imageMaxPixel;
@property(nonatomic) double imageMaxFile; // @synthesize imageMaxFile=_imageMaxFile;
@property(copy, nonatomic) NSString *crcString; // @synthesize crcString=_crcString;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSURLSessionTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(nonatomic) __weak id <ShareOrderProductUploadImageDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(nonatomic) _Bool isMainShow; // @synthesize isMainShow=_isMainShow;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *assetUrl; // @synthesize assetUrl=_assetUrl;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *wareID; // @synthesize wareID=_wareID;
- (void).cxx_destruct;
- (void)callback:(_Bool)arg1;
- (void)showMessage:(id)arg1;
- (id)compressImageData:(id)arg1 MaxSize:(long long)arg2 quality:(double)arg3 minQueality:(double)arg4;
- (id)getImageData:(id)arg1;
- (void)upfile;
- (void)mtaError:(id)arg1 msg:(id)arg2;
- (void)compressImage;
- (void)upload;
- (void)cancel;
- (id)init;
- (void)dealloc;

@end

