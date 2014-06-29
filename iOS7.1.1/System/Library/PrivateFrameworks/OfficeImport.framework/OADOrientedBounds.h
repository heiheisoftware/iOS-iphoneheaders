/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OADOrientedBounds : NSObject {

	CGRect mBounds;
	float mRotation;
	unsigned mFlipX : 1;
	unsigned mFlipY : 1;
	int mModeX;
	int mModeY;

}
+(id)orientedBoundsWithBounds:(CGRect)arg1 ;
+(id)orientedBoundsWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(bool)arg3 flipY:(bool)arg4 ;
+(bool)directionCloserToVerticalThanToHorizontal:(float)arg1 ;
-(CGRect)bounds;
-(id)init;
-(void)setBounds:(CGRect)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id).cxx_construct;
-(id)initWithBounds:(CGRect)arg1 ;
-(void)setFlipY:(bool)arg1 ;
-(void)setFlipX:(bool)arg1 ;
-(bool)flipY;
-(void)setOrientedBounds:(id)arg1 ;
-(bool)flipX;
-(id)initWithBounds:(CGRect)arg1 rotation:(float)arg2 flipX:(bool)arg3 flipY:(bool)arg4 ;
-(void)setXMode:(int)arg1 ;
-(void)setYMode:(int)arg1 ;
-(int)xMode;
-(int)yMode;
-(bool)isEqualToOrientedBounds:(id)arg1 ;
@end
