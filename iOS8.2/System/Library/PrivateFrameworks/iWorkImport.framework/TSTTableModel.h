/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableStrokeProviding.h>
#import <iWorkImport/TSDMixing.h>

@class TSDStroke, TSTTableDataStore, NSString, TSTHiddenStateFormulaOwner, TSTSortRuleReferenceTracker, TSCEOwnerFormulaMap, TSTImportWarningSetByCoordinateMap, TSCECalculationEngine, TSTCellDictionary, TSCECellCoordinateVector, TSTConditionalStyleFormulaOwner, TSWPStorage, TSTTableFilterSet, TSTTableSortOrder, TSKDocumentRoot, TSTTableStyle, TSTCellStyle, TSWPParagraphStyle, TSWPShapeStyle, TSTCell, TSDFill, NSArray;

@interface TSTTableModel : TSPObject <TSTTableStrokeProviding, TSDMixing> {

	TSTTableDataStore* mDataStore;
	CFUUIDRef mTableID;
	CFUUIDRef mFromTableID;
	unsigned short mNumberOfRows;
	unsigned short mNumberOfColumns;
	unsigned short mNumberOfHeaderRows;
	unsigned short mNumberOfHeaderColumns;
	unsigned short mNumberOfFooterRows;
	char mHeaderRowsFrozen;
	char mHeaderColumnsFrozen;
	unsigned short mNumberOfHiddenRows;
	unsigned short mNumberOfHiddenColumns;
	unsigned short mNumberOfUserHiddenRows;
	unsigned short mNumberOfUserHiddenColumns;
	unsigned short mNumberOfFilteredRows;
	float mDefaultRowHeight;
	float mDefaultColumnWidth;
	NSString* mTableName;
	char mTableNameEnabled;
	float mTableNameHeight;
	char mTableNameBorderEnabled;
	char mRepeatingHeaderRowsEnabled;
	char mRepeatingHeaderColumnsEnabled;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForRows;
	TSTHiddenStateFormulaOwner* mHiddenStateFormulaOwnerForColumns;
	TSTSortRuleReferenceTracker* mSortRuleReferenceTracker;
	unsigned mPresetID;
	char mStyleApplyClearsAll;
	SCD_Struct_TS484 mStyles;
	TSTDefaultCellBlock mDefaultCells;
	TSCEOwnerFormulaMap* mFormulasForUndo;
	TSTImportWarningSetByCoordinateMap* mWarningSetsForUndo;
	TSCECalculationEngine* mCalcEngine;
	TSTCellDictionary* mCellsPendingWrite;
	opaque_pthread_mutex_t mCellsToInvalidateAfterRecalcLock;
	TSCECellCoordinateVector* mCellsToInvalidateAfterRecalc;
	TSCECellCoordinateVector* mCellsToInvalidateNonoverflowingAfterRecalc;
	TSTConditionalStyleFormulaOwner* mConditionalStyleFormulaOwner;
	TSWPStorage* mDeprecatedProvider;
	char mWasUnarchivedFromAProvidedTable;
	TSTTableFilterSet* mFilterSet;
	TSTTableSortOrder* mSortOrder;

}

