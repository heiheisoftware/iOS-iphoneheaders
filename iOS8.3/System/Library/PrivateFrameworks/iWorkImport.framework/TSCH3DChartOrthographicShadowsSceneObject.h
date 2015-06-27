/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:08 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartShadowsSceneObject.h>

@interface TSCH3DChartOrthographicShadowsSceneObject : TSCH3DChartShadowsSceneObject
+(id)blurParametersArray;
-(void)updateCoordsAndTexcoords:(const box<glm::detail::tvec3<float> >*)arg1 zOffset:(float)arg2 cameraPosition:(const tvec3<float>*)arg3 quad:(id)arg4 texcoords:(id)arg5 ;
-(id)createCamera;
-(void)updateShadowPlane:(id)arg1 texcoords:(id)arg2 scene:(id)arg3 blurslack:(float)arg4 angle:(float)arg5 quality:(float)arg6 planePadding:(box<glm::detail::tvec3<float> >)arg7 ;
-(id)createShadowsRenderer;
@end
