/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Game Center/Game Center-Structs.h>
@interface GKBubbleLocation : NSObject {

	float _z;
	CGPoint _point;

}

@property (assign,nonatomic) CGPoint point;              //@synthesize point=_point - In the implementation block
@property (assign,z,nonatomic) float z;                  //@synthesize z=_z - In the implementation block
+(id)locationAtPoint:(CGPoint)arg1 z:(float)arg2 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(float)z;
-(void)setZ:(float)arg1 ;
@end
