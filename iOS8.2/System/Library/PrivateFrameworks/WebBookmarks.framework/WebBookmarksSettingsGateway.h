/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate.h>

@class WebBookmarksXPCConnection, NSString;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {

	WebBookmarksXPCConnection* _connection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)connection:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)_clearConnection;
-(void)getCellularReadingListAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)setCellularReadingListAllowed:(char)arg1 ;
-(void)getSafariWebDataUsageWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSafariSecurityOrigins;
-(void)deleteSafariSecurityOrigin:(id)arg1 ;
-(void)deleteSafariPersistentURLCacheStorage;
-(id)getSafariDataUsageSummary;
-(void)clearAllSafariHistory;
@end
