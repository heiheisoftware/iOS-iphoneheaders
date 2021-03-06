/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsObject.h>
#import <Metal/MTLLibrarySPI.h>

@class MTLToolsPointerArray, NSString, NSArray;

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI> {

	MTLToolsPointerArray* _functions;

}

@property (nonatomic,readonly) MTLToolsPointerArray * functions;              //@synthesize functions=_functions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)newFunctionWithName:(id)arg1 ;
-(MTLToolsPointerArray *)functions;
-(NSArray *)functionNames;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

