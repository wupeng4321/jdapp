//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCharacterSet, NSString;

@interface CBPInputValidator : NSObject
{
    NSString *_promptText;
    long long _maxLength;
    NSArray *_groupCharacterCounts;
    NSString *_seperatorString;
    NSCharacterSet *_validCharacterSet;
}

@property(retain, nonatomic) NSCharacterSet *validCharacterSet; // @synthesize validCharacterSet=_validCharacterSet;
@property(retain, nonatomic) NSString *seperatorString; // @synthesize seperatorString=_seperatorString;
@property(retain, nonatomic) NSArray *groupCharacterCounts; // @synthesize groupCharacterCounts=_groupCharacterCounts;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSString *promptText; // @synthesize promptText=_promptText;
- (void).cxx_destruct;
- (id)rawStringFromFormattedString:(id)arg1;
@property(readonly, nonatomic) long long maxFormattedLength;
- (id)formattedStringFromRawString:(id)arg1;
- (_Bool)isAllCharacterValidForString:(id)arg1;
- (_Bool)isInputValid:(id)arg1;
- (id)init;

@end

