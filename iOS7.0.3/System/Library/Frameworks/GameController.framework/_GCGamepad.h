/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCGamepad.h>
#import <GameController/GCNamedProfile.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString, GCController, _GCControllerDirectionPad, _GCControllerButtonInput;

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding> {

	GCController* _controller;
	/*^block*/ id _valueChangedHandler;
	_GCControllerDirectionPad* _dpad;
	_GCControllerButtonInput* _button0;
	_GCControllerButtonInput* _button1;
	_GCControllerButtonInput* _button2;
	_GCControllerButtonInput* _button3;
	_GCControllerButtonInput* _leftShoulder;
	_GCControllerButtonInput* _rightShoulder;

}

@property (readonly) NSString * name; 
+(BOOL)supportsSecureCoding;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(id)buttonA;
-(id)buttonB;
-(id)buttonX;
-(id)buttonY;
-(id)dpad;
-(id)leftShoulder;
-(id)rightShoulder;
-(id)initWithController:(id)arg1 ;
-(id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2 ;
-(void)setPlayerIndex:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)name;
-(id)controller;
-(void)setController:(id)arg1 ;
-(void).cxx_destruct;
@end

