//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FSAdShopChildLinkModel : NSObject
{
    NSString *_linkType;
    NSString *_keyword;
    NSString *_linkUrl;
    NSString *_linkClickUrl;
}

@property(copy, nonatomic) NSString *linkClickUrl; // @synthesize linkClickUrl=_linkClickUrl;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *linkType; // @synthesize linkType=_linkType;
- (void).cxx_destruct;

@end
