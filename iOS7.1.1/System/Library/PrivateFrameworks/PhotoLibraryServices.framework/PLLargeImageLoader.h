/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPreheatItemSource.h>

@interface PLLargeImageLoader : NSObject <PLPreheatItemSource> {

	int _format;

}

@property (assign,nonatomic) int format;              //@synthesize format=_format - In the implementation block
-(id)initWithFormat:(int)arg1 ;
-(id)preheatItemForAsset:(id)arg1 options:(unsigned)arg2 ;
-(int)format;
-(void)setFormat:(int)arg1 ;
@end

