/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:24 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSInvocation;

@interface NSInvocationOperation : NSOperation {

	id _inv;
	id _exception;
	void* _reserved2;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(void)dealloc;
-(id)init;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(id)result;
-(NSInvocation *)invocation;
-(id)initWithInvocation:(id)arg1 ;
@end

