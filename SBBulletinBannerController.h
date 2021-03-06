/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "SBVolumePressBandit.h"
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "BBObserverDelegate.h"

@class NSMutableDictionary, BBObserver, NSMutableSet, NSString, NSMutableArray;
@protocol SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBBulletinBannerController : XXUnknownSuperclass <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit> {
	NSMutableArray* _bulletinQueue;
	BBObserver* _observer;
	NSMutableSet* _sectionIDsToPend;
	BOOL _quietModeEnabled;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableDictionary* _bulletinIdentifierToBannerContextCache;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer thumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer updateSectionInfo:(id)info;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
-(void)bannerTargetManager:(id)manager didAddTarget:(id)target;
-(id)newBannerViewForContext:(id)context;
-(void)_syncLockScreenDismissalsForSeedBulletin:(id)seedBulletin additionalBulletins:(id)bulletins;
-(id)dequeueNextBannerItemForTarget:(id)target;
-(id)peekNextBannerItemForTarget:(id)target;
-(void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)bulletinIDs;
-(void)_showTestBanner:(BOOL)banner;
-(void)_removeNextBulletinIfNecessary;
-(void)_queueBulletin:(id)bulletin;
-(BOOL)_replaceBulletin:(id)bulletin;
-(void)_removeBulletin:(id)bulletin;
-(unsigned)_indexOfQueuedBulletinID:(id)queuedBulletinID;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)_reloadVolumePressBanditPreference;
-(id)_bannerContextForBulletin:(id)bulletin;
-(void)removeAllCachedBanners;
-(void)removeCachedBannerForBulletinID:(id)bulletinID;
-(void)cacheBannerForBulletin:(id)bulletin completion:(id)completion;
-(void)modallyPresentBannerForBulletin:(id)bulletin action:(id)action;
-(void)dealloc;
-(id)init;
@end

