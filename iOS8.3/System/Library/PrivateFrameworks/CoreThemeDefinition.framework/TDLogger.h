/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface TDLogger : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	int _verbosity;
	int _logMaxVerbosity;

}

@property (assign,nonatomic) int verbosity; 
+(id)logger;
-(void)dealloc;
-(id)init;
-(void)logError:(id)arg1 ;
-(int)verbosity;
-(void)logMessage:(id)arg1 whenVerbosity:(int)arg2 ;
-(void)logExtra:(id)arg1 ;
-(void)logInfo:(id)arg1 ;
-(void)logWarning:(id)arg1 ;
-(void)setVerbosity:(int)arg1 ;
-(void)logExtraWithFormat:(id)arg1 ;
-(void)logInfoWithFormat:(id)arg1 ;
-(void)logWarningWithFormat:(id)arg1 ;
-(void)logErrorWithFormat:(id)arg1 ;
-(char)isVerbosityLogErrorsOnly;
-(char)isVerbosityLogWarningsAndErrors;
-(char)isVerbosityLogEverything;
-(void)waitForLoggingToComplete;
@end
