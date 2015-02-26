/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSCredentialsAgent.app/IDSCredentialsAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface IDSCredentialsDaemonMIGInterface : NSObject {

	NSObject*<OS_xpc_object> _server;
	BOOL _shuttingDown;

}
+(id)sharedInstance;
-(void)acceptIncomingGrantRequests;
-(void)denyIncomingGrantRequests;
-(void)__setupServer;
@end
