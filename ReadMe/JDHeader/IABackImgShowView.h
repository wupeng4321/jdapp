//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UIScrollView;
@protocol itemClickDeleagte;

@interface IABackImgShowView : UIView
{
    id <itemClickDeleagte> _delegate;
    UIScrollView *_scrollView;
    NSMutableArray *_dataArr;
    UIImageView *_lastSeletImgView;
}

@property(retain, nonatomic) UIImageView *lastSeletImgView; // @synthesize lastSeletImgView=_lastSeletImgView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <itemClickDeleagte> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getModelFromImgView:(id)arg1;
- (void)cancelBorder:(id)arg1;
- (void)drawBorder:(id)arg1;
- (void)itemClick:(id)arg1;
- (void)showDataSource:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

