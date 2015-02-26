/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class SBApplication, FBApplicationProcess, NSDictionary;

@interface SBApplicationDisplayUpdateTransaction : FBTransaction {

	SBApplication* _app;
	FBApplicationProcess* _process;
	unsigned long long _sceneState;
	NSDictionary* _displaysToLayouts;

}
-(id)initWithApplication:(id)arg1 process:(id)arg2 displaysToLayouts:(id)arg3 state:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)_willBegin;
-(id)_customizedDescriptionProperties;
@end
