/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemonExtensions.framework/HealthDaemonExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDDataObserver <NSObject>
@optional
-(void)samplesJournaled:(id)arg1 type:(id)arg2;
-(void)samplesOfTypeWereRemoved:(id)arg1;

@required
-(void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
