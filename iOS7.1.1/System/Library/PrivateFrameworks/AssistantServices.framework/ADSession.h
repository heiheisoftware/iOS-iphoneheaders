/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:35:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/ADSession_RPC.h>

@class NSString, NSMutableArray;

@interface ADSession : NSObject <ADSession_RPC> {

	BOOL _applicationCanReceiveBackgroundAds;
	NSString* _serverURL;
	NSMutableArray* _adSpaces;

}

@property (nonatomic,copy) NSString * serverURL;                                   //@synthesize serverURL=_serverURL - In the implementation block
@property (assign,nonatomic) BOOL applicationCanReceiveBackgroundAds;              //@synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds - In the implementation block
@property (nonatomic,retain) NSMutableArray * adSpaces;                            //@synthesize adSpaces=_adSpaces - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setServerURL:(id)arg1 ;
-(void)_appWillResignActive;
-(void)_appDidBecomeActive;
-(void)_orientationChanged;
-(void)_adSheetConnectionBootstrapped;
-(id)_linkedOnVersion;
-(id)adSpaces;
-(void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3 ;
-(void)_remote_policyEngineTestStationDescriptionsComputed:(id)arg1 ;
-(void)_remote_gatewayEnabledStationIDsDidChange:(id)arg1 ;
-(void)registerAdSpace:(id)arg1 ;
-(void)unregisterAdSpace:(id)arg1 ;
-(void)determineAppInstallAttributionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)applicationCanReceiveBackgroundAds;
-(void)setApplicationCanReceiveBackgroundAds:(BOOL)arg1 ;
-(void)setAdSpaces:(id)arg1 ;
-(id)serverURL;
@end
