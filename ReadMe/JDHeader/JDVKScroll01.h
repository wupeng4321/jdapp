//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewKitBaseContainer.h"

@class JDViewKitComponentFactory, UIScrollView;

@interface JDVKScroll01 : JDViewKitBaseContainer
{
    JDViewKitComponentFactory *_componentFactory;
    UIScrollView *_scrollContent;
}

@property(retain, nonatomic) UIScrollView *scrollContent; // @synthesize scrollContent=_scrollContent;
@property(retain, nonatomic) JDViewKitComponentFactory *componentFactory; // @synthesize componentFactory=_componentFactory;
- (void).cxx_destruct;
- (void)reloadContainer;
- (void)setupView;
- (void)setContainerFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

