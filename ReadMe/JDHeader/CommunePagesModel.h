//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface CommunePagesModel : JDModel
{
    NSString *_topBarColorStr;
    NSString *_topBarImgStr;
    NSString *_title;
    NSArray *_fuctionModels;
    NSString *_templet;
    NSString *_actionURL;
    long long _currentPage;
    id _items;
    struct CGPoint _contentOffset;
}

@property(retain, nonatomic) id items; // @synthesize items=_items;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(copy, nonatomic) NSString *templet; // @synthesize templet=_templet;
@property(retain, nonatomic) NSArray *fuctionModels; // @synthesize fuctionModels=_fuctionModels;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *topBarImgStr; // @synthesize topBarImgStr=_topBarImgStr;
@property(copy, nonatomic) NSString *topBarColorStr; // @synthesize topBarColorStr=_topBarColorStr;
- (void).cxx_destruct;
- (id)getFunctionModelWithFunctionId:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (id)createFunctions:(id)arg1;

@end
