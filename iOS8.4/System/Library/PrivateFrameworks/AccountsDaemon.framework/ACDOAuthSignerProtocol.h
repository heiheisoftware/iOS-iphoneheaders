/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDOAuthSignerProtocol <NSObject>
@required
-(void)setShouldIncludeAppIdInRequest:(BOOL)arg1;
-(void)setClientBundleID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 callingPID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;
-(void)signURLRequest:(id)arg1 withAccount:(id)arg2 applicationID:(id)arg3 timestamp:(id)arg4 handler:(/*^block*/id)arg5;

@end

