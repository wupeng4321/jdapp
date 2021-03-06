//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class JDAddOnDisplayView, JDAddOnItemModel, NSDictionary, NSString, SCShopCartFreshTagModel;

@interface JDAddOnItemViewController : JDViewController
{
    NSDictionary *_addOnItemParams;
    CDUnknownBlockType _addItemLocationBlock;
    JDAddOnItemModel *_addOnItem;
    SCShopCartFreshTagModel *_selectedTagModel;
    JDAddOnDisplayView *_displayView;
    NSString *_linkUrl;
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) JDAddOnDisplayView *displayView; // @synthesize displayView=_displayView;
@property(retain, nonatomic) SCShopCartFreshTagModel *selectedTagModel; // @synthesize selectedTagModel=_selectedTagModel;
@property(retain, nonatomic) JDAddOnItemModel *addOnItem; // @synthesize addOnItem=_addOnItem;
@property(copy, nonatomic) CDUnknownBlockType addItemLocationBlock; // @synthesize addItemLocationBlock=_addItemLocationBlock;
@property(retain, nonatomic) NSDictionary *addOnItemParams; // @synthesize addOnItemParams=_addOnItemParams;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)backButtonClicked;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showFreightRule;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

