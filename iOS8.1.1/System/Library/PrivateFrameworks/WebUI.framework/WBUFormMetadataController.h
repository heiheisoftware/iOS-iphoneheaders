/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <WebUI/WBSFormMetadataController.h>

@class WebScriptWorld;

@interface WBUFormMetadataController : WBSFormMetadataController {

	WebScriptWorld* _scriptWorld;

}

@property (nonatomic,readonly) WebScriptWorld * scriptWorld;              //@synthesize scriptWorld=_scriptWorld - In the implementation block
+(id)sharedFormMetadataController;
-(WebScriptWorld *)scriptWorld;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
@end
