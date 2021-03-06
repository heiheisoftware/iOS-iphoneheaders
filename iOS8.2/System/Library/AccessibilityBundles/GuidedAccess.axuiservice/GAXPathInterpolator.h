/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:22:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GuidedAccess/GuidedAccess-Structs.h>
@class UIBezierPath;

@interface GAXPathInterpolator : NSObject {

	UIBezierPath* _startingPath;
	UIBezierPath* _endingPath;
	void* _interpolationPathElementMappings;

}

@property (nonatomic,copy) UIBezierPath * startingPath;                           //@synthesize startingPath=_startingPath - In the implementation block
@property (nonatomic,copy) UIBezierPath * endingPath;                             //@synthesize endingPath=_endingPath - In the implementation block
@property (assign,nonatomic) void* interpolationPathElementMappings;              //@synthesize interpolationPathElementMappings=_interpolationPathElementMappings - In the implementation block
-(void)setEndingPath:(UIBezierPath *)arg1 ;
-(UIBezierPath *)startingPath;
-(UIBezierPath *)endingPath;
-(id)initWithStartingPath:(id)arg1 endingPath:(id)arg2 ;
-(id)interpolatedPathForProgress:(float)arg1 ;
-(void)setStartingPath:(UIBezierPath *)arg1 ;
-(void)setInterpolationPathElementMappings:(void*)arg1 ;
-(void*)interpolationPathElementMappings;
-(id)_enhancedByAddingPointsMatchingPath:(id)arg1 originalPath:(id)arg2 ;
-(CGPoint)_pointFromStartingPointAtDistance:(float)arg1 inPath:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

