//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class JDLabel, JDShopMemberModel, UIView;

@interface JDShopMemberPrivilegeView : JDView
{
    JDLabel *tabLabel;
    UIView *botomline;
    JDShopMemberModel *_shopMemberModel;
}

@property(retain, nonatomic) JDShopMemberModel *shopMemberModel; // @synthesize shopMemberModel=_shopMemberModel;
- (void).cxx_destruct;
- (id)imageByPrivilegeType:(id)arg1;
- (void)refreshViewWithModel:(id)arg1;
- (void)ruleDetailClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

