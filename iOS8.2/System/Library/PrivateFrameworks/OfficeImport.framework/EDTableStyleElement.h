/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:38 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDKeyedObject.h>
#import <OfficeImport/NSCopying.h>

@class EDCollection, EDDifferentialStyle, NSString;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {

	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableStyleElementWithResources:(id)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)key;
-(id)initWithResources:(id)arg1 ;
-(id)differentialStyle;
-(void)setDifferentialStyle:(id)arg1 ;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)arg1 ;
-(void)setDifferentialStyleWithIndex:(unsigned)arg1 ;
@end

