//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@protocol TTTTableViewProtocol;

@interface TTTTableView : UITableView
{
    id <TTTTableViewProtocol> _tableProtocol;
}

@property(nonatomic) __weak id <TTTTableViewProtocol> tableProtocol; // @synthesize tableProtocol=_tableProtocol;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

@end

