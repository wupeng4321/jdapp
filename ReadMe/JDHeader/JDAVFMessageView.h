//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDAVFProgressView, NSString, UILabel;
@protocol JDAVFMessageDelegate;

@interface JDAVFMessageView : UIView
{
    NSString *titleLabelString;
    NSString *desLabelString;
    NSString *sizeLabelString;
    NSString *imageString;
    double downLoadSize;
    id <JDAVFMessageDelegate> _delegate;
    UIView *_messageView;
    UIView *_downloadView;
    UIView *_failedView;
    UILabel *_downloadSizeLabel;
    JDAVFProgressView *_progressView;
}

@property(retain, nonatomic) JDAVFProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *downloadSizeLabel; // @synthesize downloadSizeLabel=_downloadSizeLabel;
@property(retain, nonatomic) UIView *failedView; // @synthesize failedView=_failedView;
@property(retain, nonatomic) UIView *downloadView; // @synthesize downloadView=_downloadView;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(nonatomic) __weak id <JDAVFMessageDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)setDownloadSizeLabelText:(id)arg1;
- (void)downloadRetryButtonOnClicked;
- (void)downloadFailed;
- (void)cancelDownLoadButtonOnClicked;
- (void)cancelButtonOnClicked;
- (void)downloadButtonOnClicked;
- (void)showDownloadView;
- (void)downloadedInformatization:(double)arg1;
- (void)downloadedInformatizationFromProgress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTitle:(id)arg2 andDescription:(id)arg3 andSize:(id)arg4 andImage:(id)arg5 andDownLoadSize:(double)arg6;

@end

