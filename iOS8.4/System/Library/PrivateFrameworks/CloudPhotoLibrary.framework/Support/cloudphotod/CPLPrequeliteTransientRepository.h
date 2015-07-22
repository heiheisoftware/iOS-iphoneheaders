/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineTransientRepositoryImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteTransientRepository : CPLPrequeliteStorage <CPLEngineTransientRepositoryImplementation> {

	CPLPrequeliteVariable* _syncAnchorVar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(BOOL)_appendChange:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3 ;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 maximumCount:(unsigned long long)arg2 ;
-(BOOL)_markChangesWithIdentifiersAsMingled:(id)arg1 error:(id*)arg2 ;
-(BOOL)_hasRecordWithTransientType:(int)arg1 relatedIdentifier:(id)arg2 ;
-(id)_recordWithTransientType:(int)arg1 identifier:(id)arg2 ;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 class:(Class)arg2 maximumCount:(unsigned long long)arg3 ;
-(BOOL)_fillBatchWithDeletedRecords:(id)arg1 withEnumerator:(id)arg2 maximumCount:(unsigned long long*)arg3 additionalRecordsToAdd:(id)arg4 identifiersToDelete:(id)arg5 alreadyDeleted:(id)arg6 error:(id*)arg7 ;
-(BOOL)_fillArray:(id)arg1 withChangeAndRelated:(id)arg2 identifiersToDelete:(id)arg3 transientType:(int)arg4 maximumCount:(unsigned long long*)arg5 error:(id*)arg6 ;
-(BOOL)_hasUnmingledRecords;
-(id)_enumeratorForRecordsWithTransientType:(int)arg1 relatedIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3 ;
-(Class)classForRecordWithIdentifier:(id)arg1 ;
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(BOOL)prepareForMinglingWithError:(id*)arg1 ;
-(id)transientSyncAnchor;
-(BOOL)storeTransientSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasRecordWithIdentifier:(id)arg1 ;
-(unsigned long long)countOfAssetChanges;
-(id)recordWithIdentifier:(id)arg1 ;
-(BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)popChangeBatchOfDeletedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)popChangeBatchOfChangedRecords:(id*)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)popChangeBatchOfRemappedRecords:(id*)arg1 maximumCount:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)resetMingledRecordsWithError:(id*)arg1 ;
-(BOOL)deleteMingledRecordsWithError:(id*)arg1 ;
-(unsigned long long)countOfUnmingledRecords;
-(BOOL)deleteAllRecordsWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end
