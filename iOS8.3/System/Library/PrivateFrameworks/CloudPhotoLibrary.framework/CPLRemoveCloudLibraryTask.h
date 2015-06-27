/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncEmergencyTask.h>

@protocol CPLEngineTransportRemoveLibraryTask;
@interface CPLRemoveCloudLibraryTask : CPLEngineSyncEmergencyTask {

	id<CPLEngineTransportRemoveLibraryTask> _removeLibraryTask;

}
+(char)shouldCoalesceTasks;
+(id)taskIdentifier;
-(void)launch;
-(void)cancel;
-(unsigned)priority;
-(char)shouldStopSyncSession;
@end
