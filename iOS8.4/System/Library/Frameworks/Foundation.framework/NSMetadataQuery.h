/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSOperationQueue, NSDictionary;

@interface NSMetadataQuery : NSObject {

	unsigned long long _flags;
	double _interval;
	id _private[11];
	void* _reserved;

}

@property (assign) id<NSMetadataQueryDelegate> delegate; 
@property (copy) NSPredicate * predicate; 
@property (copy) NSArray * sortDescriptors; 
@property (copy) NSArray * valueListAttributes; 
@property (copy) NSArray * groupingAttributes; 
@property (assign) double notificationBatchingInterval; 
@property (copy) NSArray * searchScopes; 
@property (copy) NSArray * searchItems; 
@property (retain) NSOperationQueue * operationQueue; 
@property (getter=isStarted,readonly) BOOL started; 
@property (getter=isGathering,readonly) BOOL gathering; 
@property (getter=isStopped,readonly) BOOL stopped; 
@property (readonly) unsigned long long resultCount; 
@property (copy,readonly) NSArray * results; 
@property (copy,readonly) NSDictionary * valueLists; 
@property (copy,readonly) NSArray * groupedResults; 
+(Class)_stitchingClass;
+(id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2 ;
+(void)didEndPossibleFileOperation:(id)arg1 ;
+(id)willBeginPossibleCreationOfItemAtURL:(id)arg1 ;
+(id)willBeginPossibleDeletionOfItemAtURL:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)br_setupForMonitoringChildrenOfFolderAtURL:(id)arg1 ;
-(BOOL)br_setupForMonitoringChildrenOfItemAtURL:(id)arg1 ;
-(void)_validateInvocationContext;
-(void)_validatePredicate:(id)arg1 withScopes:(id)arg2 ;
-(void)_recreateQuery;
-(NSArray *)valueListAttributes;
-(NSArray *)groupingAttributes;
-(id)_sortingAttributes;
-(void)_setBatchingParams;
-(NSArray *)searchItems;
-(void)setSearchItems:(NSArray *)arg1 ;
-(id)_externalDocumentsBundleIdentifier;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_disableAutoUpdates;
-(void)_resetQueryState;
-(void)_noteNote1:(id)arg1 ;
-(void)_noteNote2:(id)arg1 ;
-(void)_noteNote3:(id)arg1 ;
-(void)_noteNote4:(id)arg1 ;
-(void)_inOriginalContextInvokeBlock:(/*^block*/id)arg1 ;
-(void)_noteNote5:(id)arg1 ;
-(unsigned long long)resultCount;
-(void)enumerateResultsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)_enableAutoUpdates;
-(id)valueOfAttribute:(id)arg1 forResultAtIndex:(unsigned long long)arg2 ;
-(void)setValueListAttributes:(NSArray *)arg1 ;
-(void)setGroupingAttributes:(NSArray *)arg1 ;
-(id)_allAttributes;
-(double)notificationBatchingInterval;
-(void)setNotificationBatchingInterval:(double)arg1 ;
-(NSArray *)searchScopes;
-(id)searchItemURLs;
-(void)setSearchItemURLs:(id)arg1 ;
-(void)_setExternalDocumentsBundleIdentifier:(id)arg1 ;
-(id)_queryString;
-(BOOL)isGathering;
-(BOOL)isStopped;
-(id)resultAtIndex:(unsigned long long)arg1 ;
-(void)enumerateResultsUsingBlock:(/*^block*/id)arg1 ;
-(void)_zapResultArrayIfIdenticalTo:(id)arg1 ;
-(unsigned long long)indexOfResult:(id)arg1 ;
-(NSDictionary *)valueLists;
-(NSArray *)groupedResults;
-(void)dealloc;
-(void)setDelegate:(id<NSMetadataQueryDelegate>)arg1 ;
-(id)init;
-(id<NSMetadataQueryDelegate>)delegate;
-(void)_update;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)stopQuery;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setSearchScopes:(NSArray *)arg1 ;
-(BOOL)startQuery;
-(NSPredicate *)predicate;
-(NSArray *)results;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(BOOL)isStarted;
-(NSOperationQueue *)operationQueue;
-(void)finalize;
@end

