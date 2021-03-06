/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>
#import <UIKit/_UISettingsKeyObserver.h>

@class UIImage, NSData;

@interface PTSImageSettings : _UISettings <_UISettingsKeyObserver> {

	BOOL _unarchiving;
	UIImage* _image;
	NSData* _pngData;
	int _imageOrientation;
	float _imageScale;

}

@property (retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (retain) NSData * pngData;                  //@synthesize pngData=_pngData - In the implementation block
@property (assign) int imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign) float imageScale;                  //@synthesize imageScale=_imageScale - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)init;
-(int)imageOrientation;
-(id)image;
-(void)applyArchiveValue:(id)arg1 forKey:(id)arg2 ;
-(id)archiveValueForKey:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateImageData;
-(void)setImageScale:(float)arg1 ;
-(void)setImageOrientation:(int)arg1 ;
-(id)pngData;
-(void)_updateImageProperties;
-(void)setPngData:(id)arg1 ;
-(void).cxx_destruct;
-(float)imageScale;
@end

