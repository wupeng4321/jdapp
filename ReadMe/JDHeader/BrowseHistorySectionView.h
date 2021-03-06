//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class JDButton, NSArray, UIImageView, UILabel;

@interface BrowseHistorySectionView : UITableViewHeaderFooterView
{
    JDButton *_checkButton;
    UILabel *_titleLabel;
    NSArray *_modelArr;
    UIImageView *_line;
}

@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) NSArray *modelArr; // @synthesize modelArr=_modelArr;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDButton *checkButton; // @synthesize checkButton=_checkButton;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2 alpha:(float)arg3;
- (void)checkBtnClicked:(id)arg1;
- (void)fillData:(id)arg1 editing:(_Bool)arg2;
- (void)selected:(_Bool)arg1;
- (void)editing:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

