/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnchorDelegate.h>

@class VKAnchor, VKLayoutContext, VKScreenCanvas;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate> {

	VKAnchor* _anchor;
	bool _followsTerrain;
	CGPoint _screenPointInCanvas;
	VKLayoutContext* _lastLayoutContext;
	CGPoint _lastCoordinate;
	bool _isUpdating;
	double _pointsPerMeter;
	VKScreenCanvas* _canvas;

}

@property (nonatomic,readonly) CGPoint coordinate; 
@property (assign,nonatomic) bool followsTerrain;                  //@synthesize followsTerrain=_followsTerrain - In the implementation block
@property (assign,nonatomic) VKScreenCanvas * canvas;              //@synthesize canvas=_canvas - In the implementation block
-(void)dealloc;
-(id).cxx_construct;
-(id)canvas;
-(CGPoint)coordinate;
-(void)setCanvas:(id)arg1 ;
-(void)updateIfNeeded;
-(void)layoutWithContext:(id)arg1 ;
-(bool)followsTerrain;
-(void)anchorWorldPointDidChange:(void*)arg1 ;
-(void)setFollowsTerrain:(bool)arg1 ;
-(id)_anchorWithContext:(id)arg1 ;
-(void)_updateCachedPointWithContext:(id)arg1 ;
-(CGPoint)pointInLayer:(id)arg1 ;
-(double)pointOffsetForDistanceOffset:(double)arg1 ;
@end

