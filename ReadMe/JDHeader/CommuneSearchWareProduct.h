//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommuneSearchProduct.h"

#import "NSCoding-Protocol.h"

@class CommuneSearchProductType, NSString;

@interface CommuneSearchWareProduct : CommuneSearchProduct <NSCoding>
{
    CommuneSearchProductType *_type;
    NSString *_imageURL;
    NSString *_wname;
}

@property(copy, nonatomic) NSString *wname; // @synthesize wname=_wname;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) CommuneSearchProductType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)getwareIDAndImageURL;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProduct:(id)arg1;
- (id)initWithWareID:(id)arg1 ImageURL:(id)arg2 WareName:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

