/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLIndexMapperDataSource;
@interface PLIndexMapper : NSObject {

	id<PLIndexMapperDataSource> _dataSource;

}
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)applyContainerChangeNotification:(id)arg1 changeTypes:(int)arg2 toFilteredIndexes:(id)arg3 ;
-(unsigned long long)indexForBackingIndex:(unsigned long long)arg1 ;
-(unsigned long long)backingIndexForIndex:(unsigned long long)arg1 ;
-(id)backingIndexesForIndexes:(id)arg1 ;
-(id)indexesForBackingIndexes:(id)arg1 ;
@end

