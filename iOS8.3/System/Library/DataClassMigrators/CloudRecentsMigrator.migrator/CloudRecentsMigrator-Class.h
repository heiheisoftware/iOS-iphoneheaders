/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:25:23 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/CloudRecentsMigrator.migrator/CloudRecentsMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface CloudRecentsMigrator : DataClassMigrator
-(unsigned long long)recentsExportDataSize;
-(id)recentsExportPath;
-(char)migrateABRecentsData;
-(id)dataClassName;
-(float)estimatedDuration;
-(float)migrationProgress;
-(char)performMigration;
@end

