/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WDTable, WDTableRowProperties, NSMutableArray;

@interface WDTableRow : NSObject {

	unsigned long long mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;

}
-(void)dealloc;
-(id)table;
-(unsigned long long)index;
-(id)properties;
-(unsigned long long)cellCount;
-(id)cellAt:(unsigned long long)arg1 ;
-(id)addCell;
-(id)initWithTable:(id)arg1 at:(unsigned long long)arg2 ;
-(id)cellIterator;
-(id)newCellIterator;
-(id)addCellWithIndex:(unsigned long long)arg1 ;
@end

