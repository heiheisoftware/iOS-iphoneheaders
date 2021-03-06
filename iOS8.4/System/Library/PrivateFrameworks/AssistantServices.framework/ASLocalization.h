/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistant_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface ASLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _languageCode;
	NSMutableDictionary* _stringTables;

}
+(id)sharedLocalization;
-(void)_clearTableCache;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_languageCode;
-(void)_languageCodeChanged;
@end

