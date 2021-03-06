/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SPBundleManager : NSObject {

	NSArray* _searchBundles;
	NSArray* _datastores;
	NSDictionary* _domainMap;

}

@property (nonatomic,readonly) NSArray * searchBundles; 
@property (nonatomic,readonly) NSArray * datastores; 
+(id)sharedManager;
-(void)dealloc;
-(id)datastoreForDomain:(unsigned)arg1 ;
-(void)lockDatastore:(id)arg1 ;
-(void)unlockDatastore:(id)arg1 ;
-(void)_loadSearchBundles;
-(id)searchBundles;
-(void)createLockForDatastore:(id)arg1 ;
-(id)datastores;
-(id)domainMap;
-(void)resetDatastores;
@end

