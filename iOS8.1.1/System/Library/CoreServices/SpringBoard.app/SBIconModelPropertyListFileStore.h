/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSURL, NSString;

@interface SBIconModelPropertyListFileStore : NSObject <SBIconModelStore> {

	NSURL* _currentIconStateURL;
	NSURL* _desiredIconStateURL;

}

@property (nonatomic,retain) NSURL * currentIconStateURL;              //@synthesize currentIconStateURL=_currentIconStateURL - In the implementation block
@property (nonatomic,retain) NSURL * desiredIconStateURL;              //@synthesize desiredIconStateURL=_desiredIconStateURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconState:(id*)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)_save:(id)arg1 url:(id)arg2 error:(id*)arg3 ;
-(BOOL)_delete:(id)arg1 error:(id*)arg2 ;
-(id)_load:(id)arg1 error:(id*)arg2 ;
-(NSURL *)currentIconStateURL;
-(void)setCurrentIconStateURL:(NSURL *)arg1 ;
-(NSURL *)desiredIconStateURL;
-(void)setDesiredIconStateURL:(NSURL *)arg1 ;
-(void)dealloc;
@end

