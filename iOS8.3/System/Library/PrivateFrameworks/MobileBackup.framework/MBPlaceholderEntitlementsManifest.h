/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MBPlaceholderEntitlementsManifest : NSObject {

	NSMutableArray* _entries;

}
-(void)addEntriesForApps:(id)arg1 ;
-(id)entryAtIndex:(int)arg1 ;
-(void)addEntriesForApp:(id)arg1 ;
-(char)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(void)addEntry:(id)arg1 ;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(int)entryCount;
@end

