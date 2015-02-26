/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSXPCServerClient.h>

@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {

	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)wrapperWithConnection:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 replyHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)sendMessageWithPacker:(/*^block*/id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
@end
