/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	char metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(void)translateObjectYBy:(float)arg1 ;
-(void)clearCachedInfo;
-(float)maxFontSize;
-(double)maxFontLineHeight;
-(void)calculateMetrics;
@end

