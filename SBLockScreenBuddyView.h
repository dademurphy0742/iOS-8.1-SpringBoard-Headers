/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLockOverlayView.h"

@class UIButton, SBLockOverlayStylePropertiesFactory, UILabel, _UILegibilitySettings, UIView, SBUIAppleLogoView;
@protocol SBLockScreenBuddyViewDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenBuddyView : SBLockOverlayView {
	UILabel* _titleLabel;
	SBUIAppleLogoView* _logoView;
	BOOL _usesWhiteLogo;
	int _viewState;
	SBLockOverlayStylePropertiesFactory* _underlayPropertiesFactory;
	_UILegibilitySettings* _legibilitySettings;
	id<SBLockScreenBuddyViewDelegate> _delegate;
	unsigned _style;
	UIView* _activationInfoView;
	UIButton* _infoButton;
}
@property(assign, nonatomic) unsigned style;
@property(retain, nonatomic) UIView* activationInfoView;
@property(retain, nonatomic) UIButton* infoButton;
@property(assign, nonatomic) id<SBLockScreenBuddyViewDelegate> delegate;
-(id)legibilitySettings;
-(id)underlayPropertiesFactory;
-(void)layoutSubviews;
-(void)configureOverlayPropertiesForStyle:(unsigned)style;
-(BOOL)isFakeLogoHidden;
-(void)_toggleViewState;
-(void)setViewState:(int)state;
-(void)setTitleLanguage:(id)language;
-(void)setTitleString:(id)string;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame useWhiteLogo:(BOOL)logo;
@end

