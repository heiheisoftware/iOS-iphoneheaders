/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary, SCNProgram;


@protocol SCNShadable <NSObject>
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
@optional
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)setProgram:(id)arg1;
-(SCNProgram *)program;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(id)arg1;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end
