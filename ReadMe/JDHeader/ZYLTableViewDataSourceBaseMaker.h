//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UITableView;

@interface ZYLTableViewDataSourceBaseMaker : NSObject
{
    CDUnknownBlockType _scrollViewDidScrollBlock;
    CDUnknownBlockType _scrollViewEndDraggingBlock;
    CDUnknownBlockType _scrollViewEndDeceleratingBlock;
    NSMutableArray *_innerSections;
    UITableView *_tableView;
}

@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSMutableArray *innerSections; // @synthesize innerSections=_innerSections;
@property(copy, nonatomic) CDUnknownBlockType scrollViewEndDeceleratingBlock; // @synthesize scrollViewEndDeceleratingBlock=_scrollViewEndDeceleratingBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewEndDraggingBlock; // @synthesize scrollViewEndDraggingBlock=_scrollViewEndDraggingBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollViewDidScrollBlock; // @synthesize scrollViewDidScrollBlock=_scrollViewDidScrollBlock;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDragging:(CDUnknownBlockType)arg1;
- (void)scrollViewDidScroll:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)tableHeaderView;
- (CDUnknownBlockType)tableFooterView;
- (CDUnknownBlockType)rowHeight;
- (void)configTableViewSectionWithItem:(CDUnknownBlockType)arg1;
- (id)initWithTableView:(id)arg1;
@property(readonly, nonatomic) NSArray *sections;
- (void)dealloc;

@end

