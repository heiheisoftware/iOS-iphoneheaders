/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {

	MBSettingsContext* _settingsContext;
	NSMutableDictionary* _appsByBundleID;

}
+(id)appManager;
+(id)appManagerWithSettingsContext:(id)arg1 ;
-(void)dealloc;
-(id)appWithBundleID:(id)arg1 ;
-(id)initWithSettingsContext:(id)arg1 ;
-(id)allDisabledDomainNames;
-(id)_userAppsWithError:(id*)arg1 ;
-(id)_safeHarborsWithError:(id*)arg1 ;
-(id)_appsWithPlists:(id)arg1 error:(id*)arg2 ;
-(void)removeAllDisabledDomainNames;
-(BOOL)isDomainNameEnabled:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(id)allRestrictedDomainNames;
-(BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2 ;
-(id)allApps;
-(void)removeOldSafeHarbors;
-(id)createSafeHarborForApp:(id)arg1 error:(id*)arg2 ;
-(BOOL)processRestoredAppsWithBundleIDs:(id)arg1 error:(id*)arg2 ;
@end

