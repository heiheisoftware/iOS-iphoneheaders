/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSKAnimatedGIFFrame : NSObject {

	CGImageRef mImage;
	double mTime;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) CGImageRef image; 
-(id)initWithCGImage:(CGImageRef)arg1 time:(double)arg2 ;
-(void)dealloc;
-(id)description;
-(CGImageRef)image;
-(double)time;
@end
