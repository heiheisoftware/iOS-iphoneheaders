/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction {

	/*function pointer*/ void* _functionPointer;
	void* _userData;

}

@property (assign,nonatomic) /*function pointer*/ void* functionPointer;              //@synthesize functionPointer=_functionPointer - In the implementation block
@property (assign,nonatomic) void* userData;                                          //@synthesize userData=_userData - In the implementation block
-(void*)userData;
-(void)setUserData:(void*)arg1 ;
-(BOOL)registerWithConnection:(id)arg1 ;
-(/*function pointer*/ void*)functionPointer;
-(void)setFunctionPointer:(/*function pointer*/ void*)arg1 ;
@end

