//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, NSString;

@interface ShareorderSuccessSendView : UIView
{
    CDUnknownBlockType _sendCommentBlock;
    NSString *_wareId;
    JDButton *_anonymousButton;
    JDButton *_sendButton;
}

@property(retain, nonatomic) JDButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) JDButton *anonymousButton; // @synthesize anonymousButton=_anonymousButton;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(copy, nonatomic) CDUnknownBlockType sendCommentBlock; // @synthesize sendCommentBlock=_sendCommentBlock;
- (void).cxx_destruct;
- (void)checkBtnClicked:(id)arg1;
- (void)sendComment;
- (void)initSubViews;
- (id)init;

@end

