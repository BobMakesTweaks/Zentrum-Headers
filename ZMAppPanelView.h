//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIPageControl, UIScrollView, UITextField, ZMSettings, ZMView;

@interface ZMAppPanelView : UIView <UIScrollViewDelegate, UITextFieldDelegate>
{
    ZMSettings *_settings;
    _Bool _iPhone4S;
    UITextField *_searchTextField;
    UIView *_searchTextFieldBlackOverlayView;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSMutableArray *_activeAppItems;
    double _iconSize;
    double _padding;
    double _spacing;
    ZMView *_delegate;
    NSMutableDictionary *_iconViewsCache;
    NSMutableArray *_activeIconImageViews;
}

@property(retain, nonatomic) NSMutableArray *activeIconImageViews; // @synthesize activeIconImageViews=_activeIconImageViews;
@property(retain, nonatomic) NSMutableDictionary *iconViewsCache; // @synthesize iconViewsCache=_iconViewsCache;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak ZMView *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateAppPositionsWithAnimationDuration:(double)arg1;
- (void)updateApps;
- (void)loadActiveAppsList;
- (void)saveAllAppsList;
- (void)updateFrame;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)searchTextFieldTextChanged:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

