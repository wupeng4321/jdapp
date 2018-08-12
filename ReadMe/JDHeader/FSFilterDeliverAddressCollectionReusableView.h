//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class FSFilterExpandViewModel, NSIndexPath, UIImageView, UILabel;
@protocol FSFilterDeliverAddressCollectionReusableViewDelegate;

@interface FSFilterDeliverAddressCollectionReusableView : UICollectionReusableView
{
    FSFilterExpandViewModel *_expandViewModel;
    NSIndexPath *_indexPath;
    id <FSFilterDeliverAddressCollectionReusableViewDelegate> _delegate;
    UILabel *_expandNameLabel;
    UILabel *_expandSubLabel;
    UILabel *_expandSelectedNameLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *expandSelectedNameLabel; // @synthesize expandSelectedNameLabel=_expandSelectedNameLabel;
@property(retain, nonatomic) UILabel *expandSubLabel; // @synthesize expandSubLabel=_expandSubLabel;
@property(retain, nonatomic) UILabel *expandNameLabel; // @synthesize expandNameLabel=_expandNameLabel;
@property(nonatomic) __weak id <FSFilterDeliverAddressCollectionReusableViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) FSFilterExpandViewModel *expandViewModel; // @synthesize expandViewModel=_expandViewModel;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

