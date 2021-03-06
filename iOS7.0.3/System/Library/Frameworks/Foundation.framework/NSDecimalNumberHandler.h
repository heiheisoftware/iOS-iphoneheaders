/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDecimalNumberBehaviors.h>
#import <CoreFoundation/NSCoding.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;

}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
-(unsigned)roundingMode;
-(id)initWithRoundingMode:(unsigned)arg1 scale:(short)arg2 raiseOnExactness:(BOOL)arg3 raiseOnOverflow:(BOOL)arg4 raiseOnUnderflow:(BOOL)arg5 raiseOnDivideByZero:(BOOL)arg6 ;
-(id)exceptionDuringOperation:(SEL)arg1 error:(unsigned)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(short)scale;
@end

