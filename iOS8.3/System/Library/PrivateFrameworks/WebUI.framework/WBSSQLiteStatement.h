/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class WBSSQLiteDatabase, NSDictionary, NSArray;

@interface WBSSQLiteStatement : NSObject {

	WBSSQLiteDatabase* _database;
	sqlite3_stmtRef _handle;
	NSDictionary* _columnNamesToIndexes;
	NSArray* _columnNames;

}

@property (nonatomic,readonly) NSArray * columnNames; 
@property (nonatomic,readonly) NSDictionary * columnNamesToIndexes; 
@property (nonatomic,readonly) sqlite3_stmtRef handle;                           //@synthesize handle=_handle - In the implementation block
@property (nonatomic,readonly) WBSSQLiteDatabase * database;                     //@synthesize database=_database - In the implementation block
-(WBSSQLiteDatabase *)database;
-(void)dealloc;
-(void)invalidate;
-(void)reset;
-(sqlite3_stmtRef)handle;
-(int)execute;
-(id)initWithDatabase:(id)arg1 query:(id)arg2 ;
-(id)fetch;
-(void)bindInt64:(long long)arg1 atParameterIndex:(unsigned)arg2 ;
-(void)bindNullAtParameterIndex:(unsigned)arg1 ;
-(void)bindDouble:(double)arg1 atParameterIndex:(unsigned)arg2 ;
-(void)bindInt:(int)arg1 atParameterIndex:(unsigned)arg2 ;
-(void)bindString:(id)arg1 atParameterIndex:(unsigned)arg2 ;
-(void)bindData:(id)arg1 atParameterIndex:(unsigned)arg2 ;
-(NSArray *)columnNames;
-(NSDictionary *)columnNamesToIndexes;
-(char)_isValid;
@end
