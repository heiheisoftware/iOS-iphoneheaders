/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_Ma0 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@optional
-(id)title;
-(id)subtitle;
-(void)setCoordinate:(SCD_Struct_Ma0)arg1;

@required
-(SCD_Struct_Ma0*)coordinate;
@end
