//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDPPickerView, NSArray;

@protocol JDPPickerViewDelegate <NSObject>
- (void)pickerViewUndidSelected:(JDPPickerView *)arg1;
- (void)pickerView:(JDPPickerView *)arg1 didSelectValues:(NSArray *)arg2 keys:(NSArray *)arg3;
@end