@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (assign,nonatomic) TSCECalculationEngine * calcEngine; 
@property (nonatomic,retain) TSCEOwnerFormulaMap * formulasForUndo; 
@property (nonatomic,retain) TSTImportWarningSetByCoordinateMap * warningSetsForUndo; 
@property (nonatomic,readonly) CFUUIDRef tableID; 
@property (nonatomic,readonly) CFUUIDRef fromTableID; 
@property (nonatomic,retain) NSString * tableName; 
@property (assign,nonatomic) char tableNameEnabled; 
@property (assign,nonatomic) float tableNameHeight; 
@property (assign,nonatomic) char tableNameBorderEnabled; 
@property (nonatomic,readonly) TSDStroke * tableNameBorderStroke; 
@property (assign,nonatomic) char repeatingHeaderRowsEnabled; 
@property (assign,nonatomic) char repeatingHeaderColumnsEnabled; 
@property (assign,nonatomic) char styleApplyClearsAll; 
@property (nonatomic,readonly) char hasTableBorder; 
@property (nonatomic,readonly) char hasAlternatingRows; 
@property (nonatomic,readonly) int tableWritingDirection; 
@property (assign,nonatomic) unsigned short numberOfRows; 
@property (assign,nonatomic) unsigned short numberOfColumns; 
@property (assign,nonatomic) unsigned short numberOfHeaderRows; 
@property (assign,nonatomic) unsigned short numberOfFooterRows; 
@property (assign,nonatomic) unsigned short numberOfHeaderColumns; 
@property (nonatomic,readonly) unsigned short numberOfHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenRows; 
@property (nonatomic,readonly) unsigned short numberOfUserHiddenColumns; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyRows; 
@property (nonatomic,readonly) unsigned short numberOfVisibleBodyColumns; 
@property (assign,nonatomic) unsigned presetID; 
@property (assign,nonatomic) char headerRowsFrozen; 
@property (assign,nonatomic) char headerColumnsFrozen; 
@property (nonatomic,readonly) TSTTableStyle * tableStyle; 
@property (nonatomic,readonly) TSTCellStyle * bodyCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerRowCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * headerColumnCellStyle; 
@property (nonatomic,readonly) TSTCellStyle * footerRowCellStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * bodyTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * headerColumnTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * footerRowTextStyle; 
@property (nonatomic,readonly) TSWPParagraphStyle * tableNameStyle; 
@property (nonatomic,readonly) TSWPShapeStyle * tableNameShapeStyle; 
@property (nonatomic,readonly) TSTCell * defaultBodyCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderRowCell; 
@property (nonatomic,readonly) TSTCell * defaultHeaderColumnCell; 
@property (nonatomic,readonly) TSTCell * defaultFooterRowCell; 
@property (nonatomic,readonly) TSDFill * backgroundFill; 
@property (nonatomic,readonly) TSDFill * bodyFill; 
@property (nonatomic,readonly) TSDFill * headerColumnsFill; 
@property (nonatomic,readonly) TSDFill * headerRowsFill; 
@property (nonatomic,readonly) TSDFill * footerRowsFill; 
@property (assign,nonatomic) TSTConditionalStyleFormulaOwner * conditionalStyleFormulaOwner; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForRows; 
@property (nonatomic,readonly) TSTHiddenStateFormulaOwner * hiddenStateFormulaOwnerForColumns; 
@property (nonatomic,readonly) TSTSortRuleReferenceTracker * sortRuleReferenceTracker; 
@property (nonatomic,copy) TSTTableFilterSet * filterSet; 
@property (assign,nonatomic) char wasUnarchivedFromAProvidedTable; 
@property (nonatomic,readonly) TSTCellDictionary * cellsPendingWrite; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateAfterRecalc; 
@property (nonatomic,readonly) TSCECellCoordinateVector * cellsToInvalidateNonoverflowingAfterRecalc; 
@property (nonatomic,copy) TSTTableSortOrder * sortOrder; 
@property (assign) NSArray * rowHeights; 
@property (assign) NSArray * columnWidths; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSDStroke * borderStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * defaultVerticalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * bodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowSeparatorStroke; 
+(id)unnamedTableString;
+(int)tableAreaForCellID:(SCD_Struct_TS271)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalRows:(unsigned short)arg5 ;
+(SCD_Struct_TS483)cellRangeForTableArea:(int)arg1 givenTableSize:(SCD_Struct_TS482)arg2 numberOfHeaderRows:(unsigned short)arg3 numberOfFooterRows:(unsigned short)arg4 numberOfHeaderColumns:(unsigned short)arg5 ;
+(CFDictionaryRef)newIDMapForPastedTablesInDrawables:(id)arg1 calculationEngine:(id)arg2 ;
+(void)chooseUniqueNameForTables:(id)arg1 inContainer:(id)arg2 forPaste:(char)arg3 ;
+(void)load;
-(void)setTableStyle:(TSTTableStyle *)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(CFUUIDRef)tableID;
-(void)upgradeFromPreUFF;
-(void)registerAllFormulasWithCalculationEngine:(id)arg1 ;
-(TSCECalculationEngine *)calcEngine;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setTableID:(CFUUIDRef)arg1 ;
-(int)tableAreaForCellID:(SCD_Struct_TS271)arg1 ;
-(void)p_releaseExistingDefaultStyles;
-(TSTCellStyle *)bodyCellStyle;
-(TSTCellStyle *)headerRowCellStyle;
-(TSTCellStyle *)headerColumnCellStyle;
-(TSTCellStyle *)footerRowCellStyle;
-(TSWPParagraphStyle *)headerRowTextStyle;
-(TSWPParagraphStyle *)headerColumnTextStyle;
-(TSWPParagraphStyle *)footerRowTextStyle;
-(TSWPParagraphStyle *)tableNameStyle;
-(TSWPShapeStyle *)tableNameShapeStyle;
-(unsigned)presetID;
-(void)resetStyles:(id)arg1 ;
-(void)setupDefaultCells;
-(id)initWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3 styles:(id)arg4 tableInfo:(id)arg5 ;
-(CFUUIDRef)fromTableID;
-(char)repeatingHeaderRowsEnabled;
-(char)repeatingHeaderColumnsEnabled;
-(char)headerRowsFrozen;
-(char)headerColumnsFrozen;
-(unsigned short)numberOfHeaderRows;
-(unsigned short)numberOfHeaderColumns;
-(unsigned short)numberOfFooterRows;
-(char)tableNameEnabled;
-(char)tableNameBorderEnabled;
-(void)setTableNameBorderEnabled:(char)arg1 ;
-(float)tableNameHeight;
-(void)setTableNameHeight:(float)arg1 ;
-(char)styleApplyClearsAll;
-(void)setStyleApplyClearsAll:(char)arg1 ;
-(TSTTableFilterSet *)filterSet;
-(SCD_Struct_TS483)cellRangeForTableArea:(int)arg1 ;
-(void)filterSetUpdated;
-(id)addRules:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)addRules:(id)arg1 atRuleIndices:(id)arg2 inFilter:(unsigned)arg3 isNew:(char)arg4 ;
-(id)removeRulesWithIndices:(id)arg1 inFilter:(unsigned)arg2 ;
-(id)replaceRule:(id)arg1 atRuleIndex:(unsigned)arg2 inFilter:(unsigned)arg3 ;
-(void)setFilterSetType:(int)arg1 ;
-(void)dirtyFilterState;
-(void)setStorageParentToInfo:(id)arg1 ;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(char)arg2 needsNewName:(char)arg3 avoidNames:(id)arg4 ;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(char)arg2 needsNewName:(char)arg3 ;
-(id)defaultCellForTableArea:(int)arg1 ;
-(TSTConditionalStyleFormulaOwner *)conditionalStyleFormulaOwner;
-(void)p_fetchCellHoldingReadLock:(void*)arg1 returnCode:(void*)arg2 ;
-(id)defaultCellStyleForTableArea:(int)arg1 ;
-(id)defaultTextStyleForTableArea:(int)arg1 ;
-(SCD_Struct_TS483)bodyRange;
-(void)p_clearDataListEntriesInRange:(SCD_Struct_TS483)arg1 ignoreSizeChecks:(char)arg2 ;
-(SCD_Struct_TS483)headerRowRange;
-(SCD_Struct_TS483)footerRowRange;
-(SCD_Struct_TS483)bodyRowRange;
-(SCD_Struct_TS483)headerColumnRange;
-(SCD_Struct_TS483)bodyColumnRange;
-(void)defaultStrokesForCellID:(SCD_Struct_TS271)arg1 inTableWithHeaderColumns:(unsigned short)arg2 headerRows:(unsigned short)arg3 footerRows:(unsigned short)arg4 totalColumns:(unsigned short)arg5 totalRows:(unsigned short)arg6 tableArea:(int)arg7 outTopStroke:(id*)arg8 outLeftStroke:(id*)arg9 outBottomStroke:(id*)arg10 outRightStroke:(id*)arg11 ;
-(TSTHiddenStateFormulaOwner *)hiddenStateFormulaOwnerForRows;
-(TSTHiddenStateFormulaOwner *)hiddenStateFormulaOwnerForColumns;
-(TSTSortRuleReferenceTracker *)sortRuleReferenceTracker;
-(void)setPresetID:(unsigned)arg1 ;
-(void)setTableNameStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setTableNameShapeStyle:(TSWPShapeStyle *)arg1 ;
-(void)mapTableStylesToStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)p_scaleStrokeFromProperty:(int)arg1 style:(id)arg2 pmap:(id)arg3 scale:(float)arg4 ;
-(void)p_scaleStrokesOnCell:(id)arg1 atCellID:(SCD_Struct_TS271)arg2 transformedObjects:(id)arg3 scale:(float)arg4 ;
-(id)allRichTextPayloadStorages;
-(TSDStroke *)tableNameBorderStroke;
-(char)hasAlternatingRows;
-(id)initWithContext:(id)arg1 fromSourceModel:(id)arg2 region:(id)arg3 tableInfo:(id)arg4 waitForCalcEngine:(char)arg5 ;
-(void)setTableNameEnabled:(char)arg1 ;
-(void)setBodyCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderColumnCellStyle:(TSTCellStyle *)arg1 ;
-(void)setFooterRowCellStyle:(TSTCellStyle *)arg1 ;
-(void)setHeaderRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setHeaderColumnTextStyle:(TSWPParagraphStyle *)arg1 ;
-(void)setFooterRowTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSDStroke *)borderStrokeEvenIfNotVisible;
-(TSDStroke *)defaultHorizontalBorderStroke;
-(TSDStroke *)defaultVerticalBorderStroke;
-(TSDStroke *)bodyColumnStroke;
-(TSDStroke *)bodyRowStroke;
-(TSDStroke *)headerColumnBorderStroke;
-(TSDStroke *)headerColumnBodyColumnStroke;
-(TSDStroke *)headerColumnBodyRowStroke;
-(TSDStroke *)headerColumnSeparatorStroke;
-(TSDStroke *)headerRowBorderStroke;
-(TSDStroke *)headerRowBodyColumnStroke;
-(TSDStroke *)headerRowBodyRowStroke;
-(TSDStroke *)headerRowSeparatorStroke;
-(TSDStroke *)footerRowBorderStroke;
-(TSDStroke *)footerRowBodyColumnStroke;
-(TSDStroke *)footerRowBodyRowStroke;
-(TSDStroke *)footerRowSeparatorStroke;
-(void)setDrawableIsBeingCopied:(char)arg1 ;
-(void)bakeFormulas;
-(void)setRepeatingHeaderRowsEnabled:(char)arg1 ;
-(void)setRepeatingHeaderColumnsEnabled:(char)arg1 ;
-(void)setNumberOfHeaderRows:(unsigned short)arg1 ;
-(void)setNumberOfFooterRows:(unsigned short)arg1 ;
-(void)setNumberOfHeaderColumns:(unsigned short)arg1 ;
-(void)setHeaderRowsFrozen:(char)arg1 ;
-(void)setHeaderColumnsFrozen:(char)arg1 ;
-(char)hasTableBorder;
-(int)tableWritingDirection;
-(void)setConditionalStyleFormulaOwner:(TSTConditionalStyleFormulaOwner *)arg1 ;
-(void)resetSortRuleReferenceTrackerForInsert;
-(void)setFilterSet:(TSTTableFilterSet *)arg1 ;
-(id)duplicateFilterSet;
-(id)removeFilterRules:(id)arg1 ;
-(char)needsFilterFormulaRewriteForImport;
-(void)setNeedsFilterFormulaRewriteForImport:(char)arg1 ;
-(void)mutateFormulaFiltersUsingBlock:(/*^block*/id)arg1 ;
-(void)enableRule:(char)arg1 atIndex:(unsigned)arg2 inFilterIndex:(unsigned)arg3 ;
-(void)enableFilter:(char)arg1 atIndex:(unsigned)arg2 ;
-(void)enableFilterSet:(char)arg1 ;
-(void)setFilterRulesAtAbsoluteIndices:(id)arg1 enabled:(char)arg2 ;
-(char)hasActiveFilters;
-(char)canTranspose;
-(void)clearFromTableID;
-(TSTCell *)defaultBodyCell;
-(TSTCell *)defaultFooterRowCell;
-(TSTCell *)defaultHeaderRowCell;
-(TSTCell *)defaultHeaderColumnCell;
-(char)useBandedFill;
-(id)bandedFillObject;
-(void)chooseUniqueNameInContainer:(id)arg1 forPaste:(char)arg2 ;
-(int)defaultCell:(id)arg1 forTableArea:(int)arg2 ;
-(id)applyCellDiff:(id)arg1 atCellID:(SCD_Struct_TS271)arg2 ;
-(id)columnNameForCellID:(SCD_Struct_TS271)arg1 cellRangeContainingName:(SCD_Struct_TS483*)arg2 restrictToBodyRange:(char)arg3 ;
-(id)rowNameForCellID:(SCD_Struct_TS271)arg1 cellRangeContainingName:(SCD_Struct_TS483*)arg2 restrictToBodyRange:(char)arg3 ;
-(void)setHeight:(float)arg1 ofRow:(unsigned short)arg2 ;
-(void)setWidth:(float)arg1 ofColumn:(unsigned char)arg2 ;
-(NSArray *)rowHeights;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(void)setRowHeights:(NSArray *)arg1 ;
-(char)isRowHidden:(unsigned short)arg1 forAction:(int)arg2 ;
-(char)isColumnHidden:(unsigned char)arg1 forAction:(int)arg2 ;
-(int)hidingStateForRow:(unsigned short)arg1 ;
-(int)hidingStateForColumn:(unsigned char)arg1 ;
-(unsigned short)numberOfVisibleBodyRows;
-(unsigned short)numberOfVisibleBodyColumns;
-(char)hasMergeRanges;
-(id)mergedGridIndicesForDirection:(int)arg1 ;
-(TSDFill *)backgroundFill;
-(TSDFill *)bodyFill;
-(TSDFill *)headerColumnsFill;
-(TSDFill *)headerRowsFill;
-(TSDFill *)footerRowsFill;
-(void)defaultStrokesForCellID:(SCD_Struct_TS271)arg1 outTopStroke:(id*)arg2 outLeftStroke:(id*)arg3 outBottomStroke:(id*)arg4 outRightStroke:(id*)arg5 ;
-(id)cellRegionWithConditionalStyleMatchingCell:(SCD_Struct_TS271)arg1 ;
-(void)remapTableIDsInFormulasWithMap:(CFDictionaryRef)arg1 calcEngine:(id)arg2 ;
-(void)copyPasteboardCustomFormatsToDocumentAndUpdateCellsInRegion:(id)arg1 ;
-(SCD_Struct_TS275*)referenceToHiddenStateFromRow:(unsigned short)arg1 toRow:(unsigned short)arg2 ;
-(SCD_Struct_TS275*)referenceToHiddenStateFromColumn:(unsigned char)arg1 toColumn:(unsigned char)arg2 ;
-(char)hasFormulas;
-(char)cellWasModifiedInCurrentRecalcCycle:(SCD_Struct_TS271)arg1 ;
-(void)moveCalcEngineReferencesFromSourceTable:(CFUUIDRef)arg1 sourceRange:(SCD_Struct_TS483)arg2 sourceOffset:(SCD_Struct_GQ13)arg3 ;
-(void)validateStyles;
-(void)private_validateMergeCellsPedantically;
-(SCD_Struct_TS483)minPopulatedCellRange;
-(void)transformStrokes:(CGAffineTransform)arg1 transformedObjects:(id)arg2 inBounds:(CGRect)arg3 ;
-(unsigned short)numberOfHiddenColumns;
-(unsigned short)numberOfUserHiddenRows;
-(unsigned short)numberOfUserHiddenColumns;
-(char)wasUnarchivedFromAProvidedTable;
-(void)setWasUnarchivedFromAProvidedTable:(char)arg1 ;
-(TSTCellDictionary *)cellsPendingWrite;
-(TSCECellCoordinateVector *)cellsToInvalidateAfterRecalc;
-(TSCECellCoordinateVector *)cellsToInvalidateNonoverflowingAfterRecalc;
-(void)setCalcEngine:(TSCECalculationEngine *)arg1 ;
-(TSCEOwnerFormulaMap *)formulasForUndo;
-(void)setFormulasForUndo:(TSCEOwnerFormulaMap *)arg1 ;
-(TSTImportWarningSetByCoordinateMap *)warningSetsForUndo;
-(void)setWarningSetsForUndo:(TSTImportWarningSetByCoordinateMap *)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned short)numberOfColumns;
-(void)validate;
-(unsigned short)numberOfRows;
-(void)setSortOrder:(TSTTableSortOrder *)arg1 ;
-(TSTTableSortOrder *)sortOrder;
-(SCD_Struct_TS483)range;
-(void)setNumberOfRows:(unsigned short)arg1 ;
-(void)setNumberOfColumns:(unsigned short)arg1 ;
-(NSString *)tableName;
-(TSTTableStyle *)tableStyle;
-(TSKDocumentRoot *)documentRoot;
-(void)setBodyTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSWPParagraphStyle *)bodyTextStyle;
-(NSArray *)columnWidths;
-(unsigned short)numberOfHiddenRows;
-(id)dataStore;
@end

