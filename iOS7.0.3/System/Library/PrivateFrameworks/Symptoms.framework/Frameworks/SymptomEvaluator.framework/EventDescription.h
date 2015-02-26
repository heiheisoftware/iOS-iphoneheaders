/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface EventDescription : NSObject {

	int _eventType;
	char* _processName;
	char* _applicationId;
	int _eventLen;
	void* _eventData;
	NSMutableDictionary* _eventQualifiers;
	unsigned long long _processId;

}

@property (nonatomic,readonly) int eventType;                                      //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) unsigned long long processId;                       //@synthesize processId=_processId - In the implementation block
@property (nonatomic,readonly) char* processName;                                  //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) char* applicationId;                                //@synthesize applicationId=_applicationId - In the implementation block
@property (nonatomic,readonly) int eventLen;                                       //@synthesize eventLen=_eventLen - In the implementation block
@property (nonatomic,readonly) void* eventData;                                    //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * eventQualifiers;              //@synthesize eventQualifiers=_eventQualifiers - In the implementation block
-(int)eventType;
-(void)dealloc;
-(id)description;
-(char*)processName;
-(char*)applicationId;
-(id)eventQualifiers;
-(void*)eventData;
-(char*)originatorForLogging;
-(unsigned long long)processId;
-(id)initWithType:(int)arg1 length:(int)arg2 data:(void*)arg3 fromPid:(unsigned long long)arg4 named:(char*)arg5 application:(char*)arg6 ;
-(int)eventLen;
-(void).cxx_destruct;
@end
