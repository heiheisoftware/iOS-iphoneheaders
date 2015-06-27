/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicQueryDataSource.h>

@class NSMutableArray;

@interface MusicGeniusMixesDataSource : MusicQueryDataSource {

	NSMutableArray* _mixes;

}
-(char)isEmpty;
-(char)canSelectEntityAtIndex:(unsigned)arg1 ;
-(char)showsIndexBar;
-(unsigned)indexOfEntity:(id)arg1 ;
-(void)deleteEntityAtIndex:(unsigned)arg1 ;
-(char)_updateQueryPredicatesAndOrdering;
-(id)entities;
-(void)_invalidateCalculatedEntities;
-(int)editingTypeForEntityAtIndex:(unsigned)arg1 ;
-(char)entityIsNowPlayingAtIndex:(unsigned)arg1 ;
-(id)playbackContextForIndex:(unsigned)arg1 ;
@end
