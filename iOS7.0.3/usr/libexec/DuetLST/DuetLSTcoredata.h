/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/DuetLST
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class DuetLST, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSObject;

@interface DuetLSTcoredata : NSObject {

	DuetLST* lst;
	NSManagedObjectModel* model;
	NSManagedObjectContext* context;
	NSPersistentStoreCoordinator* coordinator;
	NSObject<OS_dispatch_queue>* syncQueue;
	int nrecords;

}

@property (retain) DuetLST * lst; 
@property (readonly) NSManagedObjectContext * context; 
@property (readonly) NSManagedObjectModel * model; 
@property (readonly) NSPersistentStoreCoordinator * coordinator; 
@property (readonly) NSObject<OS_dispatch_queue> * syncQueue; 
-(void)setLst:(id)arg1 ;
-(id)lst;
-(id)initWithLSTinstance:(id)arg1 ;
-(void)newRecord;
-(void)dumpAll;
-(void)dumpLight;
-(void)deleteAllEntriesOlderThan:(id)arg1 ;
-(void)deleteBundleID:(id)arg1 ;
-(void)deleteEntriesOlderThan:(id)arg1 withEntityName:(id)arg2 ;
-(void)save;
-(id)syncQueue;
-(id)context;
-(id)model;
-(id)coordinator;
-(void).cxx_destruct;
@end

