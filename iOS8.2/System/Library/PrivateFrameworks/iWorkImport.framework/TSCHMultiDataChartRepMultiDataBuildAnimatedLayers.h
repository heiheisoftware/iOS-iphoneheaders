/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer, NSArray;

@interface TSCHMultiDataChartRepMultiDataBuildAnimatedLayers : NSObject {

	CALayer* legendLayer;
	CALayer* backgroundLayer;
	CALayer* dataSetNameLayer;
	NSArray* elementLayers;

}

@property (nonatomic,retain) CALayer * legendLayer; 
@property (nonatomic,retain) CALayer * backgroundLayer; 
@property (nonatomic,retain) CALayer * dataSetNameLayer; 
@property (nonatomic,copy) NSArray * elementLayers; 
+(id)animatedLayers;
-(CALayer *)legendLayer;
-(CALayer *)backgroundLayer;
-(NSArray *)elementLayers;
-(CALayer *)dataSetNameLayer;
-(id)allBackgroundFadingLayers;
-(id)elementFadingLayers;
-(id)layersRequiringGeometryTransformsBackgroundOnly:(char)arg1 ;
-(id)layersAlreadyHaveProperTransforms;
-(void)setLegendLayer:(CALayer *)arg1 ;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)setDataSetNameLayer:(CALayer *)arg1 ;
-(void)setElementLayers:(NSArray *)arg1 ;
-(void)dealloc;
@end
