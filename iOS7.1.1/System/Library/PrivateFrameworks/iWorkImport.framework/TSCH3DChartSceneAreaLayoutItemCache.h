/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DVector;

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {

	TSCH3DChartSceneAreaLayoutItemCacheValues mValues;
	TSCH3DVector* _containingViewportVector;

}

@property (nonatomic,readonly) tvec4<float> infoChartScale; 
@property (nonatomic,readonly) tvec2<int> containingViewport; 
@property (nonatomic,readonly) TSCH3DVector * containingViewportVector;                               //@synthesize containingViewportVector=_containingViewportVector - In the implementation block
@property (nonatomic,readonly) tvec2<float> chartBodyLayoutOffsetInChartAreaLayoutSpace; 
@property (nonatomic,readonly) CGSize layoutSize; 
@property (nonatomic,readonly) CGSize requestLayoutSize; 
@property (nonatomic,readonly) CGSize chartBodyLayoutSize; 
@property (nonatomic,readonly) CGSize requestChartBodyLayoutSize; 
@property (nonatomic,readonly) tvec2<int> modelSize; 
@property (nonatomic,readonly) SCD_Struct_TS408 layoutSettings; 
@property (nonatomic,readonly) bool forcedValid; 
+(id)cacheWithInfoChartScale:(const tvec3<float>*)arg1 containingViewport:(const tvec2<int>*)arg2 chartBodyLayoutOffsetInChartAreaLayoutSpace:(const tvec2<float>*)arg3 layoutSize:(CGSize)arg4 requestLayoutSize:(CGSize)arg5 chartBodyLayoutSize:(CGSize)arg6 requestChartBodyLayoutSize:(CGSize)arg7 layoutSettings:(SCD_Struct_TS408)arg8 ;
+(id)cacheWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(id)containingViewportVector;
-(tvec2<int>)containingViewport;
-(SCD_Struct_TS408)layoutSettings;
-(CGSize)chartBodyLayoutSize;
-(bool)forcedValid;
-(tvec4<float>)infoChartScale;
-(tvec2<float>)chartBodyLayoutOffsetInChartAreaLayoutSpace;
-(tvec2<int>)modelSize;
-(CGSize)requestLayoutSize;
-(CGSize)requestChartBodyLayoutSize;
-(id)initWithCacheValues:(const TSCH3DChartSceneAreaLayoutItemCacheValues*)arg1 ;
-(void)printDebug;
-(id)init;
-(const TSCH3DChartSceneAreaLayoutItemCacheValues*)values;
-(CGSize)layoutSize;
-(id).cxx_construct;
@end
