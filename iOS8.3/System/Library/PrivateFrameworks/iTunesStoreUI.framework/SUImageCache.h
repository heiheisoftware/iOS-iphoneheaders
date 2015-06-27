/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPLRUDictionary;

@interface SUImageCache : NSObject {

	CPLRUDictionary* _dictionary;

}
-(void)dealloc;
-(id)init;
-(id)initWithMaximumCapacity:(int)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3 ;
-(id)imageForURL:(id)arg1 dataProvider:(id)arg2 ;
-(void)removeAllCachedImages;
@end
