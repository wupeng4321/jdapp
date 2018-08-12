//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UPJsonBase.h"

#import "UPJsonParser-Protocol.h"

@interface UPJsonParser : UPJsonBase <UPJsonParser>
{
    const char *c;
}

+ (void)initialize;
- (_Bool)scanIsAtEnd;
- (_Bool)scanNumber:(id *)arg1;
- (_Bool)scanHexQuad:(unsigned short *)arg1;
- (_Bool)scanUnicodeChar:(unsigned short *)arg1;
- (_Bool)scanRestOfString:(id *)arg1;
- (_Bool)scanRestOfDictionary:(id *)arg1;
- (_Bool)scanRestOfArray:(id *)arg1;
- (_Bool)scanRestOfNull:(id *)arg1;
- (_Bool)scanRestOfFalse:(id *)arg1;
- (_Bool)scanRestOfTrue:(id *)arg1;
- (_Bool)scanValue:(id *)arg1;
- (id)objectWithString:(id)arg1;
- (id)fragmentWithString:(id)arg1;

@end

