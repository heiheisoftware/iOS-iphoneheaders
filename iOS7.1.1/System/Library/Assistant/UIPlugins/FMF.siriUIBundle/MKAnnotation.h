/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_FM0 coordinate; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@optional
-(id)title;
-(id)subtitle;
-(void)setCoordinate:(SCD_Struct_FM0)arg1;

@required
-(SCD_Struct_FM0*)coordinate;
@end

