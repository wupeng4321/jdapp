//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class FSSearchBackKeyWordsView, UIButton, UIImageView, UILabel;

@interface FSSearchNoDataView : UIScrollView
{
    UIImageView *_joy;
    UILabel *_dataTitle;
    UIButton *_allSiteButton;
    CDUnknownBlockType _searchForKeyword;
    CDUnknownBlockType _searchAllSite;
    FSSearchBackKeyWordsView *_backKeywordsView;
}

@property(retain, nonatomic) FSSearchBackKeyWordsView *backKeywordsView; // @synthesize backKeywordsView=_backKeywordsView;
@property(copy, nonatomic) CDUnknownBlockType searchAllSite; // @synthesize searchAllSite=_searchAllSite;
@property(copy, nonatomic) CDUnknownBlockType searchForKeyword; // @synthesize searchForKeyword=_searchForKeyword;
- (void).cxx_destruct;
- (void)showNoDataAllSiteWithFrame:(struct CGRect)arg1 currentKeyWord:(id)arg2 abVersion:(id)arg3 channelTitle:(id)arg4;
- (void)showNoDataWithBackKeywords:(id)arg1 withFrame:(struct CGRect)arg2 currentKeyWord:(id)arg3 abVersion:(id)arg4 mTest:(id)arg5;
- (void)showNoDataViewWithFrame:(struct CGRect)arg1 msg:(id)arg2;
- (void)showNoDataViewWithFrame:(struct CGRect)arg1;
- (void)hidenNoData;
- (void)allSiteButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;

@end

