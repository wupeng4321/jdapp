//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDIcon, JDImageView, JDSearchShopModel, NSString, UIImageView, UILabel, UIView;

@interface JDNewSearchShopTableViewCell : UITableViewCell
{
    _Bool _bFromHomeTab;
    UIView *m_contentView;
    UIView *m_shopHeadView;
    JDImageView *m_shopLogoImg;
    UILabel *m_shopName;
    UIView *m_scoreContainerView;
    UILabel *m_score;
    UILabel *m_pingfenLbl;
    UILabel *m_followNum;
    UIView *m_shopIcon;
    JDIcon *m_couponIcon;
    UILabel *m_goInLab;
    UIView *m_productImgContainer;
    JDImageView *m_productImg1;
    JDImageView *m_productImg2;
    JDImageView *m_productImg3;
    UIImageView *m_productKillImg1;
    UIImageView *m_productKillImg2;
    UIImageView *m_productKillImg3;
    UILabel *m_priceLab1;
    UILabel *m_priceLab2;
    UILabel *m_priceLab3;
    UIView *m_topSepLine;
    UIView *m_bottomSepLine;
    JDSearchShopModel *m_dataDic;
    NSString *m_keyword;
    NSString *_cateId;
    NSString *_testid;
    NSString *_testId;
    UIView *_priceBg1;
    UIView *_priceBg2;
    UIView *_priceBg3;
    UIView *_middleSepLine;
}

@property(retain, nonatomic) UIView *middleSepLine; // @synthesize middleSepLine=_middleSepLine;
@property(retain, nonatomic) UIView *priceBg3; // @synthesize priceBg3=_priceBg3;
@property(retain, nonatomic) UIView *priceBg2; // @synthesize priceBg2=_priceBg2;
@property(retain, nonatomic) UIView *priceBg1; // @synthesize priceBg1=_priceBg1;
@property(retain, nonatomic) NSString *testId; // @synthesize testId=_testId;
@property(retain, nonatomic) NSString *testid; // @synthesize testid=_testid;
@property(retain, nonatomic) NSString *cateId; // @synthesize cateId=_cateId;
@property(nonatomic) _Bool bFromHomeTab; // @synthesize bFromHomeTab=_bFromHomeTab;
@property(retain, nonatomic) NSString *m_keyword; // @synthesize m_keyword;
@property(retain, nonatomic) JDSearchShopModel *m_dataDic; // @synthesize m_dataDic;
@property(retain, nonatomic) UIView *m_bottomSepLine; // @synthesize m_bottomSepLine;
@property(retain, nonatomic) UIView *m_topSepLine; // @synthesize m_topSepLine;
@property(retain, nonatomic) UILabel *m_priceLab3; // @synthesize m_priceLab3;
@property(retain, nonatomic) UILabel *m_priceLab2; // @synthesize m_priceLab2;
@property(retain, nonatomic) UILabel *m_priceLab1; // @synthesize m_priceLab1;
@property(retain, nonatomic) UIImageView *m_productKillImg3; // @synthesize m_productKillImg3;
@property(retain, nonatomic) UIImageView *m_productKillImg2; // @synthesize m_productKillImg2;
@property(retain, nonatomic) UIImageView *m_productKillImg1; // @synthesize m_productKillImg1;
@property(retain, nonatomic) JDImageView *m_productImg3; // @synthesize m_productImg3;
@property(retain, nonatomic) JDImageView *m_productImg2; // @synthesize m_productImg2;
@property(retain, nonatomic) JDImageView *m_productImg1; // @synthesize m_productImg1;
@property(retain, nonatomic) UIView *m_productImgContainer; // @synthesize m_productImgContainer;
@property(retain, nonatomic) UILabel *m_goInLab; // @synthesize m_goInLab;
@property(retain, nonatomic) JDIcon *m_couponIcon; // @synthesize m_couponIcon;
@property(retain, nonatomic) UIView *m_shopIcon; // @synthesize m_shopIcon;
@property(retain, nonatomic) UILabel *m_followNum; // @synthesize m_followNum;
@property(retain, nonatomic) UILabel *m_pingfenLbl; // @synthesize m_pingfenLbl;
@property(retain, nonatomic) UILabel *m_score; // @synthesize m_score;
@property(retain, nonatomic) UIView *m_scoreContainerView; // @synthesize m_scoreContainerView;
@property(retain, nonatomic) UILabel *m_shopName; // @synthesize m_shopName;
@property(retain, nonatomic) JDImageView *m_shopLogoImg; // @synthesize m_shopLogoImg;
@property(retain, nonatomic) UIView *m_shopHeadView; // @synthesize m_shopHeadView;
@property(retain, nonatomic) UIView *m_contentView; // @synthesize m_contentView;
- (void)jump2ProductDetail:(id)arg1;
- (void)setData:(id)arg1 index:(long long)arg2;
- (void)nullAction;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;

@end

