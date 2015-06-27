/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:23:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSDate, NSObject, NSMutableDictionary;

@interface DADClientAccountTimers : NSObject {

	NSDate* _lastAllFolderContentsRequestDate;
	NSDate* _lastFolderListRequestDate;
	NSDate* _lastFolderWipeRequestDate;
	NSObject*<OS_dispatch_source> _deferredAllFolderContentsSource;
	NSObject*<OS_dispatch_source> _deferredFolderListSource;
	NSObject*<OS_dispatch_source> _deferredFolderContentsSource;
	NSMutableDictionary* _folderIdToLastFolderContentsRequestDate;

}

@property (nonatomic,retain) NSDate * lastAllFolderContentsRequestDate;                                         //@synthesize lastAllFolderContentsRequestDate=_lastAllFolderContentsRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderListRequestDate;                                                //@synthesize lastFolderListRequestDate=_lastFolderListRequestDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFolderWipeRequestDate;                                                //@synthesize lastFolderWipeRequestDate=_lastFolderWipeRequestDate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredAllFolderContentsSource;              //@synthesize deferredAllFolderContentsSource=_deferredAllFolderContentsSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderListSource;                     //@synthesize deferredFolderListSource=_deferredFolderListSource - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_source> deferredFolderContentsSource;                 //@synthesize deferredFolderContentsSource=_deferredFolderContentsSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderIdToLastFolderContentsRequestDate;                     //@synthesize folderIdToLastFolderContentsRequestDate=_folderIdToLastFolderContentsRequestDate - In the implementation block
-(void)dealloc;
-(void)killAllTimers;
-(int)clientBehaviorForFolderIds:(id)arg1 ;
-(void)setLastFolderContentRequestDate:(id)arg1 forFolderWithId:(id)arg2 ;
-(double)deferredTimerInterval;
-(void)setDeferredFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)clientBehaviorForFolderContents;
-(void)setLastAllFolderContentsRequestDate:(NSDate *)arg1 ;
-(void)setDeferredAllFolderContentsSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)clientBehaviorForFolderList;
-(void)setLastFolderListRequestDate:(NSDate *)arg1 ;
-(char)allowFolderWipe;
-(void)setLastFolderWipeRequestDate:(NSDate *)arg1 ;
-(void)setDeferredFolderListSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSMutableDictionary *)folderIdToLastFolderContentsRequestDate;
-(NSDate *)lastAllFolderContentsRequestDate;
-(NSDate *)lastFolderListRequestDate;
-(NSDate *)lastFolderWipeRequestDate;
-(NSObject*<OS_dispatch_source>)deferredAllFolderContentsSource;
-(NSObject*<OS_dispatch_source>)deferredFolderListSource;
-(NSObject*<OS_dispatch_source>)deferredFolderContentsSource;
-(void)setFolderIdToLastFolderContentsRequestDate:(NSMutableDictionary *)arg1 ;
@end
