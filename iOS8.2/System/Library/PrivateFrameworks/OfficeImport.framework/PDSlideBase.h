/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, OADBackground, PDAnimation, PDTransition, OADTableStyle, OADShape;

@interface PDSlideBase : NSObject {

	NSString* mName;
	NSArray* mDrawables;
	OADBackground* mBackground;
	PDAnimation* mAnimation;
	PDTransition* mTransition;
	OADTableStyle* mDefaultTableStyle;
	unsigned mIsHidden : 1;
	unsigned mIsDoneWithContent : 1;
	char mCachedSlideNumberShape;
	OADShape* mSlideNumberShape;
	char mCachedSlideNumberPlaceholder;
	OADShape* mSlideNumberPlaceholder;

}

@property (nonatomic,readonly) OADShape * slideNumberShape; 
@property (nonatomic,readonly) OADShape * slideNumberPlaceholder; 
@property (nonatomic,readonly) char hasMappableSlideNumberShape; 
+(int)inheritedPlaceholderType:(int)arg1 ;
-(void)dealloc;
-(char)isHidden;
-(id)init;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)animation;
-(void)setTransition:(id)arg1 ;
-(id)transition;
-(void)setIsHidden:(char)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(id)drawables;
-(id)drawingTheme;
-(void)doneWithContent;
-(id)defaultTableStyle;
-(void)setDefaultTableStyle:(id)arg1 ;
-(void)addSlideNumberPlaceholder:(id)arg1 ;
-(id)parentTextStyleForTables;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(char)arg4 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3 ;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(char)arg3 overrideIndex:(char)arg4 ;
-(id)placeholders;
-(void)setPpt9AnimationDataForCacheItem:(id)arg1 order:(int)arg2 state:(id)arg3 ;
-(void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2 ;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(char)arg3 ;
-(OADShape *)slideNumberShape;
-(OADShape *)slideNumberPlaceholder;
-(char)hasMappableSlideNumberShape;
-(char)hasPpt10Animations;
-(char)hasPpt9Animations;
-(void)generatePpt9Animations:(id)arg1 ;
@end
