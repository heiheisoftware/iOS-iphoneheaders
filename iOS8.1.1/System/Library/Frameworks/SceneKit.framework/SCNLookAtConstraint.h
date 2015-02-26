/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNConstraint.h>

@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint {

	id _reserved;
	SCNNode* _target;
	BOOL _gimbalLockEnabled;

}

@property (nonatomic,readonly) SCNNode * target; 
@property (assign,nonatomic) BOOL gimbalLockEnabled; 
+(id)SCNJSExportProtocol;
+(id)lookAtConstraintWithTarget:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)gimbalLockEnabled;
-(void)setGimbalLockEnabled:(BOOL)arg1 ;
-(void)_customEncodingOfSCNLookAtConstraint:(id)arg1 ;
-(void)_customDecodingOfSCNLookAtConstraint:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCNNode *)target;
-(id)initWithTarget:(id)arg1 ;
@end
