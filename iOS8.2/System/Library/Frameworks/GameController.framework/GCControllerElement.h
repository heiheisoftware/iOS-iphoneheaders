/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@interface GCControllerElement : NSObject

@property (__weak,readonly) GCControllerElement * collection; 
@property (getter=isAnalog,readonly) char analog; 
-(GCControllerElement *)collection;
-(char)isAnalog;
-(char)setHIDValue:(IOHIDValueRef)arg1 ;
-(float)value;
-(char)_setValue:(float)arg1 ;
@end

