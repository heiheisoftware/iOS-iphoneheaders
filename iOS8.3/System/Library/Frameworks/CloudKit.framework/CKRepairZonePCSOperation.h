/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:38:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray;

@interface CKRepairZonePCSOperation : CKDatabaseOperation {

	NSArray* _zoneIDs;
	/*^block*/id _zoneRepairedBlock;

}

@property (nonatomic,retain) NSArray * zoneIDs;               //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,copy) id zoneRepairedBlock;              //@synthesize zoneRepairedBlock=_zoneRepairedBlock - In the implementation block
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(id)zoneRepairedBlock;
-(id)initWithZoneIDsToRepair:(id)arg1 ;
-(void)setZoneRepairedBlock:(id)arg1 ;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
@end
