/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface CheckPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	int _numberOfPreorders;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) int numberOfPreordersInQueue; 
-(id)_newURLOperation;
-(int)numberOfPreordersInQueue;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSNumber *)accountIdentifier;
@end
