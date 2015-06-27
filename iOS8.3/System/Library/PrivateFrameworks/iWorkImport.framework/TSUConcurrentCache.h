/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:01 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUCache.h>

@class TSUReadWriteQueue;

@interface TSUConcurrentCache : TSUCache {

	TSUReadWriteQueue* mReadWriteQueue;

}

@property (nonatomic,readonly) TSUReadWriteQueue * readWriteQueue; 
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(char)hasFlushableContent;
-(void)removeObjectForKey:(id)arg1 andWait:(char)arg2 ;
-(TSUReadWriteQueue *)readWriteQueue;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end
