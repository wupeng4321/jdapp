//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBPSamInfoPartModel : NSObject
{
    _Bool _samCard;
    _Bool _samMember;
    NSString *_samPrice;
    NSString *_cardId;
    NSString *_boundCardUrl;
    NSString *_samIntroduceUrl;
}

@property(copy, nonatomic) NSString *samIntroduceUrl; // @synthesize samIntroduceUrl=_samIntroduceUrl;
@property(copy, nonatomic) NSString *boundCardUrl; // @synthesize boundCardUrl=_boundCardUrl;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(copy, nonatomic) NSString *samPrice; // @synthesize samPrice=_samPrice;
@property(nonatomic) _Bool samMember; // @synthesize samMember=_samMember;
@property(nonatomic) _Bool samCard; // @synthesize samCard=_samCard;
- (void).cxx_destruct;

@end
