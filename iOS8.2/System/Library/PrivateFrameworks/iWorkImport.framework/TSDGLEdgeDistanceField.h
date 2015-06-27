/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDGLFrameBuffer, TSDGLDataBuffer, TSDGLState;

@interface TSDGLEdgeDistanceField : NSObject {

	unsigned _inputTexture;
	CGSize _textureSize;
	CGSize _resultTextureSize;
	CGSize _squareSize;
	UIEdgeInsets _edgeInsets;
	float _downsampleScale;
	TSDGLFrameBuffer* _exteriorFramebuffer;
	TSDGLFrameBuffer* _interiorFramebuffer;
	TSDGLDataBuffer* _origDataBuffer;
	TSDGLDataBuffer* _rectDataBuffer;
	TSDGLDataBuffer* _squareDataBuffer;
	TSDGLState* _GLState;
	int _oldViewport[4];

}
+(void)willBeginUsingShaders;
+(void)didEndUsingShaders;
+(id)distanceFieldTextureWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 maxDistance:(int)arg3 edgeInsets:(UIEdgeInsets)arg4 downsampleScale:(float)arg5 floatTexture:(char)arg6 GLState:(id)arg7 ;
-(void)p_setupShaders;
-(id)initWithTexture:(unsigned)arg1 textureSize:(CGSize)arg2 edgeInsets:(UIEdgeInsets)arg3 downsampleScale:(float)arg4 GLState:(id)arg5 ;
-(void)p_setupBuffers;
-(void)p_writeIntoSquareTexture;
-(void)p_seedTextureFromTexture:(unsigned)arg1 invertSeed:(char)arg2 ;
-(void)p_floodTextureInFramebuffer:(id)arg1 maxDistance:(int)arg2 ;
-(unsigned)p_combinedTextureWithCurrentGLFramebuffer:(int)arg1 floatTexture:(char)arg2 ;
-(unsigned)p_gradientTextureFromCombinedTexture:(unsigned)arg1 withCurrentGLFramebuffer:(int)arg2 ;
-(void)dealloc;
-(void)teardown;
@end
