/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSUMultipleChoiceListChoiceProviding.h>

@class NSArray;

@interface TSTPopUpMenuModel : TSPObject <TSUMultipleChoiceListChoiceProviding> {

	NSArray* mItems;

}
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)saveToArchive:(PopUpMenuModel*)arg1 archiver:(id)arg2 ;
-(int)valueTypeOfItemAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromString:(id)arg1 ;
-(SCD_Struct_TS52*)formatAtIndex:(unsigned long long)arg1 ;
-(id)dateAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromDate:(id)arg1 format:(SCD_Struct_TS52*)arg2 ;
-(double)numberAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromNumber:(double)arg1 format:(SCD_Struct_TS52*)arg2 ;
-(id)initWithItems:(id)arg1 context:(id)arg2 ;
-(void)loadFromArchive:(const PopUpMenuModel*)arg1 ;
-(bool)isEqualToChoices:(id)arg1 ;
-(bool)booleanAtIndex:(unsigned long long)arg1 ;
-(int)p_mcListTypeForArgType:(int)arg1 ;
-(int)p_mcListTypeOfListItem:(id)arg1 ;
-(id)p_listItemAtIndex:(unsigned long long)arg1 ;
-(double)p_numberForListItem:(id)arg1 ;
-(id)p_stringForListItem:(id)arg1 ;
-(id)p_dateForListItem:(id)arg1 ;
-(bool)p_booleanForListItem:(id)arg1 ;
-(id)displayStringAtIndex:(unsigned long long)arg1 ;
-(id)popUpItemFromBoolean:(bool)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)choices;
@end
