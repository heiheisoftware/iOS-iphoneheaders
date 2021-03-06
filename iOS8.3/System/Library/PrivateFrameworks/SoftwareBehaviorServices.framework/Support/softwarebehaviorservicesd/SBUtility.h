/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:33:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <softwarebehaviorservicesd/softwarebehaviorservicesd-Structs.h>
@interface SBUtility : NSObject
+(id)currentHardwareModel;
+(dispatch_queue_sRef)taskQueue;
+(id)serialNumber;
+(id)currentProductVersion;
+(id)currentProductBuild;
+(id)currentProductType;
+(id)currentReleaseType;
+(char)isDaemon;
+(id)gregorianCalendar;
+(void)setIsDaemon:(char)arg1 ;
+(char)isWiFiCapable;
+(char)hasCellularRadio;
+(id)currentProductCategory;
+(char)hasEnoughDiskSpace:(unsigned long long)arg1 ;
+(id)URLIfFileExists:(id)arg1 ;
+(id)addToDate:(id)arg1 numberOfDays:(int)arg2 ;
+(id)prettyPrintDate:(id)arg1 ;
@end

