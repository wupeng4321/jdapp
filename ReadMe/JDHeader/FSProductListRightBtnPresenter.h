//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FSProductListRightView, FSSWareCompareButton, JDButton, UIButton;

@interface FSProductListRightBtnPresenter : NSObject
{
    FSProductListRightView *_threeRightView;
    double _btnBottom;
    JDButton *_cartButton;
    UIButton *_backButton;
    FSSWareCompareButton *_compareBtn;
}

@property(retain, nonatomic) FSSWareCompareButton *compareBtn; // @synthesize compareBtn=_compareBtn;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) JDButton *cartButton; // @synthesize cartButton=_cartButton;
@property(nonatomic) double btnBottom; // @synthesize btnBottom=_btnBottom;
@property(retain, nonatomic) FSProductListRightView *threeRightView; // @synthesize threeRightView=_threeRightView;
- (void).cxx_destruct;
- (id)changeAskInfoDicToModel:(id)arg1 keyWord:(id)arg2;
- (void)reloadRightView:(double)arg1 rightModel:(CDUnknownBlockType)arg2 hasUpAnimation:(_Bool)arg3;
- (id)initWithParentView:(id)arg1 withCartBtn:(id)arg2 withBackBtn:(id)arg3 compareBtn:(id)arg4 btnClickBlock:(CDUnknownBlockType)arg5;

@end
