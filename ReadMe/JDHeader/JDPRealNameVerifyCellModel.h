//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class JDPRealNameCheckUserCardInfoModel;

@interface JDPRealNameVerifyCellModel : JDPayModel
{
    _Bool _isSelected;
    JDPRealNameCheckUserCardInfoModel *_userCardInfoModel;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) JDPRealNameCheckUserCardInfoModel *userCardInfoModel; // @synthesize userCardInfoModel=_userCardInfoModel;
- (void).cxx_destruct;

@end
