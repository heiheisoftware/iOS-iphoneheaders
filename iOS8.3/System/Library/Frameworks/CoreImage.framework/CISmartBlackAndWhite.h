/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputNeutralGamma;
	NSNumber* inputTone;
	NSNumber* inputHue;
	NSNumber* inputGrain;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputNeutralGamma; 
@property (nonatomic,copy) NSNumber * inputTone; 
@property (nonatomic,copy) NSNumber * inputHue; 
@property (nonatomic,copy) NSNumber * inputGrain; 
@property (nonatomic,copy) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel;
-(void)getNonNormalizedSettings:(SCD_Struct_CI14*)arg1 ;
-(float*)createHueArray;
-(id)hueArrayImage:(float*)arg1 ;
-(NSNumber *)inputGrain;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(NSNumber *)inputTone;
-(void)setInputTone:(NSNumber *)arg1 ;
-(NSNumber *)inputHue;
-(void)setInputHue:(NSNumber *)arg1 ;
-(void)setInputGrain:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
@end

