//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface SubScribMessageTypeModel : JDModel
{
    _Bool isSubcribe;
    NSString *_name;
    NSString *_typeId;
    NSString *_type;
}

@property(nonatomic) _Bool isSubcribe; // @synthesize isSubcribe;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

