/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <VectorKit/VKPolylineObserver.h>

@class VKRouteLine, VKPolylineOverlay, VKStyleManager, NSSet, VKTileKeyList, VKAnimation, NSString;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {

	VKRouteLine* _routeLine;
	double _routeLineWidthScaleRegular;
	double _routeLineHalfWidthRealistic;
	char _selected;
	VKPolylineOverlay* _routeOverlay;
	unordered_map<GEOTransportType, vk::TransportTypeInfo, std::__1::hash<GEOTransportType>, std::__1::equal_to<GEOTransportType>, std::__1::allocator<std::__1::pair<const GEOTransportType, vk::TransportTypeInfo> > >* _transportTypeMap;
	shared_ptr<ggl::Tile::ViewUniformData>* _viewUniforms;
	unique_ptr<vk::TrafficManager, std::__1::default_delete<vk::TrafficManager> >* _trafficManager;
	unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer> >* _trafficLayer;
	unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager> >* _arrowManager;
	vector<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> >, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > >* _arrowLayers;
	unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager> >* _routeLineManager;
	unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer> >* _routeLineLayer;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _debugRenderItems;
	unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > >* _debugShaderSetups;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugLineRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > >* _debugUnmatchedRouteLineMeshes;
	VKStyleManager* _lastQueriedStyleManager;
	double _previousViewUnitsPerPoint;
	int _styleZ;
	unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> >* _selectedSections;
	SCD_Struct_VK6 _matrix;
	NSSet* _previousTilesInView;
	VKTileKeyList* _previousKeysInView;
	double _simplificationEpsilon;
	VKAnimation* _fadeAnimation;
	float _alphaScale;
	VKAnimation* _arrowFadeAnimation;
	float _arrowAlphaScale;
	char _showArrows;
	VKAnimation* _arrowCrossFadeAnimation;
	char _showTraffic;
	char _forceRoutelineUpdate;
	int _stencilValue;
	float _contentScale;
	shared_ptr<md::StyleQuery>* _trafficStyle;
	unsigned _targetDisplayStep;
	float _crossfadingDisplayStep;
	char _wasInRealisticMode;

}

@property (assign,nonatomic) char selected;                                 //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) VKPolylineOverlay * routeOverlay;              //@synthesize routeOverlay=_routeOverlay - In the implementation block
@property (assign,nonatomic) char showTraffic;                              //@synthesize showTraffic=_showTraffic - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlay * polyline; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setSelected:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)selected;
-(id)styleManager;
-(void)stylesheetDidChange;
-(void)flushPools;
-(void)setContainerModel:(id)arg1 ;
-(void)gglLayoutWithContext:(id)arg1 commandBuffer:(CommandBuffer*)arg2 tiles:(id)arg3 ;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(char)_shouldShowTraffic;
-(id)initWithOverlay:(id)arg1 ;
-(void)setRouteOverlay:(VKPolylineOverlay *)arg1 ;
-(void)_didReceiveMemoryWarning;
-(VKPolylineOverlay *)polyline;
-(void)gglLayoutWithContext:(id)arg1 commandBuffer:(CommandBuffer*)arg2 tiles:(id)arg3 layer:(unsigned char)arg4 ;
-(void)prepareToDrawWithCanvas:(id)arg1 ;
-(void)_updateZoomDependentStyleProperties;
-(void)layoutDebugUnmatchedRouteLine:(id)arg1 commandBuffer:(CommandBuffer*)arg2 ;
-(void)prepareDebugLines;
-(float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(CGSize)arg2 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3 ;
-(void)updateRouteLineStencilValue:(int)arg1 ;
-(VKPolylineOverlay *)routeOverlay;
-(char)showTraffic;
-(void)setShowTraffic:(char)arg1 ;
@end

