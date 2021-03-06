/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * groupName; 
@property (assign) double scale; 
@property (assign) CGRect backdropRect; 
@property (assign) double marginWidth; 
@property (assign) BOOL disablesOccludedBackdropBlurs; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(NSString *)statisticsType;
-(CGRect)backdropRect;
-(void)setBackdropRect:(CGRect)arg1 ;
-(double)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setScale:(double)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setDisablesOccludedBackdropBlurs:(BOOL)arg1 ;
-(void)setStatisticsType:(NSString *)arg1 ;
-(double)statisticsInterval;
-(void)setStatisticsInterval:(double)arg1 ;
-(id)statisticsValues;
-(BOOL)disablesOccludedBackdropBlurs;
-(double)marginWidth;
-(void)setMarginWidth:(double)arg1 ;
@end

