/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DShaderEffect.h>

@interface TSCH3DTextureBlendShaderEffect : TSCH3DShaderEffect
+(void)setBlendFactor:(float)arg1 unit:(long long)arg2 effectsStates:(id)arg3 ;
+(id)variableBlendFactor;
+(id)variableBlendTexture;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)effect;
+(id)_singletonAlloc;
-(void)addVariables:(id)arg1 ;
-(void)inject:(id)arg1 ;
-(void)uploadData:(id)arg1 effectsStates:(id)arg2 ;
-(id)variableBlendFactor;
-(id)variableBlendTexture;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(oneway void)release;
@end

