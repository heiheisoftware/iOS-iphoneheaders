/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityContinuationAction.h>

@class NSDictionary, LSBestAppSuggestion;

@interface SBActivityContinuationAction : UIActivityContinuationAction {

	NSDictionary* _settings;
	int launchSource;
	LSBestAppSuggestion* _appSuggestion;

}

@property (assign,nonatomic) int launchSource; 
@property (nonatomic,retain) LSBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings; 
-(LSBestAppSuggestion *)appSuggestion;
-(id)initWithIdentifier:(id)arg1 activityTypeIdentifier:(id)arg2 appSuggestion:(id)arg3 launchSource:(int)arg4 ;
-(int)launchSource;
-(void)setLaunchSource:(int)arg1 ;
-(void)setAppSuggestion:(LSBestAppSuggestion *)arg1 ;
-(void)dealloc;
-(NSDictionary *)settings;
@end

