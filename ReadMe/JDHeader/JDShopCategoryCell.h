//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDictionary, NSString, UILabel;

@interface JDShopCategoryCell : UITableViewCell
{
    UILabel *m_titleLabel;
    NSString *titleStr;
    NSDictionary *subDic;
}

@property(retain, nonatomic) NSDictionary *subDic; // @synthesize subDic;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
