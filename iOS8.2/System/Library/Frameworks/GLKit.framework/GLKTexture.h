/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GLKit/GLKit-Structs.h>
@class NSData, NSString;

@interface GLKTexture : NSObject {

	NSData* imageData;
	CGImageBlockSetRef _blockSet;
	CFDataRef _cfData;
	unsigned _width;
	unsigned _height;
	unsigned orientation;
	unsigned numMipMapLevels;
	unsigned bitsPerPixel;
	unsigned _rowBytes;
	unsigned nComponents;
	unsigned nPrimarySurfaces;
	unsigned nSurfaces;
	int loadMode;
	int texelFormat;
	int _dataCategory;
	unsigned _index;
	unsigned GLTextureName;
	unsigned bindTarget;
	unsigned textureTarget;
	unsigned internalFormat;
	unsigned format;
	unsigned type;
	int _unpackAlignment;
	char _requestIssuedForAlphaPremultiplication;
	char _requestIssuedForMipmapGeneration;
	char _requestIssuedToReorientToGL;
	char _requestIssuedToInterpretGrayAsAlpha;
	char _requestIssuedForSRGB;
	char _hasPremultipliedAlpha;
	char isPowerOfTwo;
	char _isCubeMap;
	char isMipmapped;
	char isVerticalFlipped;
	char hasAlpha;
	char reOrient;
	unsigned _primarySurfaceLength;
	NSString* _label;

}

@property (readonly) NSData * imageData; 
@property (assign,nonatomic) unsigned GLTextureName; 
@property (assign,nonatomic) unsigned bindTarget; 
@property (assign,nonatomic) unsigned textureTarget; 
@property (assign,nonatomic) unsigned internalFormat; 
@property (assign,nonatomic) unsigned format; 
@property (assign,nonatomic) unsigned type; 
@property (assign,nonatomic) int texelFormat; 
@property (assign,nonatomic) unsigned width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned orientation; 
@property (assign,nonatomic) unsigned numMipMapLevels; 
@property (assign,nonatomic) unsigned bitsPerPixel; 
@property (assign,nonatomic) unsigned rowBytes;                      //@synthesize rowBytes=_rowBytes - In the implementation block
@property (assign,nonatomic) unsigned nComponents; 
@property (assign,nonatomic) unsigned nPrimarySurfaces; 
@property (assign,nonatomic) unsigned nSurfaces; 
@property (assign,nonatomic) int loadMode; 
@property (assign,nonatomic) int dataCategory;                       //@synthesize dataCategory=_dataCategory - In the implementation block
@property (assign,nonatomic) unsigned index;                         //@synthesize index=_index - In the implementation block
@property (readonly) char hasPremultipliedAlpha;                     //@synthesize hasPremultipliedAlpha=_hasPremultipliedAlpha - In the implementation block
@property (assign,nonatomic) char isPowerOfTwo; 
@property (assign,nonatomic) char isCubeMap;                         //@synthesize isCubeMap=_isCubeMap - In the implementation block
@property (assign,nonatomic) char isMipmapped; 
@property (assign,nonatomic) char isVerticalFlipped; 
@property (assign,nonatomic) char hasAlpha; 
@property (assign,nonatomic) char reOrient; 
@property (nonatomic,copy) NSString * label;                         //@synthesize label=_label - In the implementation block
-(void)updateRequestedOperationsFromOptions:(id)arg1 ;
-(char)loadWithData:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(char)loadPVRTCData:(id)arg1 error:(id*)arg2 ;
-(char)loadCGImage:(CGImageRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(int)loadMode;
-(int)dataCategory;
-(char)isCubeMap;
-(unsigned)nComponents;
-(int)texelFormat;
-(unsigned)internalFormat;
-(char)isPowerOfTwo;
-(char)isVerticalFlipped;
-(unsigned)bindTarget;
-(char)determinePVRFormat:(unsigned)arg1 ;
-(void*)alignmentFix:(unsigned)arg1 data:(const void*)arg2 ;
-(char)shouldApplyReorientToGL;
-(char)shouldApplyPremultiplication;
-(char)determineCGImageBlockFormatWithComponentType:(int)arg1 andPixelSize:(unsigned long)arg2 andColorModel:(int)arg3 ;
-(char)decodeCGImageImageProvider:(CGImageRef)arg1 CGImageProvider:(CGImageProviderRef)arg2 ;
-(char)decodeCGImageDataProvider:(CGImageRef)arg1 ;
-(char)decodeCGImage:(CGImageRef)arg1 ;
-(char)canHonorSRGBrequest;
-(char)reorientToGL:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(char)premultiplyWithAlpha:(void*)arg1 source:(void*)arg2 withWidth:(unsigned)arg3 withHeight:(unsigned)arg4 withRowBytes:(unsigned)arg5 error:(id*)arg6 ;
-(char)_uploadToGLTexture:(unsigned)arg1 data:(id)arg2 width:(int)arg3 height:(int)arg4 dataCategory:(int)arg5 cubeMapIndex:(int)arg6 mipMapIndex:(int)arg7 error:(id*)arg8 ;
-(unsigned)rowBytes;
-(id)initWithData:(id)arg1 forceCubeMap:(char)arg2 wasCubeMap:(char*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 forceCubeMap:(char)arg2 wasCubeMap:(char*)arg3 cubeMapIndex:(int)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)initWithDecodedData:(id)arg1 width:(unsigned)arg2 height:(unsigned)arg3 rowBytes:(unsigned)arg4 texture:(id)arg5 cubeMapIndex:(int)arg6 options:(id)arg7 error:(id*)arg8 ;
-(char)uploadToGLTexture:(unsigned)arg1 error:(id*)arg2 ;
-(unsigned)GLTextureName;
-(void)setGLTextureName:(unsigned)arg1 ;
-(void)setLoadMode:(int)arg1 ;
-(void)setDataCategory:(int)arg1 ;
-(void)setBindTarget:(unsigned)arg1 ;
-(void)setInternalFormat:(unsigned)arg1 ;
-(void)setTexelFormat:(int)arg1 ;
-(unsigned)numMipMapLevels;
-(void)setNumMipMapLevels:(unsigned)arg1 ;
-(void)setRowBytes:(unsigned)arg1 ;
-(void)setNComponents:(unsigned)arg1 ;
-(unsigned)nPrimarySurfaces;
-(void)setNPrimarySurfaces:(unsigned)arg1 ;
-(unsigned)nSurfaces;
-(void)setNSurfaces:(unsigned)arg1 ;
-(char)hasPremultipliedAlpha;
-(void)setIsPowerOfTwo:(char)arg1 ;
-(void)setIsCubeMap:(char)arg1 ;
-(char)isMipmapped;
-(void)setIsMipmapped:(char)arg1 ;
-(void)setIsVerticalFlipped:(char)arg1 ;
-(char)reOrient;
-(void)setReOrient:(char)arg1 ;
-(char)hasAlpha;
-(unsigned)textureTarget;
-(void)setHasAlpha:(char)arg1 ;
-(void)setTextureTarget:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)orientation;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(unsigned)width;
-(NSString *)label;
-(unsigned)height;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)index;
-(void)setOrientation:(unsigned)arg1 ;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(NSData *)imageData;
-(unsigned)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned)arg1 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

