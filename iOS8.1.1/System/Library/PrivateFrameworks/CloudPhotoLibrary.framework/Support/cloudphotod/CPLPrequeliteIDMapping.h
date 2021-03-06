/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineIDMappingImplementation.h>

@class NSString;

@interface CPLPrequeliteIDMapping : CPLPrequeliteStorage <CPLEngineIDMappingImplementation>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)initializeStorage;
-(BOOL)upgradeStorageToVersion:(long long)arg1 ;
-(BOOL)removeMappingForLocalIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)status;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)resetAllFinalCloudIdentifiersWithError:(id*)arg1 ;
-(id)localIdentifierForCloudIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)markAllPendingIdentifiersAsFinalWithError:(id*)arg1 ;
-(id)cloudIdentifierForLocalIdentifier:(id)arg1 isFinal:(BOOL*)arg2 ;
-(BOOL)addCloudIdentifier:(id)arg1 forLocalIdentifier:(id)arg2 isFinal:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)setFinalCloudIdentifier:(id)arg1 forPendingCloudIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasPendingIdentifiers;
-(BOOL)removeMappingForCloudIdentifier:(id)arg1 error:(id*)arg2 ;
@end

