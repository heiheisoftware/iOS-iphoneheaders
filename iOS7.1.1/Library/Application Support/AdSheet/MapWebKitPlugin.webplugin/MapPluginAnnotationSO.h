/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <MapKit/MKAnnotation.h>

@class NSString;

@interface MapPluginAnnotationSO : NSObject <MKAnnotation> {

	bool _hasLeftCalloutButton;
	bool _hasRightCalloutButton;
	bool _animatesDrop;
	bool _draggable;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	unsigned long long _pinColor;
	SCD_Struct_Ma2 _coordinate;
	CGPoint _centerOffset;

}

@property (assign,nonatomic) SCD_Struct_Ma2 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                //@synthesize imageURLString=_imageURLString - In the implementation block
@property (assign) CGPoint centerOffset;                             //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign) bool hasLeftCalloutButton;                        //@synthesize hasLeftCalloutButton=_hasLeftCalloutButton - In the implementation block
@property (assign) bool hasRightCalloutButton;                       //@synthesize hasRightCalloutButton=_hasRightCalloutButton - In the implementation block
@property (assign) unsigned long long pinColor;                      //@synthesize pinColor=_pinColor - In the implementation block
@property (assign) bool animatesDrop;                                //@synthesize animatesDrop=_animatesDrop - In the implementation block
@property (assign) bool draggable;                                   //@synthesize draggable=_draggable - In the implementation block
-(id)imageURLString;
-(bool)hasLeftCalloutButton;
-(bool)hasRightCalloutButton;
-(id)initDroppedPinAtCoordinate:(SCD_Struct_Ma2)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(void)setImageURLString:(id)arg1 ;
-(void)setHasLeftCalloutButton:(bool)arg1 ;
-(void)setHasRightCalloutButton:(bool)arg1 ;
-(id)initWithWebScriptObject:(id)arg1 ;
-(unsigned long long)pinColor;
-(bool)animatesDrop;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)identifier;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setIdentifier:(id)arg1 ;
-(void)setPinColor:(unsigned long long)arg1 ;
-(void)setAnimatesDrop:(bool)arg1 ;
-(SCD_Struct_Ma2)coordinate;
-(CGPoint)centerOffset;
-(void)setCoordinate:(SCD_Struct_Ma2)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(bool)draggable;
-(void)setDraggable:(bool)arg1 ;
@end
