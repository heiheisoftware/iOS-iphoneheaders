/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <AppSupport/CPBitmapStore.h>

@interface CPBitmapStoreSQL : CPBitmapStore {

	sqlite3Ref _db;
	sqlite3_stmtRef _findStmt;
	sqlite3_stmtRef _saveStmt;
	sqlite3_stmtRef _beginStmt;
	sqlite3_stmtRef _commitStmt;
	bool _dbIsReadOnly;
	bool _dbIsMissing;
	CFRunLoopObserverRef _txnObserver;

}
-(void)dealloc;
-(void)commitTransaction;
-(int)setVersion:(int)arg1 ;
-(int)version;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(void)purge;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(unsigned)memContentOffset;
-(bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(void)commitTxn;
-(void)removeImagesInGroups:(id)arg1 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(bool)arg4 scale:(double)arg5 fillMem:(/*^block*/ id)arg6 alternateCompletion:(/*^block*/ id)arg7 ;
-(sqlite3_stmtRef)findStmt;
-(void)beginAutoTxn;
-(sqlite3_stmtRef)saveStmt;
-(id)dbPath;
-(void)createDbAt:(const char*)arg1 ;
-(sqlite3_stmtRef)beginStmt;
-(sqlite3_stmtRef)commitStmt;
-(sqlite3Ref)db;
@end

