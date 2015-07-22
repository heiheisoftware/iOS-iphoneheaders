/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/ImageRowReading.h>

@interface CIImageRowReader : NSObject <ImageRowReading> {

	unsigned long long height;
	unsigned long long width;
	unsigned long long bpr;
	void* data;
	short red;
	short green;
	short blue;
	short alpha;
	CGColorSpaceRef cs;

}
+(id)forImage:(id)arg1 usingContext:(id)arg2 ;
+(id)fromImage:(CGImageRef)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 colorspace:(CGColorSpaceRef)arg3 usingContext:(id)arg4 ;
+(id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(CGColorSpaceRef)arg3 ;
+(id)fromImageFile:(id)arg1 ;
+(id)forImage:(id)arg1 downscaleToMax:(unsigned)arg2 ;
+(id)withDictionary:(id)arg1 ;
-(void)_dumpImage:(id)arg1 colorspace:(CGColorSpaceRef)arg2 ;
-(const char*)rowAtIndex:(unsigned)arg1 ;
-(void)dumpImage:(id)arg1 ;
-(void)dumpImageAsDeviceRGB:(id)arg1 ;
-(void)dumpImageAsDict:(id)arg1 ;
-(void)dealloc;
-(short)alpha;
-(id)init;
-(unsigned long long)width;
-(unsigned long long)height;
-(short)red;
-(short)green;
-(short)blue;
-(unsigned)bytesPerPixel;
@end
