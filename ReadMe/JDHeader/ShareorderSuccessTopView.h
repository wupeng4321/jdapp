//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ShareOrderCommentSuccessInfoModel;

@interface ShareorderSuccessTopView : UIView
{
    ShareOrderCommentSuccessInfoModel *_successInfoModel;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) ShareOrderCommentSuccessInfoModel *successInfoModel; // @synthesize successInfoModel=_successInfoModel;
- (void).cxx_destruct;
- (id)str:(id)arg1 lineSpacing:(double)arg2 font:(id)arg3 textColor:(id)arg4;
- (void)buttonClick;
- (void)addSubviews;

@end

