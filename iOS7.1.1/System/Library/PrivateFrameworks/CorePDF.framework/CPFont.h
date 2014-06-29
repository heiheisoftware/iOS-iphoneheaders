/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class NSString;

@interface CPFont : NSObject <CPDisposable> {

	CGPDFFontRef cgPDFFont;
	CGFontRef cgFont;
	NSString* fontName;
	bool exactMatch;
	SCD_Struct_CP19 descriptor;
	CFDictionaryRef kernDictionary;
	double kernUnitsPerEm;
	bool isHorizontal;
	double defaultWidth;
	bool disposed;

}
-(void)dealloc;
-(double)capHeight;
-(id)fontName;
-(double)leading;
-(double)xHeight;
-(bool)isHorizontal;
-(void)dispose;
-(void)uniCharsFor:(unsigned long long)arg1 count:(unsigned long long*)arg2 toArray:(unsigned short*)arg3 maxChars:(unsigned)arg4 ;
-(CGPDFFontRef)cgPDFFont;
-(id)matchingFontName;
-(void)loadExternalFontInfoFor:(id)arg1 ;
-(void)getFontName;
-(void)loadEmbeddedFontInfo;
-(CGFontRef)cgFont;
-(bool)isSameFontAs:(id)arg1 ;
-(CGRect)fontBBox;
-(double)italicAngle;
-(double)ascent;
-(double)descent;
-(double)stemV;
-(double)stemH;
-(double)avgWidth;
-(double)missingWidth;
-(double)spaceWidth;
-(double)underlinePosition;
-(double)kernBetweenUnicode:(unsigned short)arg1 andUnicode:(unsigned short)arg2 ;
-(bool)getGlyphs:(unsigned short*)arg1 forCodes:(const unsigned short*)arg2 count:(unsigned)arg3 ;
-(unsigned)flags;
-(id)initWith:(CGPDFDictionaryRef)arg1 ;
-(double)underlineThickness;
-(void)finalize;
-(double)fontStretch;
-(double)fontWeight;
-(double)maxWidth;
@end
