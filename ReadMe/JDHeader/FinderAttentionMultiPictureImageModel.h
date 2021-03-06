//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface FinderAttentionMultiPictureImageModel : NSObject
{
    NSString *_imageURL;
    NSString *_imageHDURL;
    long long _type;
    NSString *_price;
    NSString *_skuId;
    NSString *_title;
    NSAttributedString *_attributedTitle;
    NSString *_content;
    NSAttributedString *_attributedContent;
    double _maxHeight;
    double _maxDescHeight;
    double _descWidth;
    double _titleHeight;
    double _titleWidth;
    double _marginHeight;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) double marginHeight; // @synthesize marginHeight=_marginHeight;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(nonatomic) double descWidth; // @synthesize descWidth=_descWidth;
@property(nonatomic) double maxDescHeight; // @synthesize maxDescHeight=_maxDescHeight;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(copy, nonatomic) NSAttributedString *attributedContent; // @synthesize attributedContent=_attributedContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *imageHDURL; // @synthesize imageHDURL=_imageHDURL;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;

@end

