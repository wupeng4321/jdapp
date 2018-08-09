//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinanceCardContentModel, JDStoreNetwork, NSAttributedString;

@interface FinanceCardContentCellPresenter : NSObject
{
    _Bool _showLine;
    double _leftMarginForLine;
    FinanceCardContentModel *_cardContentModel;
    NSAttributedString *_upAttributedString;
    NSAttributedString *_downAttributedString;
    JDStoreNetwork *_network;
}

@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSAttributedString *downAttributedString; // @synthesize downAttributedString=_downAttributedString;
@property(retain, nonatomic) NSAttributedString *upAttributedString; // @synthesize upAttributedString=_upAttributedString;
@property(retain, nonatomic) FinanceCardContentModel *cardContentModel; // @synthesize cardContentModel=_cardContentModel;
@property(nonatomic) double leftMarginForLine; // @synthesize leftMarginForLine=_leftMarginForLine;
@property(nonatomic) _Bool showLine; // @synthesize showLine=_showLine;
- (void).cxx_destruct;
- (id)oneCategory;
- (void)handleContentClickEventWithRow:(long long)arg1 pageParam:(id)arg2;
- (id)extraImageURL;
- (id)extraText;
- (_Bool)extraButtonHidden;
- (_Bool)extraImageViewHidden;
- (id)atrributedStringForDownInfo;
- (id)atrributedStringForUpInfo;
- (id)bizText;
- (id)bizImageURL;
- (id)initWithCardContentModel:(id)arg1;

@end

