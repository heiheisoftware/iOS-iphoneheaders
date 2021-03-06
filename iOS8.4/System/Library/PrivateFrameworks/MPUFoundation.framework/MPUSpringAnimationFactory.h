/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUAnimationFactory.h>

@interface MPUSpringAnimationFactory : MPUAnimationFactory {

	double _damping;
	double _mass;
	double _stiffness;
	double _velocity;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double mass;                   //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;              //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double velocity;               //@synthesize velocity=_velocity - In the implementation block
+(void)animateUsingSpringWithDamping:(double)arg1 mass:(double)arg2 stiffness:(double)arg3 velocity:(double)arg4 animations:(/*^block*/id)arg5 options:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(double)stiffness;
-(void)setVelocity:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(double)damping;
-(double)velocity;
-(double)mass;
-(double)durationForEpsilon:(double)arg1 ;
-(id)_newSpringAnimationForKeyPath:(id)arg1 ;
@end

