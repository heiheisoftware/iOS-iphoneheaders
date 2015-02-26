/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TPLayerDelegateProxyDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TPLayerDelegateProxy : NSObject {

	id<TPLayerDelegateProxyDelegate> _delegate;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)clearDelegate;
-(void)displayLayer:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end
