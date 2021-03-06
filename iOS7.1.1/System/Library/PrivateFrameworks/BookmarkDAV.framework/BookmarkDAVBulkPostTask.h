/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostTask.h>

@class NSString, NSMutableArray, NSMutableDictionary, NSURL, NSArray, NSDictionary;

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask {

	NSString* _checkCTag;
	NSMutableArray* _parsedBookmarks;
	NSMutableDictionary* _parsedBookmarksByURL;
	NSMutableArray* _parsedFolders;
	NSMutableDictionary* _parsedFoldersByURL;
	NSMutableDictionary* _folderURLToChildrenURLOrder;
	NSString* _nextRootCTag;
	NSString* _nextRootSyncToken;
	NSURL* _checkCTagURL;

}

@property (readonly) NSArray * parsedBookmarks;                               //@synthesize parsedBookmarks=_parsedBookmarks - In the implementation block
@property (readonly) NSArray * parsedFolders;                                 //@synthesize parsedFolders=_parsedFolders - In the implementation block
@property (readonly) NSDictionary * folderURLToChildrenURLOrder;              //@synthesize folderURLToChildrenURLOrder=_folderURLToChildrenURLOrder - In the implementation block
@property (retain) NSString * nextRootCTag;                                   //@synthesize nextRootCTag=_nextRootCTag - In the implementation block
@property (retain) NSString * nextRootSyncToken;                              //@synthesize nextRootSyncToken=_nextRootSyncToken - In the implementation block
-(void)dealloc;
-(void)setNextRootCTag:(id)arg1 ;
-(void)setNextRootSyncToken:(id)arg1 ;
-(id)initWithDataPayload:(id)arg1 atURL:(id)arg2 checkCTag:(id)arg3 checkCTagURL:(id)arg4 ;
-(id)parsedBookmarks;
-(id)parsedFolders;
-(id)nextRootCTag;
-(id)nextRootSyncToken;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)additionalHeaderValues;
-(void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2 ;
-(id)folderURLToChildrenURLOrder;
@end

