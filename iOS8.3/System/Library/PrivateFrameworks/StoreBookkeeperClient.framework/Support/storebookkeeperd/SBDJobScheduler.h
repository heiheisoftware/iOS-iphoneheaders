/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SBDJobScheduler : NSObject {

	NSString* _domain;

}

@property (copy) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(void)initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
+(id)jobSchedulerForDomain:(id)arg1 ;
+(void)addBackgroundJob:(id)arg1 nextJobTimeInterval:(double)arg2 ;
+(void)__initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
-(void)schdeuleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(char)arg2 ;
-(char)hasScheduledJob:(double*)arg1 ;
-(void)removeScheduledJobs;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
@end
