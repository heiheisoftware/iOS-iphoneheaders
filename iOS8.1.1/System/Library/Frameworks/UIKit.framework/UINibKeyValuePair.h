/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:25 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface UINibKeyValuePair : NSObject {

	id object;
	NSString* keyPath;
	id value;

}

@property (nonatomic,readonly) id object; 
@property (nonatomic,readonly) NSString * keyPath; 
@property (nonatomic,readonly) id value; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)keyPath;
-(id)value;
-(id)object;
-(void)applyForSimulator;
-(void)apply;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
@end
