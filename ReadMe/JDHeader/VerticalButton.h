//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class JDBadgeItem, NSString, UIImageView, UILabel;

@interface VerticalButton : UIButton
{
    UIImageView *_vertical_ImageView;
    UIImageView *_vertical_ImageView_2;
    UILabel *_vertical_Label;
    JDBadgeItem *_badgeItem;
    NSString *_badgeImageUrl;
    UILabel *_badgeLabel;
    id _dataSource;
}

@property(copy, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(copy, nonatomic) NSString *badgeImageUrl; // @synthesize badgeImageUrl=_badgeImageUrl;
@property(retain, nonatomic) JDBadgeItem *badgeItem; // @synthesize badgeItem=_badgeItem;
@property(retain, nonatomic) UILabel *vertical_Label; // @synthesize vertical_Label=_vertical_Label;
@property(retain, nonatomic) UIImageView *vertical_ImageView_2; // @synthesize vertical_ImageView_2=_vertical_ImageView_2;
@property(retain, nonatomic) UIImageView *vertical_ImageView; // @synthesize vertical_ImageView=_vertical_ImageView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)setBadgeValue:(id)arg1 withFont:(id)arg2 animated:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

