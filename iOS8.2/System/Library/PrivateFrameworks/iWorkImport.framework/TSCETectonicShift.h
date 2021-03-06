/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCEDependencyChanges.h>

@interface TSCETectonicShift : TSCEDependencyChanges {

	SCD_Struct_TS289 mShift;
	SCD_Struct_TS274 mRangeForShift;
	SCD_Struct_TS274 mRangeForDeletion;
	SCD_Struct_TS274 mInsertedRange;
	char mApplyToAbsolute;
	hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mRelocatedMergedCells;
	hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >* mRelocatedMergedCellsInverse;
	char mInsertingAfter;
	char mIgnoreStickyBits;
	SCD_Struct_TS274 mTableRange;

}
-(void)archive:(TectonicShiftArchive*)arg1 ;
-(SCD_Struct_TS274)deletedRange;
-(SCD_Struct_TS271)remappedCellIDFromCellID:(SCD_Struct_TS271)arg1 tableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 ;
-(id)initForDeletionAtIndex:(unsigned short)arg1 amount:(unsigned short)arg2 vertically:(char)arg3 tableID:(CFUUIDRef)arg4 relocatedMergedCells:(const hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >*)arg5 tableRange:(SCD_Struct_TS274)arg6 ;
-(SCD_Struct_TS274)remappedRangeFromRange:(SCD_Struct_TS274)arg1 tableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 ;
-(id)initForInsertionAtIndex:(unsigned short)arg1 amount:(unsigned short)arg2 vertically:(char)arg3 tableID:(CFUUIDRef)arg4 insertingAfter:(char)arg5 tableRange:(SCD_Struct_TS274)arg6 ;
-(id)initWithShift:(SCD_Struct_TS289)arg1 forRange:(SCD_Struct_TS274)arg2 deletedRange:(SCD_Struct_TS274)arg3 tableID:(CFUUIDRef)arg4 applyToAbsoluteReferences:(char)arg5 relocatedMergedCells:(const hash_map<TSUColumnRowCoordinate, TSUColumnRowCoordinate, TSCECellCoordinateHash, TSCECellCoordinateEqual, std::__1::allocator<std::__1::pair<const TSUColumnRowCoordinate, TSUColumnRowCoordinate> > >*)arg6 insertingAfter:(char)arg7 ignoreStickyBits:(char)arg8 tableRange:(SCD_Struct_TS274)arg9 insertedRange:(SCD_Struct_TS274)arg10 ;
-(SCD_Struct_TS271)p_CellIDConsideringRelocatedMerges:(SCD_Struct_TS271)arg1 ;
-(SCD_Struct_TS271)remappedCellIDFromCellID:(SCD_Struct_TS271)arg1 tableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 type:(int)arg4 otherRangeComponent:(SCD_Struct_TS271)arg5 ;
-(SCD_Struct_TS274)p_AdjustedRangeForShiftForCellID:(SCD_Struct_TS271)arg1 type:(int)arg2 otherRangeComponent:(SCD_Struct_TS271)arg3 ;
-(id)relocatedMergedCellsAsString;
-(id)initWithUnscopedShiftUsingBaseCellID:(SCD_Struct_TS271)arg1 targetCellID:(SCD_Struct_TS271)arg2 ignoreStickyBits:(char)arg3 ;
-(id)copyByAdjustingTableID:(CFUUIDRef)arg1 ;
-(id)shiftForUndo;
-(SCD_Struct_TS289)gridShift;
-(SCD_Struct_TS271)inverseMappedCellIDFromCellID:(SCD_Struct_TS271)arg1 tableID:(CFUUIDRef)arg2 stickyBits:(unsigned char)arg3 ;
-(SCD_Struct_TS274)insertedRange;
-(id)inverseRelocatedMergedCellsAsString;
-(id)description;
-(char)isVertical;
-(SCD_Struct_TS274)affectedRange;
-(id)initWithArchive:(const TectonicShiftArchive*)arg1 ;
-(SCD_Struct_TS274)tableRange;
@end

