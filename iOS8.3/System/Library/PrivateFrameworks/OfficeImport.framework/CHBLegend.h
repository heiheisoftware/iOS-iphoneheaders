/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:05 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBLegend : NSObject
+(id)readFrom:(XlChartLegendFrame*)arg1 state:(id)arg2 ;
+(int)chdLegendPositionEnumFromXlLegendPosition:(int)arg1 ;
+(id)readCHDLegendEntryFrom:(const XlChartCustomLegend*)arg1 state:(id)arg2 ;
+(int)xlLegendPositionEnumFromCHDLegendPosition:(int)arg1 ;
@end
