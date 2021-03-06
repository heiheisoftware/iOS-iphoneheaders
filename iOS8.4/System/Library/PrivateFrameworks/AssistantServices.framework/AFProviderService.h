/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol AFProviderService <NSObject>
@required
-(oneway void)doCommandForServicePath:(id)arg1 className:(id)arg2 infoDictionary:(id)arg3 reply:(/*^block*/id)arg4;
-(oneway void)beginSyncForServicePath:(id)arg1 className:(id)arg2 key:(id)arg3 anchor:(id)arg4 validity:(id)arg5 count:(long long)arg6 reply:(/*^block*/id)arg7;
-(oneway void)clearDomainObjectsForServicePath:(id)arg1 className:(id)arg2;
-(oneway void)preheatBundleForServicePath:(id)arg1;

@end

