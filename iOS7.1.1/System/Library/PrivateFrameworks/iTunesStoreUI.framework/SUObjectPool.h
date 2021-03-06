/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface SUObjectPool : NSObject {

	NSMutableDictionary* _poolObjects;
	NSMutableArray* _vendedObjects;

}

@property (nonatomic,readonly) NSArray * vendedObjects;              //@synthesize vendedObjects=_vendedObjects - In the implementation block
-(void)dealloc;
-(id)copyPoppedObjectForClass:(Class)arg1 ;
-(id)vendedObjects;
-(id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3 ;
-(void)addObjects:(id)arg1 forClass:(Class)arg2 ;
@end

