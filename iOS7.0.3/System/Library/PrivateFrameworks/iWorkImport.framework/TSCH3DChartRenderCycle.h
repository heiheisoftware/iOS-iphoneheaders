/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DSceneRenderPipeline, TSCH3DChartRenderPresenter, TSCH3DGLFramebuffer;

@interface TSCH3DChartRenderCycle : NSObject {

	BOOL mHasFramebuffer;
	TSCH3DSceneRenderPipeline* mPipeline;
	TSCH3DChartRenderPresenter* mPresenter;
	TSCH3DChartRenderPresenter* mRenderPresenterToRestore;

}

@property (nonatomic,readonly) TSCH3DSceneRenderPipeline * pipeline; 
@property (nonatomic,readonly) TSCH3DChartRenderPresenter * presenter; 
@property (nonatomic,readonly) TSCH3DGLFramebuffer * framebuffer; 
@property (nonatomic,readonly) CALayer<TSCH3DGLLayer> * layer; 
@property (nonatomic,readonly) BOOL hasFramebuffer; 
+(id)renderCycleWithRenderCycleInfo:(const RenderCycleInfo*)arg1 ;
-(id)pipeline;
-(void)destroyFramebuffer;
-(BOOL)hasFramebuffer;
-(unsigned)multisamples;
-(BOOL)shouldDiscardRenderbuffers;
-(BOOL)setupLayerFromLayerProvider:(id)arg1 canvas:(id)arg2 visible:(CGRect)arg3 pixelAlignmentLayer:(id)arg4 ;
-(void)setLayerVisibleBounds:(CGRect)arg1 ;
-(BOOL)shouldRenderLegendIntoSeparateLayer;
-(void)presentRenderingWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(void)cleanupRenderingWithPresenterInfo:(const PresenterInfo*)arg1 ;
-(Class)layerCacheLogicClass;
-(id)initWithRenderCycleInfo:(const RenderCycleInfo*)arg1 ;
-(void)p_setRenderPresenter:(id)arg1 ;
-(void)copyFromChartRenderCycle:(id)arg1 ;
-(BOOL)usesMultipassRendering;
-(void)layoutWithBoundsSpaces:(const ChartProjectedBoundsSpaces*)arg1 scale:(float)arg2 ;
-(BOOL)allocateFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(BOOL)allocateLayerBasedFramebufferWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(void)setupOptionalTextureSizeHintUsingCanvasChartBodyBoundsWithAllocationInfo:(const FramebufferAllocationInfo*)arg1 ;
-(BOOL)runPipeline:(id)arg1 ;
-(void)beginInteractiveModeWithMinimumBufferSize:(CGSize)arg1 ;
-(void)endInteractiveMode;
-(void)switchToRenderPresenter:(id)arg1 ;
-(void)restoreDefaultRenderPresenter;
-(void)dealloc;
-(id)layer;
-(Class)layerClass;
-(id)presenter;
-(id)setup;
-(id)framebuffer;
@end
