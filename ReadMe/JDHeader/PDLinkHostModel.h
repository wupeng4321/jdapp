//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PDLinkHostModel : NSObject
{
    NSArray *_links;
    NSArray *_hosts;
}

@property(retain, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (id)transferUrl:(id)arg1;
- (id)validateUrl:(id)arg1;

@end

