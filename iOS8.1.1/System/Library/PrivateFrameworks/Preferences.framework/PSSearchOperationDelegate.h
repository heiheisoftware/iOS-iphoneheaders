/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSSearchOperationDelegate <NSObject>
@required
-(void)searchOperationDidBegin:(id)arg1;
-(id)searchOperation:(id)arg1 filteredEntriesForEntries:(id)arg2;
-(void)searchOperation:(id)arg1 configureSearchResults:(id)arg2;
-(void)searchOperationDidFinish:(id)arg1 withResults:(id)arg2;
-(void)searchOperationDidCancel:(id)arg1;

@end

