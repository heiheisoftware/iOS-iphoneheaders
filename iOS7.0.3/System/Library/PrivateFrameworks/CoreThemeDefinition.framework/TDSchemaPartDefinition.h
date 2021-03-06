/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class CUIImage, NSArray, NSString, TDSchemaDefinition, NSSet;

@interface TDSchemaPartDefinition : NSManagedObject {

	CUIImage* previewImage;
	NSArray* renditions;
	NSArray* renditionGroups;
	unsigned partFeatures;

}

@property (nonatomic,@dynamic,retain) NSString * name; 
@property (nonatomic,@dynamic,retain) NSString * widgetID; 
@property (nonatomic,@dynamic,retain) TDSchemaDefinition * element; 
@property (nonatomic,@dynamic,retain) NSSet * productions; 
@property (nonatomic,retain) CUIImage * previewImage; 
@property (nonatomic,copy) NSArray * renditions; 
@property (nonatomic,retain) NSArray * renditionGroups; 
@property (assign,nonatomic) unsigned partFeatures; 
-(int)elementID;
-(void)setPreviewImage:(id)arg1 ;
-(id)displayName;
-(int)partID;
-(id)previewImage;
-(id)_schema;
-(const SCD_Struct_TD1*)cuiPartDefinition;
-(void)setRenditionGroups:(id)arg1 ;
-(void)setPartFeatures:(unsigned)arg1 ;
-(void)updateDerivedRenditionData;
-(int)_renditionKeyValueForTokenIdentifier:(unsigned short)arg1 ;
-(id)bestPreviewRendition;
-(id)validStatesWithDocument:(id)arg1 ;
-(id)renditionGroups;
-(id)renditions;
-(void)setRenditions:(id)arg1 ;
-(unsigned)partFeatures;
-(void)didTurnIntoFault;
@end

