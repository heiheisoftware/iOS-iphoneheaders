/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDPath.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDBezierPath : GQDPath <GQDNameMappable> {

	CGPathRef mPath;
	char* mPathStr;
	BOOL mHasVFlip;
	BOOL mVFlip;
	BOOL mHasHFlip;
	BOOL mHFlip;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
+(CFStringRef)createCFStringFromPath:(CGPathRef)arg1 ;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(BOOL)horizontalFlip;
-(BOOL)verticalFlip;
-(id)initWithPathString:(const char*)arg1 ;
-(char*)pathStr;
-(CGPathRef)createBezierPath;
-(BOOL)hasVerticalFlip;
-(BOOL)hasHorizontalFlip;
-(void)dealloc;
-(CGPathRef)path;
-(BOOL)isRectangular;
@end

