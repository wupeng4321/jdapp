//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIView;

@interface JDStoryCoreStorySearchSuggestCell : UITableViewCell
{
    NSString *_item;
    UILabel *_keyWord;
    UIView *_longSeparatorView;
}

@property(retain, nonatomic) UIView *longSeparatorView; // @synthesize longSeparatorView=_longSeparatorView;
@property(retain, nonatomic) UILabel *keyWord; // @synthesize keyWord=_keyWord;
@property(copy, nonatomic) NSString *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

