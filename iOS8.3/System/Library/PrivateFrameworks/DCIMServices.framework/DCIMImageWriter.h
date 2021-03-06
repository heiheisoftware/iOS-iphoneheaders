/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DCIMServices/DCIMServices-Structs.h>
@interface DCIMImageWriter : NSObject
+(id)defaultFileExtensionForAssetType:(short)arg1 ;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg1 andExtension:(id)arg2 isPhotoStream:(char)arg3 ;
+(void)writeableDataForImage:(id)arg1 previewImage:(id)arg2 imageData:(id)arg3 imageUTIType:(CFStringRef)arg4 exifProperties:(id)arg5 imageRefOut:(CGImage*)arg6 lowResImageRefOut:(CGImage*)arg7 thumbnailDataOut:(id*)arg8 imageUTITypeOut:(const _CFString*)arg9 exifPropertiesOut:(id*)arg10 isJPEGOut:(char*)arg11 imageDataOut:(id*)arg12 imageOrientation:(int)arg13 ;
+(id)incomingDirectoryPath;
+(id)incomingDirectoryPathForPhotoStream;
+(id)incomingAssetFilenameDelimiter;
+(id)avalanchePathExtension;
+(id)sharedDCIMWriter;
+(id)largeThumbnailInflightPathExtension;
+(id)diagnosticPathExtension;
+(id)preferredFileExtensionForType:(id)arg1 ;
-(id)_cameraAssetExtensionForType:(short)arg1 ;
-(void)_writeJPEGToPath:(id)arg1 withData:(id)arg2 thumbnail:(id)arg3 properties:(id)arg4 duringBurst:(char)arg5 ;
-(void)_writeJPEGFromIOSurface:(IOSurfaceRef)arg1 toPath:(id)arg2 orientation:(int)arg3 ;
-(char)saveImageJobToDisk:(id)arg1 ;
@end

