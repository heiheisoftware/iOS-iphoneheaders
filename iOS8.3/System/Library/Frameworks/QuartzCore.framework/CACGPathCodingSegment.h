/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCoding.h>

@interface CACGPathCodingSegment : NSObject <NSCoding> {

	int _type;
	CGPoint _points[3];

}
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
