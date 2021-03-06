/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBStarkLockOutView, SBUIStarkStartupAnimation, SBStarkScreenController;

__attribute__((visibility("hidden")))
@interface SBStarkLockOutViewController : XXUnknownSuperclass {
	SBStarkScreenController* _screenController;
	int _mode;
	SBStarkLockOutView* _modeView;
	SBStarkLockOutView* _previousModeView;
	BOOL _inDealloc;
	BOOL _pendingAnimated;
	int _pendingMode;
	SBUIStarkStartupAnimation* _startupAnimation;
}
@property(retain, nonatomic) SBStarkScreenController* screenController;
@property(readonly, retain, nonatomic) SBStarkLockOutView* lockoutView;
@property(assign, nonatomic) int lockOutMode;
-(void)_updateLockOutModeIfPending;
-(id)_newModeViewForMode:(int)mode;
-(void)animationControllerDidFinishAnimation:(id)animationController;
-(void)animationController:(id)controller willBeginAnimation:(BOOL)animation;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)setLockOutMode:(int)mode animated:(BOOL)animated;
-(void)dealloc;
@end

