/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIDissolveTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(id)_fadeKernel;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
@end
