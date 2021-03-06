/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCEFormulaOwning.h>

@class TSTTableInfo, TSCECalculationEngine, TSCECellCoordinateVector, NSString;

@interface TSTConditionalStyleFormulaOwner : NSObject <TSCEFormulaOwning> {

	TSTTableInfo* mTableInfo;
	TSCECalculationEngine* mCalculationEngine;
	CFUUIDRef mOwnerID;
	TSCECellCoordinateVector* mCellsToInvalidate;
	TSCECellCoordinateVector* mCellsToRewrite;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)releaseForCalculationEngine:(id)arg1 ;
-(void)retainForCalculationEngine:(id)arg1 ;
-(void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(void)rewriteForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS283)arg2 rewriteSpec:(id)arg3 ;
-(id)endRewriteForCalculationEngine:(id)arg1 spec:(id)arg2 ;
-(BOOL)serializeCalculations;
-(SCD_Struct_TS318)recalculateForCalculationEngine:(id)arg1 formulaID:(SCD_Struct_TS283)arg2 isInCycle:(BOOL)arg3 hasCalculatedPrecedents:(BOOL)arg4 ;
-(void)writeResultsForCalculationEngine:(id)arg1 ;
-(void)invalidateForCalculationEngine:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ;
-(id)initWithTableInfo:(id)arg1 ownerID:(CFUUIDRef)arg2 ;
-(void)setOwnerID:(CFUUIDRef)arg1 ;
-(void)replaceFormulaForConditionalStyle:(id)arg1 atCellID:(SCD_Struct_TS272)arg2 ;
-(void)setTableInfo:(id)arg1 ;
-(id)tableInfo;
-(int)registerWithCalculationEngineChoosingUniqueID:(id)arg1 ;
-(void)removeFormulaAtCellID:(SCD_Struct_TS272)arg1 ;
-(void)addFormulaForConditionalStyle:(id)arg1 atCellID:(SCD_Struct_TS272)arg2 ;
-(BOOL)checkConditionForCellID:(SCD_Struct_TS272)arg1 withConditionalStyle:(id)arg2 withIndex:(unsigned long long*)arg3 ;
-(void)changedConditionForCellID:(SCD_Struct_TS272)arg1 ;
-(CFUUIDRef)ownerID;
-(void)dealloc;
@end

