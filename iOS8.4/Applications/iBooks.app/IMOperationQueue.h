/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperationQueue.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface IMOperationQueue : NSOperationQueue {

	NSMutableSet* _scheduledOperations;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)addOperation:(id)arg1 afterDelay:(double)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cancelAllOperations;
-(id)operations;
-(unsigned)operationCount;
@end
