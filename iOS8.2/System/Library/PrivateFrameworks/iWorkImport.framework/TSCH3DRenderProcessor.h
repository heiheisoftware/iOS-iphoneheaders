/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DRenderProcessor : NSObject
+(id)processor;
-(void)geometry:(id)arg1 ;
-(void)updateRenderState;
-(void)pushRenderState;
-(void)popRenderState;
-(RenderState)renderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)normals:(id)arg1 ;
-(void)texcoords:(id)arg1 ;
-(int)texture:(id)arg1 ;
-(char)canRenderPrefilteredLines;
-(id)effects;
-(void)popState;
-(void)pushState;
@end

