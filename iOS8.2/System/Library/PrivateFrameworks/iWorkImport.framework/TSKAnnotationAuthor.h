/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSString, TSUColor;

@interface TSKAnnotationAuthor : TSPObject {

	NSString* mName;
	TSUColor* mColor;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) TSUColor * storageColor; 
@property (nonatomic,readonly) TSUColor * popoverAuthorLabelColor; 
@property (nonatomic,readonly) TSUColor * popoverButtonTintColor; 
@property (nonatomic,readonly) TSUColor * textMarkupColor; 
@property (nonatomic,readonly) TSUColor * textHighlightColor; 
@property (nonatomic,readonly) TSUColor * cellViolatorColor; 
@property (nonatomic,readonly) TSUColor * flagStrokeColor; 
@property (nonatomic,readonly) TSUColor * flagPressedColor; 
@property (nonatomic,readonly) TSUColor * changeAdornmentsColor; 
@property (nonatomic,readonly) TSUColor * flagFillColor; 
@property (nonatomic,readonly) TSUColor * popoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarHoverColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedColor; 
@property (nonatomic,readonly) TSUColor * sidebarUsernameColor; 
@property (nonatomic,readonly) TSUColor * sidebarChangeBarColor; 
@property (nonatomic,readonly) TSUColor * sidebarSelectedBorderColor; 
@property (nonatomic,readonly) TSUColor * gradientStartColor; 
@property (nonatomic,readonly) TSUColor * gradientEndColor; 
@property (nonatomic,readonly) NSString * authorColorName; 
@property (nonatomic,readonly) NSString * appearanceColorForAuthor; 
@property (nonatomic,readonly) NSString * menuSwatchColorForAuthor; 
@property (nonatomic,readonly) char showAuthorComments; 
+(id)defaultAuthorName;
+(unsigned)presetColorCount;
+(id)authorStorageColorForIndex:(unsigned)arg1 ;
+(id)authorColorForIndex:(unsigned)arg1 forKey:(id)arg2 ;
+(id)authorColorNameForIndex:(unsigned)arg1 ;
+(id)authorColorAppearanceNameForIndex:(unsigned)arg1 ;
+(id)authorMenuSwatchColorForIndex:(unsigned)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(id)componentRootObject;
-(char)allowsImplicitComponentOwnership;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 color:(id)arg3 ;
-(char)showAuthorComments;
-(TSUColor *)storageColor;
-(unsigned)p_authorColorIndex;
-(void)setStorageColor:(TSUColor *)arg1 ;
-(TSUColor *)popoverButtonTintColor;
-(TSUColor *)popoverAuthorLabelColor;
-(TSUColor *)textMarkupColor;
-(TSUColor *)textHighlightColor;
-(TSUColor *)cellViolatorColor;
-(TSUColor *)flagStrokeColor;
-(TSUColor *)flagPressedColor;
-(TSUColor *)changeAdornmentsColor;
-(TSUColor *)flagFillColor;
-(TSUColor *)popoverColor;
-(TSUColor *)sidebarHoverColor;
-(TSUColor *)sidebarSelectedColor;
-(TSUColor *)sidebarUsernameColor;
-(TSUColor *)sidebarChangeBarColor;
-(TSUColor *)sidebarSelectedBorderColor;
-(TSUColor *)gradientStartColor;
-(NSString *)authorColorName;
-(NSString *)appearanceColorForAuthor;
-(NSString *)menuSwatchColorForAuthor;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(TSUColor *)gradientEndColor;
@end

