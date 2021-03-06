/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, NSString, NSMutableDictionary;

@interface SSXPCServer : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _entitlementName;
	NSObject*<OS_xpc_object> _listener;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableDictionary* _observers;
	NSString* _serviceName;

}
+(id)mainServer;
-(void)dealloc;
-(id)init;
-(void)start;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 entitlement:(id)arg2 queue:(id)arg3 ;
-(void)_dispatchMessage:(id)arg1 connection:(id)arg2 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
-(void)removeObserver:(id)arg1 selector:(SEL)arg2 forMessage:(long long)arg3 ;
@end

